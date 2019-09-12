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
#include "JSTestStringifierReadOnlyAttribute.h"

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

JSC::EncodedJSValue JSC_HOST_CALL jsTestStringifierReadOnlyAttributePrototypeFunctionToString(JSC::ExecState*);

// Attributes

JSC::EncodedJSValue jsTestStringifierReadOnlyAttributeConstructor(JSC::ExecState*, JSC::EncodedJSValue, JSC::PropertyName);
bool setJSTestStringifierReadOnlyAttributeConstructor(JSC::ExecState*, JSC::EncodedJSValue, JSC::EncodedJSValue);
JSC::EncodedJSValue jsTestStringifierReadOnlyAttributeIdentifier(JSC::ExecState*, JSC::EncodedJSValue, JSC::PropertyName);

class JSTestStringifierReadOnlyAttributePrototype : public JSC::JSNonFinalObject {
public:
    using Base = JSC::JSNonFinalObject;
    static JSTestStringifierReadOnlyAttributePrototype* create(JSC::VM& vm, JSDOMGlobalObject* globalObject, JSC::Structure* structure)
    {
        JSTestStringifierReadOnlyAttributePrototype* ptr = new (NotNull, JSC::allocateCell<JSTestStringifierReadOnlyAttributePrototype>(vm.heap)) JSTestStringifierReadOnlyAttributePrototype(vm, globalObject, structure);
        ptr->finishCreation(vm);
        return ptr;
    }

    DECLARE_INFO;
    static JSC::Structure* createStructure(JSC::VM& vm, JSC::JSGlobalObject* globalObject, JSC::JSValue prototype)
    {
        return JSC::Structure::create(vm, globalObject, prototype, JSC::TypeInfo(JSC::ObjectType, StructureFlags), info());
    }

private:
    JSTestStringifierReadOnlyAttributePrototype(JSC::VM& vm, JSC::JSGlobalObject*, JSC::Structure* structure)
        : JSC::JSNonFinalObject(vm, structure)
    {
    }

    void finishCreation(JSC::VM&);
};

using JSTestStringifierReadOnlyAttributeConstructor = JSDOMConstructorNotConstructable<JSTestStringifierReadOnlyAttribute>;

template<> JSValue JSTestStringifierReadOnlyAttributeConstructor::prototypeForStructure(JSC::VM& vm, const JSDOMGlobalObject& globalObject)
{
    UNUSED_PARAM(vm);
    return globalObject.functionPrototype();
}

template<> void JSTestStringifierReadOnlyAttributeConstructor::initializeProperties(VM& vm, JSDOMGlobalObject& globalObject)
{
    putDirect(vm, vm.propertyNames->prototype, JSTestStringifierReadOnlyAttribute::prototype(vm, globalObject), JSC::PropertyAttribute::DontDelete | JSC::PropertyAttribute::ReadOnly | JSC::PropertyAttribute::DontEnum);
    putDirect(vm, vm.propertyNames->name, jsNontrivialString(vm, String("TestStringifierReadOnlyAttribute"_s)), JSC::PropertyAttribute::ReadOnly | JSC::PropertyAttribute::DontEnum);
    putDirect(vm, vm.propertyNames->length, jsNumber(0), JSC::PropertyAttribute::ReadOnly | JSC::PropertyAttribute::DontEnum);
}

template<> const ClassInfo JSTestStringifierReadOnlyAttributeConstructor::s_info = { "TestStringifierReadOnlyAttribute", &Base::s_info, nullptr, nullptr, CREATE_METHOD_TABLE(JSTestStringifierReadOnlyAttributeConstructor) };

/* Hash table for prototype */

static const HashTableValue JSTestStringifierReadOnlyAttributePrototypeTableValues[] =
{
    { "constructor", static_cast<unsigned>(JSC::PropertyAttribute::DontEnum), NoIntrinsic, { (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsTestStringifierReadOnlyAttributeConstructor), (intptr_t) static_cast<PutPropertySlot::PutValueFunc>(setJSTestStringifierReadOnlyAttributeConstructor) } },
    { "identifier", static_cast<unsigned>(JSC::PropertyAttribute::ReadOnly | JSC::PropertyAttribute::CustomAccessor | JSC::PropertyAttribute::DOMAttribute), NoIntrinsic, { (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsTestStringifierReadOnlyAttributeIdentifier), (intptr_t) static_cast<PutPropertySlot::PutValueFunc>(0) } },
    { "toString", static_cast<unsigned>(JSC::PropertyAttribute::Function), NoIntrinsic, { (intptr_t)static_cast<RawNativeFunction>(jsTestStringifierReadOnlyAttributePrototypeFunctionToString), (intptr_t) (0) } },
};

const ClassInfo JSTestStringifierReadOnlyAttributePrototype::s_info = { "TestStringifierReadOnlyAttributePrototype", &Base::s_info, nullptr, nullptr, CREATE_METHOD_TABLE(JSTestStringifierReadOnlyAttributePrototype) };

