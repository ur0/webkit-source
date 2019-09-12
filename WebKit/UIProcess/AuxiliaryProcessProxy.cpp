/*
 * Copyright (C) 2012-2018 Apple Inc. All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 * 1. Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in the
 *    documentation and/or other materials provided with the distribution.
 *
 * THIS SOFTWARE IS PROVIDED BY APPLE INC. AND ITS CONTRIBUTORS ``AS IS''
 * AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO,
 * THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR
 * PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL APPLE INC. OR ITS CONTRIBUTORS
 * BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
 * CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
 * SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
 * INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
 * CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
 * ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF
 * THE POSSIBILITY OF SUCH DAMAGE.
 */

#include "config.h"
#include "AuxiliaryProcessProxy.h"

#include "AuxiliaryProcessMessages.h"
#include "LoadParameters.h"
#include "Logging.h"
#include "WebPageMessages.h"
#include <wtf/RunLoop.h>

namespace WebKit {

AuxiliaryProcessProxy::AuxiliaryProcessProxy(bool alwaysRunsAtBackgroundPriority)
    : m_alwaysRunsAtBackgroundPriority(alwaysRunsAtBackgroundPriority)
{
}

AuxiliaryProcessProxy::~AuxiliaryProcessProxy()
{
    if (m_connection)
        m_connection->invalidate();

    if (m_processLauncher) {
        m_processLauncher->invalidate();
        m_processLauncher = nullptr;
    }
}

void AuxiliaryProcessProxy::getLaunchOptions(ProcessLauncher::LaunchOptions& launchOptions)
{
    launchOptions.processIdentifier = m_processIdentifier;

    if (const char* userDirectorySuffix = getenv("DIRHELPER_USER_DIR_SUFFIX"))
        launchOptions.extraInitializationData.add("user-directory-suffix"_s, userDirectorySuffix);

    if (m_alwaysRunsAtBackgroundPriority)
        launchOptions.extraInitializationData.add("always-runs-at-background-priority"_s, "true");

#if ENABLE(DEVELOPER_MODE) && (PLATFORM(GTK) || PLATFORM(WPE))
    const char* varname;
    switch (launchOptions.processType) {
    case ProcessLauncher::ProcessType::Web:
        varname = "WEB_PROCESS_CMD_PREFIX";
        break;
#if ENABLE(NETSCAPE_PLUGIN_API)
    case ProcessLauncher::ProcessType::Plugin64:
    case ProcessLauncher::ProcessType::Plugin32:
        varname = "PLUGIN_PROCESS_CMD_PREFIX";
        break;
#endif
    case ProcessLauncher::ProcessType::Network:
        varname = "NETWORK_PROCESS_CMD_PREFIX";
        break;
    }
    const char* processCmdPrefix = getenv(varname);
    if (processCmdPrefix && *processCmdPrefix)
        launchOptions.processCmdPrefix = String::fromUTF8(processCmdPrefix);
#endif // ENABLE(DEVELOPER_MODE) && (PLATFORM(GTK) || PLATFORM(WPE))

    platformGetLaunchOptions(launchOptions);
}

void AuxiliaryProcessProxy::connect()
{
    ASSERT(!m_processLauncher);
    ProcessLauncher::LaunchOptions launchOptions;
    getLaunchOptions(launchOptions);
    m_processLauncher = ProcessLauncher::create(this, WTFMove(launchOptions));
}

void AuxiliaryProcessProxy::terminate()
{
#if PLATFORM(COCOA)
    if (m_connection && m_connection->kill())
        return;
#endif

    // FIXME: We should really merge process launching into IPC connection creation and get rid of the process launcher.
    if (m_processLauncher)
        m_processLauncher->terminateProcess();
}

AuxiliaryProcessProxy::State AuxiliaryProcessProxy::state() const
{
    if (m_processLauncher && m_processLauncher->isLaunching())
        return AuxiliaryProcessProxy::State::Launching;

    // There is sometimes a delay until we get the notification from mach about the connection getting closed.
    // To help detect terminated process earlier, we also check that the PID is for a valid running process.
    if (!m_connection || !isRunningProcessPID(processIdentifier()))
        return AuxiliaryProcessProxy::State::Terminated;

    return AuxiliaryProcessProxy::State::Running;
}

bool AuxiliaryProcessProxy::isRunningProcessPID(ProcessID pid)
{
    if (!pid)
        return false;

#if PLATFORM(COCOA)
    // Use kill() with a signal of 0 to check if there is actually still a process with the given PID.
    if (!kill(pid, 0))
        return true;

    if (errno == ESRCH) {
        // No process can be found corresponding to that specified by pid.
        return false;
    }

    RELEASE_LOG_ERROR(Process, "kill() returned unexpected error %d", errno);
    return true;
#else
    UNUSED_PARAM(pid);
    return true;
#endif
}

bool AuxiliaryProcessProxy::sendMessage(std::unique_ptr<IPC::Encoder> encoder, OptionSet<IPC::SendOption> sendOptions)
{
    switch (state()) {
    case State::Launching:
        // If we're waiting for the child process to launch, we need to stash away the messages so we can send them once we have a connection.
        m_pendingMessages.append(std::make_pair(WTFMove(encoder), sendOptions));
        return true;

    case State::Running:
        return connection()->sendMessage(WTFMove(encoder), sendOptions);

    case State::Terminated:
        return false;
    }

    return false;
}

void AuxiliaryProcessProxy::addMessageReceiver(IPC::StringReference messageReceiverName, IPC::MessageReceiver& messageReceiver)
{
    m_messageReceiverMap.addMessageReceiver(messageReceiverName, messageReceiver);
}

void AuxiliaryProcessProxy::addMessageReceiver(IPC::StringReference messageReceiverName, uint64_t destinationID, IPC::MessageReceiver& messageReceiver)
{
    m_messageReceiverMap.addMessageReceiver(messageReceiverName, destinationID, messageReceiver);
}

void AuxiliaryProcessProxy::removeMessageReceiver(IPC::StringReference messageReceiverName, uint64_t destinationID)
{
    m_messageReceiverMap.removeMessageReceiver(messageReceiverName, destinationID);
}

void AuxiliaryProcessProxy::removeMessageReceiver(IPC::StringReference messageReceiverName)
{
    m_messageReceiverMap.removeMessageReceiver(messageReceiverName);
}

bool AuxiliaryProcessProxy::dispatchMessage(IPC::Connection& connection, IPC::Decoder& decoder)
{
    return m_messageReceiverMap.dispatchMessage(connection, decoder);
}

bool AuxiliaryProcessProxy::dispatchSyncMessage(IPC::Connection& connection, IPC::Decoder& decoder, std::unique_ptr<IPC::Encoder>& replyEncoder)
{
    return m_messageReceiverMap.dispatchSyncMessage(connection, decoder, replyEncoder);
}

void AuxiliaryProcessProxy::didFinishLaunching(ProcessLauncher*, IPC::Connection::Identifier connectionIdentifier)
{
    ASSERT(!m_connection);

    if (!IPC::Connection::identifierIsValid(connectionIdentifier))
        return;

    m_connection = IPC::Connection::createServerConnection(connectionIdentifier, *this);

    connectionWillOpen(*m_connection);
    m_connection->open();

    for (size_t i = 0; i < m_pendingMessages.size(); ++i) {
        std::unique_ptr<IPC::Encoder> message = WTFMove(m_pendingMessages[i].first);
        OptionSet<IPC::SendOption> sendOptions = m_pendingMessages[i].second;
#if HAVE(SANDBOX_ISSUE_MACH_EXTENSION_TO_PROCESS_BY_PID)
        if (message->messageName() == "LoadRequestWaitingForPID") {
            auto buffer = message->buffer();
            auto bufferSize = message->bufferSize();
            std::unique_ptr<IPC::Decoder> decoder = makeUnique<IPC::Decoder>(buffer, bufferSize, nullptr, Vector<IPC::Attachment> { });
            LoadParameters loadParameters;
            String sandboxExtensionPath;
            if (decoder->decode(loadParameters) && decoder->decode(sandboxExtensionPath)) {
                SandboxExtension::createHandleForReadByPid(sandboxExtensionPath, processIdentifier(), loadParameters.sandboxExtensionHandle);
                send(Messages::WebPage::LoadRequest(loadParameters), decoder->destinationID());
                continue;
            }
        }
#endif
        m_connection->sendMessage(WTFMove(message), sendOptions);
    }

    m_pendingMessages.clear();
}

void AuxiliaryProcessProxy::shutDownProcess()
{
    switch (state()) {
    case State::Launching:
        m_processLauncher->invalidate();
        m_processLauncher = nullptr;
        break;
    case State::Running:
#if PLATFORM(IOS_FAMILY)
        // On iOS deploy a watchdog in the UI process, since the child process may be suspended.
        // If 30s is insufficient for any outstanding activity to complete cleanly, then it will be killed.
        ASSERT(m_connection);
        m_connection->terminateSoon(30_s);
#endif
        break;
    case State::Terminated:
        return;
    }

    if (!m_connection)
        return;

    processWillShutDown(*m_connection);

    if (canSendMessage())
        send(Messages::AuxiliaryProcess::ShutDown(), 0);

    m_connection->invalidate();
    m_connection = nullptr;
}

void AuxiliaryProcessProxy::setProcessSuppressionEnabled(bool processSuppressionEnabled)
{
#if PLATFORM(COCOA)
    if (state() != State::Running)
        return;

    connection()->send(Messages::AuxiliaryProcess::SetProcessSuppressionEnabled(processSuppressionEnabled), 0);
#else
    UNUSED_PARAM(processSuppressionEnabled);
#endif
}

void AuxiliaryProcessProxy::connectionWillOpen(IPC::Connection&)
{
}

} // namespace WebKit
