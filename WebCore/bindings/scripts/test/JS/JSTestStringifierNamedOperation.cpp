/*
    This file is part of the WebKit open source project.
    This file has been generated by generate-bindings.pl. DO NOT MODIFY!

    This library is free software; you can redistribute it and/or
    modify it under the terms of the GNU Library General Public
    License as published by the Free Software Foundation; either
    version 2 of the License, or (at your option) any later version.

    This library is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
    Library General Public License for more details.

    You should have received a copy of the GNU Library General Public License
    along with this library; see the file COPYING.LIB.  If not, write to
    the Free Software Foundation, Inc., 51 Franklin Street, Fifth Floor,
    Boston, MA 02110-1301, USA.
*/

#include "config.h"
#include "JSTestStringifierNamedOperation.h"

#include "JSDOMBinding.h"
#include "JSDOMConstructorNotConstructable.h"
#include "JSDOMConvertStrings.h"
#include "JSDOMExceptionHandling.h"
#include "JSDOMOperation.h"
#include "JSDOMWrapperCache.h"
#include "ScriptExecutionContext.h"
#include <JavaScriptCore/FunctionPrototype.h>
#include <JavaScriptCore/HeapAnalyzer.h>
#include <JavaScriptCore/JSCInlines.h>
#include <wtf/GetPtr.h>
#include <wtf/PointerPreparations.h>
#include <wtf/URL.h>