void JSTestStringifierReadOnlyAttributePrototype::finishCreation(VM& vm)
{
    Base::finishCreation(vm);
    reifyStaticProperties(vm, JSTestStringifierReadOnlyAttribute::info(), JSTestStringifierReadOnlyAttributePrototypeTableValues, *this);
}

const ClassInfo JSTestStringifierReadOnlyAttribute::s_info = { "TestStringifierReadOnlyAttribute", &Base::s_info, nullptr, nullptr, CREATE_METHOD_TABLE(JSTestStringifierReadOnlyAttribute) };

JSTestStringifierReadOnlyAttribute::JSTestStringifierReadOnlyAttribute(Structure* structure, JSDOMGlobalObject& globalObject, Ref<TestStringifierReadOnlyAttribute>&& impl)
    : JSDOMWrapper<TestStringifierReadOnlyAttribute>(structure, globalObject, WTFMove(impl))
{
}

void JSTestStringifierReadOnlyAttribute::finishCreation(VM& vm)
{
    Base::finishCreation(vm);
    ASSERT(inherits(vm, info()));

}

JSObject* JSTestStringifierReadOnlyAttribute::createPrototype(VM& vm, JSDOMGlobalObject& globalObject)
{
    return JSTestStringifierReadOnlyAttributePrototype::create(vm, &globalObject, JSTestStringifierReadOnlyAttributePrototype::createStructure(vm, &globalObject, globalObject.objectPrototype()));
}

JSObject* JSTestStringifierReadOnlyAttribute::prototype(VM& vm, JSDOMGlobalObject& globalObject)
{
    return getDOMPrototype<JSTestStringifierReadOnlyAttribute>(vm, globalObject);
}

JSValue JSTestStringifierReadOnlyAttribute::getConstructor(VM& vm, const JSGlobalObject* globalObject)
{
    return getDOMConstructor<JSTestStringifierReadOnlyAttributeConstructor>(vm, *jsCast<const JSDOMGlobalObject*>(globalObject));
}

void JSTestStringifierReadOnlyAttribute::destroy(JSC::JSCell* cell)
{
    JSTestStringifierReadOnlyAttribute* thisObject = static_cast<JSTestStringifierReadOnlyAttribute*>(cell);
    thisObject->JSTestStringifierReadOnlyAttribute::~JSTestStringifierReadOnlyAttribute();
}

template<> inline JSTestStringifierReadOnlyAttribute* IDLAttribute<JSTestStringifierReadOnlyAttribute>::cast(ExecState& state, EncodedJSValue thisValue)
{
    return jsDynamicCast<JSTestStringifierReadOnlyAttribute*>(state.vm(), JSValue::decode(thisValue));
}

template<> inline JSTestStringifierReadOnlyAttribute* IDLOperation<JSTestStringifierReadOnlyAttribute>::cast(ExecState& state)
{
    return jsDynamicCast<JSTestStringifierReadOnlyAttribute*>(state.vm(), state.thisValue());
}

EncodedJSValue jsTestStringifierReadOnlyAttributeConstructor(ExecState* state, EncodedJSValue thisValue, PropertyName)
{
    VM& vm = state->vm();
    auto throwScope = DECLARE_THROW_SCOPE(vm);
    auto* prototype = jsDynamicCast<JSTestStringifierReadOnlyAttributePrototype*>(vm, JSValue::decode(thisValue));
    if (UNLIKELY(!prototype))
        return throwVMTypeError(state, throwScope);
    return JSValue::encode(JSTestStringifierReadOnlyAttribute::getConstructor(state->vm(), prototype->globalObject()));
}

bool setJSTestStringifierReadOnlyAttributeConstructor(ExecState* state, EncodedJSValue thisValue, EncodedJSValue encodedValue)
{
    VM& vm = state->vm();
    auto throwScope = DECLARE_THROW_SCOPE(vm);
    auto* prototype = jsDynamicCast<JSTestStringifierReadOnlyAttributePrototype*>(vm, JSValue::decode(thisValue));
    if (UNLIKELY(!prototype)) {
        throwVMTypeError(state, throwScope);
        return false;
    }
    // Shadowing a built-in constructor
    return prototype->putDirect(vm, vm.propertyNames->constructor, JSValue::decode(encodedValue));
}

static inline JSValue jsTestStringifierReadOnlyAttributeIdentifierGetter(ExecState& state, JSTestStringifierReadOnlyAttribute& thisObject, ThrowScope& throwScope)
{
    UNUSED_PARAM(throwScope);
    UNUSED_PARAM(state);
    auto& impl = thisObject.wrapped();
    JSValue result = toJS<IDLDOMString>(state, throwScope, impl.identifier());
    return result;
}

EncodedJSValue jsTestStringifierReadOnlyAttributeIdentifier(ExecState* state, EncodedJSValue thisValue, PropertyName)
{
    return IDLAttribute<JSTestStringifierReadOnlyAttribute>::get<jsTestStringifierReadOnlyAttributeIdentifierGetter, CastedThisErrorBehavior::Assert>(*state, thisValue, "identifier");
}

