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
#include "JSTestCEReactionsStringifier.h"

#include "CustomElementReactionQueue.h"
#include "JSDOMAttribute.h"
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

JSC::EncodedJSValue JSC_HOST_CALL jsTestCEReactionsStringifierPrototypeFunctionToString(JSC::ExecState*);

// Attributes

JSC::EncodedJSValue jsTestCEReactionsStringifierConstructor(JSC::ExecState*, JSC::EncodedJSValue, JSC::PropertyName);
bool setJSTestCEReactionsStringifierConstructor(JSC::ExecState*, JSC::EncodedJSValue, JSC::EncodedJSValue);
JSC::EncodedJSValue jsTestCEReactionsStringifierValue(JSC::ExecState*, JSC::EncodedJSValue, JSC::PropertyName);
bool setJSTestCEReactionsStringifierValue(JSC::ExecState*, JSC::EncodedJSValue, JSC::EncodedJSValue);
JSC::EncodedJSValue jsTestCEReactionsStringifierValueWithoutReactions(JSC::ExecState*, JSC::EncodedJSValue, JSC::PropertyName);
bool setJSTestCEReactionsStringifierValueWithoutReactions(JSC::ExecState*, JSC::EncodedJSValue, JSC::EncodedJSValue);

class JSTestCEReactionsStringifierPrototype : public JSC::JSNonFinalObject {
public:
    using Base = JSC::JSNonFinalObject;
    static JSTestCEReactionsStringifierPrototype* create(JSC::VM& vm, JSDOMGlobalObject* globalObject, JSC::Structure* structure)
    {
        JSTestCEReactionsStringifierPrototype* ptr = new (NotNull, JSC::allocateCell<JSTestCEReactionsStringifierPrototype>(vm.heap)) JSTestCEReactionsStringifierPrototype(vm, globalObject, structure);
        ptr->finishCreation(vm);
        return ptr;
    }

    DECLARE_INFO;
    static JSC::Structure* createStructure(JSC::VM& vm, JSC::JSGlobalObject* globalObject, JSC::JSValue prototype)
    {
        return JSC::Structure::create(vm, globalObject, prototype, JSC::TypeInfo(JSC::ObjectType, StructureFlags), info());
    }

private:
    JSTestCEReactionsStringifierPrototype(JSC::VM& vm, JSC::JSGlobalObject*, JSC::Structure* structure)
        : JSC::JSNonFinalObject(vm, structure)
    {
    }

    void finishCreation(JSC::VM&);
};

using JSTestCEReactionsStringifierConstructor = JSDOMConstructorNotConstructable<JSTestCEReactionsStringifier>;

template<> JSValue JSTestCEReactionsStringifierConstructor::prototypeForStructure(JSC::VM& vm, const JSDOMGlobalObject& globalObject)
{
    UNUSED_PARAM(vm);
    return globalObject.functionPrototype();
}

template<> void JSTestCEReactionsStringifierConstructor::initializeProperties(VM& vm, JSDOMGlobalObject& globalObject)
{
    putDirect(vm, vm.propertyNames->prototype, JSTestCEReactionsStringifier::prototype(vm, globalObject), JSC::PropertyAttribute::DontDelete | JSC::PropertyAttribute::ReadOnly | JSC::PropertyAttribute::DontEnum);
    putDirect(vm, vm.propertyNames->name, jsNontrivialString(vm, String("TestCEReactionsStringifier"_s)), JSC::PropertyAttribute::ReadOnly | JSC::PropertyAttribute::DontEnum);
    putDirect(vm, vm.propertyNames->length, jsNumber(0), JSC::PropertyAttribute::ReadOnly | JSC::PropertyAttribute::DontEnum);
}

template<> const ClassInfo JSTestCEReactionsStringifierConstructor::s_info = { "TestCEReactionsStringifier", &Base::s_info, nullptr, nullptr, CREATE_METHOD_TABLE(JSTestCEReactionsStringifierConstructor) };

/* Hash table for prototype */