namespace WebCore {
using namespace JSC;

// Functions

JSC::EncodedJSValue JSC_HOST_CALL jsTestStringifierNamedOperationPrototypeFunctionIdentifier(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsTestStringifierNamedOperationPrototypeFunctionToString(JSC::ExecState*);

// Attributes

JSC::EncodedJSValue jsTestStringifierNamedOperationConstructor(JSC::ExecState*, JSC::EncodedJSValue, JSC::PropertyName);
bool setJSTestStringifierNamedOperationConstructor(JSC::ExecState*, JSC::EncodedJSValue, JSC::EncodedJSValue);

class JSTestStringifierNamedOperationPrototype : public JSC::JSNonFinalObject {
public:
    using Base = JSC::JSNonFinalObject;
    static JSTestStringifierNamedOperationPrototype* create(JSC::VM& vm, JSDOMGlobalObject* globalObject, JSC::Structure* structure)
    {
        JSTestStringifierNamedOperationPrototype* ptr = new (NotNull, JSC::allocateCell<JSTestStringifierNamedOperationPrototype>(vm.heap)) JSTestStringifierNamedOperationPrototype(vm, globalObject, structure);
        ptr->finishCreation(vm);
        return ptr;
    }

    DECLARE_INFO;
    static JSC::Structure* createStructure(JSC::VM& vm, JSC::JSGlobalObject* globalObject, JSC::JSValue prototype)
    {
        return JSC::Structure::create(vm, globalObject, prototype, JSC::TypeInfo(JSC::ObjectType, StructureFlags), info());
    }

private:
    JSTestStringifierNamedOperationPrototype(JSC::VM& vm, JSC::JSGlobalObject*, JSC::Structure* structure)
        : JSC::JSNonFinalObject(vm, structure)
    {
    }

    void finishCreation(JSC::VM&);
};

using JSTestStringifierNamedOperationConstructor = JSDOMConstructorNotConstructable<JSTestStringifierNamedOperation>;

template<> JSValue JSTestStringifierNamedOperationConstructor::prototypeForStructure(JSC::VM& vm, const JSDOMGlobalObject& globalObject)
{
    UNUSED_PARAM(vm);
    return globalObject.functionPrototype();
}

template<> void JSTestStringifierNamedOperationConstructor::initializeProperties(VM& vm, JSDOMGlobalObject& globalObject)
{
    putDirect(vm, vm.propertyNames->prototype, JSTestStringifierNamedOperation::prototype(vm, globalObject), JSC::PropertyAttribute::DontDelete | JSC::PropertyAttribute::ReadOnly | JSC::PropertyAttribute::DontEnum);
    putDirect(vm, vm.propertyNames->name, jsNontrivialString(vm, String("TestStringifierNamedOperation"_s)), JSC::PropertyAttribute::ReadOnly | JSC::PropertyAttribute::DontEnum);
    putDirect(vm, vm.propertyNames->length, jsNumber(0), JSC::PropertyAttribute::ReadOnly | JSC::PropertyAttribute::DontEnum);
}

template<> const ClassInfo JSTestStringifierNamedOperationConstructor::s_info = { "TestStringifierNamedOperation", &Base::s_info, nullptr, nullptr, CREATE_METHOD_TABLE(JSTestStringifierNamedOperationConstructor) };

/* Hash table for prototype */

static const HashTableValue JSTestStringifierNamedOperationPrototypeTableValues[] =
{
    { "constructor", static_cast<unsigned>(JSC::PropertyAttribute::DontEnum), NoIntrinsic, { (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsTestStringifierNamedOperationConstructor), (intptr_t) static_cast<PutPropertySlot::PutValueFunc>(setJSTestStringifierNamedOperationConstructor) } },
    { "identifier", static_cast<unsigned>(JSC::PropertyAttribute::Function), NoIntrinsic, { (intptr_t)static_cast<RawNativeFunction>(jsTestStringifierNamedOperationPrototypeFunctionIdentifier), (intptr_t) (0) } },
    { "toString", static_cast<unsigned>(JSC::PropertyAttribute::Function), NoIntrinsic, { (intptr_t)static_cast<RawNativeFunction>(jsTestStringifierNamedOperationPrototypeFunctionToString), (intptr_t) (0) } },
};

const ClassInfo JSTestStringifierNamedOperationPrototype::s_info = { "TestStringifierNamedOperationPrototype", &Base::s_info, nullptr, nullptr, CREATE_METHOD_TABLE(JSTestStringifierNamedOperationPrototype) };

void JSTestStringifierNamedOperationPrototype::finishCreation(VM& vm)
{
    Base::finishCreation(vm);
    reifyStaticProperties(vm, JSTestStringifierNamedOperation::info(), JSTestStringifierNamedOperationPrototypeTableValues, *this);
}

const ClassInfo JSTestStringifierNamedOperation::s_info = { "TestStringifierNamedOperation", &Base::s_info, nullptr, nullptr, CREATE_METHOD_TABLE(JSTestStringifierNamedOperation) };

JSTestStringifierNamedOperation::JSTestStringifierNamedOperation(Structure* structure, JSDOMGlobalObject& globalObject, Ref<TestStringifierNamedOperation>&& impl)
    : JSDOMWrapper<TestStringifierNamedOperation>(structure, globalObject, WTFMove(impl))
{
}

void JSTestStringifierNamedOperation::finishCreation(VM& vm)
{
    Base::finishCreation(vm);
    ASSERT(inherits(vm, info()));

}

JSObject* JSTestStringifierNamedOperation::createPrototype(VM& vm, JSDOMGlobalObject& globalObject)
{
    return JSTestStringifierNamedOperationPrototype::create(vm, &globalObject, JSTestStringifierNamedOperationPrototype::createStructure(vm, &globalObject, globalObject.objectPrototype()));
}

JSObject* JSTestStringifierNamedOperation::prototype(VM& vm, JSDOMGlobalObject& globalObject)
{
    return getDOMPrototype<JSTestStringifierNamedOperation>(vm, globalObject);
}

JSValue JSTestStringifierNamedOperation::getConstructor(VM& vm, const JSGlobalObject* globalObject)
{
    return getDOMConstructor<JSTestStringifierNamedOperationConstructor>(vm, *jsCast<const JSDOMGlobalObject*>(globalObject));
}

void JSTestStringifierNamedOperation::destroy(JSC::JSCell* cell)
{
    JSTestStringifierNamedOperation* thisObject = static_cast<JSTestStringifierNamedOperation*>(cell);
    thisObject->JSTestStringifierNamedOperation::~JSTestStringifierNamedOperation();
}

template<> inline JSTestStringifierNamedOperation* IDLOperation<JSTestStringifierNamedOperation>::cast(ExecState& state)
{
    return jsDynamicCast<JSTestStringifierNamedOperation*>(state.vm(), state.thisValue());
}

EncodedJSValue jsTestStringifierNamedOperationConstructor(ExecState* state, EncodedJSValue thisValue, PropertyName)
{
    VM& vm = state->vm();
    auto throwScope = DECLARE_THROW_SCOPE(vm);
    auto* prototype = jsDynamicCast<JSTestStringifierNamedOperationPrototype*>(vm, JSValue::decode(thisValue));
    if (UNLIKELY(!prototype))
        return throwVMTypeError(state, throwScope);
    return JSValue::encode(JSTestStringifierNamedOperation::getConstructor(state->vm(), prototype->globalObject()));
}

bool setJSTestStringifierNamedOperationConstructor(ExecState* state, EncodedJSValue thisValue, EncodedJSValue encodedValue)
{
    VM& vm = state->vm();
    auto throwScope = DECLARE_THROW_SCOPE(vm);
    auto* prototype = jsDynamicCast<JSTestStringifierNamedOperationPrototype*>(vm, JSValue::decode(thisValue));
    if (UNLIKELY(!prototype)) {
        throwVMTypeError(state, throwScope);
        return false;
    }
    // Shadowing a built-in constructor
    return prototype->putDirect(vm, vm.propertyNames->constructor, JSValue::decode(encodedValue));
}

static inline JSC::EncodedJSValue jsTestStringifierNamedOperationPrototypeFunctionIdentifierBody(JSC::ExecState* state, typename IDLOperation<JSTestStringifierNamedOperation>::ClassParameter castedThis, JSC::ThrowScope& throwScope)
{
    UNUSED_PARAM(state);
    UNUSED_PARAM(throwScope);
    auto& impl = castedThis->wrapped();
    return JSValue::encode(toJS<IDLDOMString>(*state, impl.identifier()));
}

EncodedJSValue JSC_HOST_CALL jsTestStringifierNamedOperationPrototypeFunctionIdentifier(ExecState* state)
{
    return IDLOperation<JSTestStringifierNamedOperation>::call<jsTestStringifierNamedOperationPrototypeFunctionIdentifierBody>(*state, "identifier");
}

static inline JSC::EncodedJSValue jsTestStringifierNamedOperationPrototypeFunctionToStringBody(JSC::ExecState* state, typename IDLOperation<JSTestStringifierNamedOperation>::ClassParameter castedThis, JSC::ThrowScope& throwScope)
{
    UNUSED_PARAM(state);
    UNUSED_PARAM(throwScope);
    auto& impl = castedThis->wrapped();
    return JSValue::encode(toJS<IDLDOMString>(*state, impl.identifier()));
}

EncodedJSValue JSC_HOST_CALL jsTestStringifierNamedOperationPrototypeFunctionToString(ExecState* state)
{
    return IDLOperation<JSTestStringifierNamedOperation>::call<jsTestStringifierNamedOperationPrototypeFunctionToStringBody>(*state, "toString");
}

void JSTestStringifierNamedOperation::analyzeHeap(JSCell* cell, HeapAnalyzer& analyzer)
{
    auto* thisObject = jsCast<JSTestStringifierNamedOperation*>(cell);
    analyzer.setWrappedObjectForCell(cell, &thisObject->wrapped());
    if (thisObject->scriptExecutionContext())
        analyzer.setLabelForCell(cell, "url " + thisObject->scriptExecutionContext()->url().string());
    Base::analyzeHeap(cell, analyzer);
}

bool JSTestStringifierNamedOperationOwner::isReachableFromOpaqueRoots(JSC::Handle<JSC::Unknown> handle, void*, SlotVisitor& visitor, const char** reason)
{
    UNUSED_PARAM(handle);
    UNUSED_PARAM(visitor);
    UNUSED_PARAM(reason);
    return false;
}

void JSTestStringifierNamedOperationOwner::finalize(JSC::Handle<JSC::Unknown> handle, void* context)
{
    auto* jsTestStringifierNamedOperation = static_cast<JSTestStringifierNamedOperation*>(handle.slot()->asCell());
    auto& world = *static_cast<DOMWrapperWorld*>(context);
    uncacheWrapper(world, &jsTestStringifierNamedOperation->wrapped(), jsTestStringifierNamedOperation);
}

#if ENABLE(BINDING_INTEGRITY)
#if PLATFORM(WIN)
#pragma warning(disable: 4483)
extern "C" { extern void (*const __identifier("??_7TestStringifierNamedOperation@WebCore@@6B@")[])(); }
#else
extern "C" { extern void* _ZTVN7WebCore29TestStringifierNamedOperationE[]; }
#endif
#endif

JSC::JSValue toJSNewlyCreated(JSC::ExecState*, JSDOMGlobalObject* globalObject, Ref<TestStringifierNamedOperation>&& impl)
{

#if ENABLE(BINDING_INTEGRITY)
    void* actualVTablePointer = *(reinterpret_cast<void**>(impl.ptr()));
#if PLATFORM(WIN)
    void* expectedVTablePointer = WTF_PREPARE_VTBL_POINTER_FOR_INSPECTION(__identifier("??_7TestStringifierNamedOperation@WebCore@@6B@"));
#else
    void* expectedVTablePointer = WTF_PREPARE_VTBL_POINTER_FOR_INSPECTION(&_ZTVN7WebCore29TestStringifierNamedOperationE[2]);
#endif

    // If this fails TestStringifierNamedOperation does not have a vtable, so you need to add the
    // ImplementationLacksVTable attribute to the interface definition
    static_assert(std::is_polymorphic<TestStringifierNamedOperation>::value, "TestStringifierNamedOperation is not polymorphic");

    // If you hit this assertion you either have a use after free bug, or
    // TestStringifierNamedOperation has subclasses. If TestStringifierNamedOperation has subclasses that get passed
    // to toJS() we currently require TestStringifierNamedOperation you to opt out of binding hardening
    // by adding the SkipVTableValidation attribute to the interface IDL definition
    RELEASE_ASSERT(actualVTablePointer == expectedVTablePointer);
#endif
    return createWrapper<TestStringifierNamedOperation>(globalObject, WTFMove(impl));
}

JSC::JSValue toJS(JSC::ExecState* state, JSDOMGlobalObject* globalObject, TestStringifierNamedOperation& impl)
{
    return wrap(state, globalObject, impl);
}

TestStringifierNamedOperation* JSTestStringifierNamedOperation::toWrapped(JSC::VM& vm, JSC::JSValue value)
{
    if (auto* wrapper = jsDynamicCast<JSTestStringifierNamedOperation*>(vm, value))
        return &wrapper->wrapped();
    return nullptr;
}

}