static inline JSC::EncodedJSValue jsTestStringifierReadOnlyAttributePrototypeFunctionToStringBody(JSC::ExecState* state, typename IDLOperation<JSTestStringifierReadOnlyAttribute>::ClassParameter castedThis, JSC::ThrowScope& throwScope)
{
    UNUSED_PARAM(state);
    UNUSED_PARAM(throwScope);
    auto& impl = castedThis->wrapped();
    return JSValue::encode(toJS<IDLDOMString>(*state, impl.identifier()));
}

EncodedJSValue JSC_HOST_CALL jsTestStringifierReadOnlyAttributePrototypeFunctionToString(ExecState* state)
{
    return IDLOperation<JSTestStringifierReadOnlyAttribute>::call<jsTestStringifierReadOnlyAttributePrototypeFunctionToStringBody>(*state, "toString");
}

void JSTestStringifierReadOnlyAttribute::analyzeHeap(JSCell* cell, HeapAnalyzer& analyzer)
{
    auto* thisObject = jsCast<JSTestStringifierReadOnlyAttribute*>(cell);
    analyzer.setWrappedObjectForCell(cell, &thisObject->wrapped());
    if (thisObject->scriptExecutionContext())
        analyzer.setLabelForCell(cell, "url " + thisObject->scriptExecutionContext()->url().string());
    Base::analyzeHeap(cell, analyzer);
}

bool JSTestStringifierReadOnlyAttributeOwner::isReachableFromOpaqueRoots(JSC::Handle<JSC::Unknown> handle, void*, SlotVisitor& visitor, const char** reason)
{
    UNUSED_PARAM(handle);
    UNUSED_PARAM(visitor);
    UNUSED_PARAM(reason);
    return false;
}

void JSTestStringifierReadOnlyAttributeOwner::finalize(JSC::Handle<JSC::Unknown> handle, void* context)
{
    auto* jsTestStringifierReadOnlyAttribute = static_cast<JSTestStringifierReadOnlyAttribute*>(handle.slot()->asCell());
    auto& world = *static_cast<DOMWrapperWorld*>(context);
    uncacheWrapper(world, &jsTestStringifierReadOnlyAttribute->wrapped(), jsTestStringifierReadOnlyAttribute);
}

#if ENABLE(BINDING_INTEGRITY)
#if PLATFORM(WIN)
#pragma warning(disable: 4483)
extern "C" { extern void (*const __identifier("??_7TestStringifierReadOnlyAttribute@WebCore@@6B@")[])(); }
#else
extern "C" { extern void* _ZTVN7WebCore32TestStringifierReadOnlyAttributeE[]; }
#endif
#endif

JSC::JSValue toJSNewlyCreated(JSC::ExecState*, JSDOMGlobalObject* globalObject, Ref<TestStringifierReadOnlyAttribute>&& impl)
{

#if ENABLE(BINDING_INTEGRITY)
    void* actualVTablePointer = *(reinterpret_cast<void**>(impl.ptr()));
#if PLATFORM(WIN)
    void* expectedVTablePointer = WTF_PREPARE_VTBL_POINTER_FOR_INSPECTION(__identifier("??_7TestStringifierReadOnlyAttribute@WebCore@@6B@"));
#else
    void* expectedVTablePointer = WTF_PREPARE_VTBL_POINTER_FOR_INSPECTION(&_ZTVN7WebCore32TestStringifierReadOnlyAttributeE[2]);
#endif

    // If this fails TestStringifierReadOnlyAttribute does not have a vtable, so you need to add the
    // ImplementationLacksVTable attribute to the interface definition
    static_assert(std::is_polymorphic<TestStringifierReadOnlyAttribute>::value, "TestStringifierReadOnlyAttribute is not polymorphic");

    // If you hit this assertion you either have a use after free bug, or
    // TestStringifierReadOnlyAttribute has subclasses. If TestStringifierReadOnlyAttribute has subclasses that get passed
    // to toJS() we currently require TestStringifierReadOnlyAttribute you to opt out of binding hardening
    // by adding the SkipVTableValidation attribute to the interface IDL definition
    RELEASE_ASSERT(actualVTablePointer == expectedVTablePointer);
#endif
    return createWrapper<TestStringifierReadOnlyAttribute>(globalObject, WTFMove(impl));
}

JSC::JSValue toJS(JSC::ExecState* state, JSDOMGlobalObject* globalObject, TestStringifierReadOnlyAttribute& impl)
{
    return wrap(state, globalObject, impl);
}

TestStringifierReadOnlyAttribute* JSTestStringifierReadOnlyAttribute::toWrapped(JSC::VM& vm, JSC::JSValue value)
{
    if (auto* wrapper = jsDynamicCast<JSTestStringifierReadOnlyAttribute*>(vm, value))
        return &wrapper->wrapped();
    return nullptr;
}

}