static const HashTableValue JSTestCEReactionsStringifierPrototypeTableValues[] =
{
    { "constructor", static_cast<unsigned>(JSC::PropertyAttribute::DontEnum), NoIntrinsic, { (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsTestCEReactionsStringifierConstructor), (intptr_t) static_cast<PutPropertySlot::PutValueFunc>(setJSTestCEReactionsStringifierConstructor) } },
    { "value", static_cast<unsigned>(JSC::PropertyAttribute::CustomAccessor | JSC::PropertyAttribute::DOMAttribute), NoIntrinsic, { (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsTestCEReactionsStringifierValue), (intptr_t) static_cast<PutPropertySlot::PutValueFunc>(setJSTestCEReactionsStringifierValue) } },
    { "valueWithoutReactions", static_cast<unsigned>(JSC::PropertyAttribute::CustomAccessor | JSC::PropertyAttribute::DOMAttribute), NoIntrinsic, { (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsTestCEReactionsStringifierValueWithoutReactions), (intptr_t) static_cast<PutPropertySlot::PutValueFunc>(setJSTestCEReactionsStringifierValueWithoutReactions) } },
    { "toString", static_cast<unsigned>(JSC::PropertyAttribute::Function), NoIntrinsic, { (intptr_t)static_cast<RawNativeFunction>(jsTestCEReactionsStringifierPrototypeFunctionToString), (intptr_t) (0) } },
};

const ClassInfo JSTestCEReactionsStringifierPrototype::s_info = { "TestCEReactionsStringifierPrototype", &Base::s_info, nullptr, nullptr, CREATE_METHOD_TABLE(JSTestCEReactionsStringifierPrototype) };

void JSTestCEReactionsStringifierPrototype::finishCreation(VM& vm)
{
    Base::finishCreation(vm);
    reifyStaticProperties(vm, JSTestCEReactionsStringifier::info(), JSTestCEReactionsStringifierPrototypeTableValues, *this);
}

const ClassInfo JSTestCEReactionsStringifier::s_info = { "TestCEReactionsStringifier", &Base::s_info, nullptr, nullptr, CREATE_METHOD_TABLE(JSTestCEReactionsStringifier) };

JSTestCEReactionsStringifier::JSTestCEReactionsStringifier(Structure* structure, JSDOMGlobalObject& globalObject, Ref<TestCEReactionsStringifier>&& impl)
    : JSDOMWrapper<TestCEReactionsStringifier>(structure, globalObject, WTFMove(impl))
{
}

void JSTestCEReactionsStringifier::finishCreation(VM& vm)
{
    Base::finishCreation(vm);
    ASSERT(inherits(vm, info()));

}

JSObject* JSTestCEReactionsStringifier::createPrototype(VM& vm, JSDOMGlobalObject& globalObject)
{
    return JSTestCEReactionsStringifierPrototype::create(vm, &globalObject, JSTestCEReactionsStringifierPrototype::createStructure(vm, &globalObject, globalObject.objectPrototype()));
}

JSObject* JSTestCEReactionsStringifier::prototype(VM& vm, JSDOMGlobalObject& globalObject)
{
    return getDOMPrototype<JSTestCEReactionsStringifier>(vm, globalObject);
}

JSValue JSTestCEReactionsStringifier::getConstructor(VM& vm, const JSGlobalObject* globalObject)
{
    return getDOMConstructor<JSTestCEReactionsStringifierConstructor>(vm, *jsCast<const JSDOMGlobalObject*>(globalObject));
}

void JSTestCEReactionsStringifier::destroy(JSC::JSCell* cell)
{
    JSTestCEReactionsStringifier* thisObject = static_cast<JSTestCEReactionsStringifier*>(cell);
    thisObject->JSTestCEReactionsStringifier::~JSTestCEReactionsStringifier();
}

template<> inline JSTestCEReactionsStringifier* IDLAttribute<JSTestCEReactionsStringifier>::cast(ExecState& state, EncodedJSValue thisValue)
{
    return jsDynamicCast<JSTestCEReactionsStringifier*>(state.vm(), JSValue::decode(thisValue));
}

template<> inline JSTestCEReactionsStringifier* IDLOperation<JSTestCEReactionsStringifier>::cast(ExecState& state)
{
    return jsDynamicCast<JSTestCEReactionsStringifier*>(state.vm(), state.thisValue());
}

EncodedJSValue jsTestCEReactionsStringifierConstructor(ExecState* state, EncodedJSValue thisValue, PropertyName)
{
    VM& vm = state->vm();
    auto throwScope = DECLARE_THROW_SCOPE(vm);
    auto* prototype = jsDynamicCast<JSTestCEReactionsStringifierPrototype*>(vm, JSValue::decode(thisValue));
    if (UNLIKELY(!prototype))
        return throwVMTypeError(state, throwScope);
    return JSValue::encode(JSTestCEReactionsStringifier::getConstructor(state->vm(), prototype->globalObject()));
}

