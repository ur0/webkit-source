/*
* Copyright (C) 2019 Apple Inc. All rights reserved.
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
* THIS SOFTWARE IS PROVIDED BY APPLE INC. ``AS IS'' AND ANY
* EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
* IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR
* PURPOSE ARE DISCLAIMED.  IN NO EVENT SHALL APPLE INC. OR
* CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL,
* EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO,
* PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR
* PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY
* OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
* (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
* OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
*/

#pragma once

#if ENABLE(RESOURCE_LOAD_STATISTICS)

#include <WebCore/PageIdentifier.h>
#include <WebCore/ResourceLoadObserver.h>
#include <WebCore/Timer.h>
#include <wtf/Forward.h>

namespace WebKit {

class WebResourceLoadObserver final : public WebCore::ResourceLoadObserver {
public:
    using PerSessionResourceLoadData = Vector<std::pair<PAL::SessionID, Vector<WebCore::ResourceLoadStatistics>>>;

    WebResourceLoadObserver();
    
    void logSubresourceLoading(const WebCore::Frame*, const WebCore::ResourceRequest& newRequest, const WebCore::ResourceResponse& redirectResponse) final;
    void logWebSocketLoading(const URL& targetURL, const URL& mainFrameURL, PAL::SessionID) final;
    void logUserInteractionWithReducedTimeResolution(const WebCore::Document&) final;
    void logFontLoad(const WebCore::Document&, const String& familyName, bool loadStatus) final;
    void logCanvasRead(const WebCore::Document&) final;
    void logCanvasWriteOrMeasure(const WebCore::Document&, const String& textWritten) final;
    void logNavigatorAPIAccessed(const WebCore::Document&, const WebCore::ResourceLoadStatistics::NavigatorAPI) final;
    void logScreenAPIAccessed(const WebCore::Document&, const WebCore::ResourceLoadStatistics::ScreenAPI) final;

#if !RELEASE_LOG_DISABLED
    void setShouldLogUserInteraction(bool shouldLogUserInteraction) final { m_shouldLogUserInteraction = shouldLogUserInteraction; }
#endif

    String statisticsForURL(PAL::SessionID, const URL&) final;
    void updateCentralStatisticsStore() final;
    void clearState() final;
    
    bool hasStatistics() const final { return !m_perSessionResourceStatisticsMap.isEmpty(); }

private:
    WebCore::ResourceLoadStatistics& ensureResourceStatisticsForRegistrableDomain(PAL::SessionID, const WebCore::RegistrableDomain&);
    void scheduleNotificationIfNeeded();

    PerSessionResourceLoadData takeStatistics();
    void requestStorageAccessUnderOpener(PAL::SessionID, const WebCore::RegistrableDomain& domainInNeedOfStorageAccess, WebCore::PageIdentifier openerPageID, WebCore::Document& openerDocument);

    HashMap<PAL::SessionID, std::unique_ptr<HashMap<WebCore::RegistrableDomain, WebCore::ResourceLoadStatistics>>> m_perSessionResourceStatisticsMap;
    HashMap<WebCore::RegistrableDomain, WTF::WallTime> m_lastReportedUserInteractionMap;

    WebCore::Timer m_notificationTimer;

#if !RELEASE_LOG_DISABLED
    uint64_t m_loggingCounter { 0 };
    bool m_shouldLogUserInteraction { false };
#endif
};

} // namespace WebKit

#endif // ENABLE(RESOURCE_LOAD_STATISTICS)