bool setJSTestCEReactionsStringifierConstructor(ExecState* state, EncodedJSValue thisValue, EncodedJSValue encodedValue)
{
    VM& vm = state->vm();
    auto throwScope = DECLARE_THROW_SCOPE(vm);
    auto* prototype = jsDynamicCast<JSTestCEReactionsStringifierPrototype*>(vm, JSValue::decode(thisValue));
    if (UNLIKELY(!prototype)) {
        throwVMTypeError(state, throwScope);
        return false;
    }
    // Shadowing a built-in constructor
    return prototype->putDirect(vm, vm.propertyNames->constructor, JSValue::decode(encodedValue));
}

static inline JSValue jsTestCEReactionsStringifierValueGetter(ExecState& state, JSTestCEReactionsStringifier& thisObject, ThrowScope& throwScope)
{
    UNUSED_PARAM(throwScope);
    UNUSED_PARAM(state);
    auto& impl = thisObject.wrapped();
    JSValue result = toJS<IDLDOMString>(state, throwScope, impl.value());
    return result;
}

EncodedJSValue jsTestCEReactionsStringifierValue(ExecState* state, EncodedJSValue thisValue, PropertyName)
{
    return IDLAttribute<JSTestCEReactionsStringifier>::get<jsTestCEReactionsStringifierValueGetter, CastedThisErrorBehavior::Assert>(*state, thisValue, "value");
}

static inline bool setJSTestCEReactionsStringifierValueSetter(ExecState& state, JSTestCEReactionsStringifier& thisObject, JSValue value, ThrowScope& throwScope)
{
    UNUSED_PARAM(state);
    UNUSED_PARAM(throwScope);
    CustomElementReactionStack customElementReactionStack(state);
    auto& impl = thisObject.wrapped();
    auto nativeValue = convert<IDLDOMString>(state, value);
    RETURN_IF_EXCEPTION(throwScope, false);
    AttributeSetter::call(state, throwScope, [&] {
        return impl.setValue(WTFMove(nativeValue));
    });
    return true;
}

bool setJSTestCEReactionsStringifierValue(ExecState* state, EncodedJSValue thisValue, EncodedJSValue encodedValue)
{
    return IDLAttribute<JSTestCEReactionsStringifier>::set<setJSTestCEReactionsStringifierValueSetter>(*state, thisValue, encodedValue, "value");
}

static inline JSValue jsTestCEReactionsStringifierValueWithoutReactionsGetter(ExecState& state, JSTestCEReactionsStringifier& thisObject, ThrowScope& throwScope)
{
    UNUSED_PARAM(throwScope);
    UNUSED_PARAM(state);
    auto& impl = thisObject.wrapped();
    JSValue result = toJS<IDLDOMString>(state, throwScope, impl.valueWithoutReactions());
    return result;
}

EncodedJSValue jsTestCEReactionsStringifierValueWithoutReactions(ExecState* state, EncodedJSValue thisValue, PropertyName)
{
    return IDLAttribute<JSTestCEReactionsStringifier>::get<jsTestCEReactionsStringifierValueWithoutReactionsGetter, CastedThisErrorBehavior::Assert>(*state, thisValue, "valueWithoutReactions");
}

static inline bool setJSTestCEReactionsStringifierValueWithoutReactionsSetter(ExecState& state, JSTestCEReactionsStringifier& thisObject, JSValue value, ThrowScope& throwScope)
{
    UNUSED_PARAM(state);
    UNUSED_PARAM(throwScope);
    CustomElementReactionDisallowedScope customElementReactionDisallowedScope;
    auto& impl = thisObject.wrapped();
    auto nativeValue = convert<IDLDOMString>(state, value);
    RETURN_IF_EXCEPTION(throwScope, false);
    AttributeSetter::call(state, throwScope, [&] {
        return impl.setValueWithoutReactions(WTFMove(nativeValue));
    });
    return true;
}

bool setJSTestCEReactionsStringifierValueWithoutReactions(ExecState* state, EncodedJSValue thisValue, EncodedJSValue encodedValue)
{
    return IDLAttribute<JSTestCEReactionsStringifier>::set<setJSTestCEReactionsStringifierValueWithoutReactionsSetter>(*state, thisValue, encodedValue, "valueWithoutReactions");
}

static inline JSC::EncodedJSValue jsTestCEReactionsStringifierPrototypeFunctionToStringBody(JSC::ExecState* state, typename IDLOperation<JSTestCEReactionsStringifier>::ClassParameter castedThis, JSC::ThrowScope& throwScope)
{
    UNUSED_PARAM(state);
    UNUSED_PARAM(throwScope);
    auto& impl = castedThis->wrapped();
    return JSValue::encode(toJS<IDLDOMString>(*state, impl.value()));
}

EncodedJSValue JSC_HOST_CALL jsTestCEReactionsStringifierPrototypeFunctionToString(ExecState* state)
{
    return IDLOperation<JSTestCEReactionsStringifier>::call<jsTestCEReactionsStringifierPrototypeFunctionToStringBody>(*state, "toString");
}

void JSTestCEReactionsStringifier::analyzeHeap(JSCell* cell, HeapAnalyzer& analyzer)
{
    auto* thisObject = jsCast<JSTestCEReactionsStringifier*>(cell);
    analyzer.setWrappedObjectForCell(cell, &thisObject->wrapped());
    if (thisObject->scriptExecutionContext())
        analyzer.setLabelForCell(cell, "url " + thisObject->scriptExecutionContext()->url().string());
    Base::analyzeHeap(cell, analyzer);
}

bool JSTestCEReactionsStringifierOwner::isReachableFromOpaqueRoots(JSC::Handle<JSC::Unknown> handle, void*, SlotVisitor& visitor, const char** reason)
{
    UNUSED_PARAM(handle);
    UNUSED_PARAM(visitor);
    UNUSED_PARAM(reason);
    return false;
}

void JSTestCEReactionsStringifierOwner::finalize(JSC::Handle<JSC::Unknown> handle, void* context)
{
    auto* jsTestCEReactionsStringifier = static_cast<JSTestCEReactionsStringifier*>(handle.slot()->asCell());
    auto& world = *static_cast<DOMWrapperWorld*>(context);
    uncacheWrapper(world, &jsTestCEReactionsStringifier->wrapped(), jsTestCEReactionsStringifier);
}

#if ENABLE(BINDING_INTEGRITY)
#if PLATFORM(WIN)
#pragma warning(disable: 4483)
extern "C" { extern void (*const __identifier("??_7TestCEReactionsStringifier@WebCore@@6B@")[])(); }
#else
extern "C" { extern void* _ZTVN7WebCore26TestCEReactionsStringifierE[]; }
#endif
#endif

JSC::JSValue toJSNewlyCreated(JSC::ExecState*, JSDOMGlobalObject* globalObject, Ref<TestCEReactionsStringifier>&& impl)
{

#if ENABLE(BINDING_INTEGRITY)
    void* actualVTablePointer = *(reinterpret_cast<void**>(impl.ptr()));
#if PLATFORM(WIN)
    void* expectedVTablePointer = WTF_PREPARE_VTBL_POINTER_FOR_INSPECTION(__identifier("??_7TestCEReactionsStringifier@WebCore@@6B@"));
#else
    void* expectedVTablePointer = WTF_PREPARE_VTBL_POINTER_FOR_INSPECTION(&_ZTVN7WebCore26TestCEReactionsStringifierE[2]);
#endif

    // If this fails TestCEReactionsStringifier does not have a vtable, so you need to add the
    // ImplementationLacksVTable attribute to the interface definition
    static_assert(std::is_polymorphic<TestCEReactionsStringifier>::value, "TestCEReactionsStringifier is not polymorphic");

    // If you hit this assertion you either have a use after free bug, or
    // TestCEReactionsStringifier has subclasses. If TestCEReactionsStringifier has subclasses that get passed
    // to toJS() we currently require TestCEReactionsStringifier you to opt out of binding hardening
    // by adding the SkipVTableValidation attribute to the interface IDL definition
    RELEASE_ASSERT(actualVTablePointer == expectedVTablePointer);
#endif
    return createWrapper<TestCEReactionsStringifier>(globalObject, WTFMove(impl));
}

JSC::JSValue toJS(JSC::ExecState* state, JSDOMGlobalObject* globalObject, TestCEReactionsStringifier& impl)
{
    return wrap(state, globalObject, impl);
}

TestCEReactionsStringifier* JSTestCEReactionsStringifier::toWrapped(JSC::VM& vm, JSC::JSValue value)
{
    if (auto* wrapper = jsDynamicCast<JSTestCEReactionsStringifier*>(vm, value))
        return &wrapper->wrapped();
    return nullptr;
}

}
