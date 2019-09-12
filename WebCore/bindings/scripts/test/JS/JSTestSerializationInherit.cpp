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
#include "JSTestSerializationInherit.h"

#include "JSDOMAttribute.h"
#include "JSDOMBinding.h"
#include "JSDOMConstructorNotConstructable.h"
#include "JSDOMConvertNumbers.h"
#include "JSDOMExceptionHandling.h"
#include "JSDOMOperation.h"
#include "JSDOMWrapperCache.h"
#include "ScriptExecutionContext.h"
#include <JavaScriptCore/HeapAnalyzer.h>
#include <JavaScriptCore/JSCInlines.h>
#include <JavaScriptCore/ObjectConstructor.h>
#include <wtf/GetPtr.h>
#include <wtf/PointerPreparations.h>
#include <wtf/URL.h>


namespace WebCore {
using namespace JSC;

// Functions

JSC::EncodedJSValue JSC_HOST_CALL jsTestSerializationInheritPrototypeFunctionToJSON(JSC::ExecState*);

// Attributes

JSC::EncodedJSValue jsTestSerializationInheritConstructor(JSC::ExecState*, JSC::EncodedJSValue, JSC::PropertyName);
bool setJSTestSerializationInheritConstructor(JSC::ExecState*, JSC::EncodedJSValue, JSC::EncodedJSValue);
JSC::EncodedJSValue jsTestSerializationInheritInheritLongAttribute(JSC::ExecState*, JSC::EncodedJSValue, JSC::PropertyName);
bool setJSTestSerializationInheritInheritLongAttribute(JSC::ExecState*, JSC::EncodedJSValue, JSC::EncodedJSValue);

class JSTestSerializationInheritPrototype : public JSC::JSNonFinalObject {
public:
    using Base = JSC::JSNonFinalObject;
    static JSTestSerializationInheritPrototype* create(JSC::VM& vm, JSDOMGlobalObject* globalObject, JSC::Structure* structure)
    {
        JSTestSerializationInheritPrototype* ptr = new (NotNull, JSC::allocateCell<JSTestSerializationInheritPrototype>(vm.heap)) JSTestSerializationInheritPrototype(vm, globalObject, structure);
        ptr->finishCreation(vm);
        return ptr;
    }

    DECLARE_INFO;
    static JSC::Structure* createStructure(JSC::VM& vm, JSC::JSGlobalObject* globalObject, JSC::JSValue prototype)
    {
        return JSC::Structure::create(vm, globalObject, prototype, JSC::TypeInfo(JSC::ObjectType, StructureFlags), info());
    }

private:
    JSTestSerializationInheritPrototype(JSC::VM& vm, JSC::JSGlobalObject*, JSC::Structure* structure)
        : JSC::JSNonFinalObject(vm, structure)
    {
    }

    void finishCreation(JSC::VM&);
};

using JSTestSerializationInheritConstructor = JSDOMConstructorNotConstructable<JSTestSerializationInherit>;

template<> JSValue JSTestSerializationInheritConstructor::prototypeForStructure(JSC::VM& vm, const JSDOMGlobalObject& globalObject)
{
    return JSTestSerialization::getConstructor(vm, &globalObject);
}

template<> void JSTestSerializationInheritConstructor::initializeProperties(VM& vm, JSDOMGlobalObject& globalObject)
{
    putDirect(vm, vm.propertyNames->prototype, JSTestSerializationInherit::prototype(vm, globalObject), JSC::PropertyAttribute::DontDelete | JSC::PropertyAttribute::ReadOnly | JSC::PropertyAttribute::DontEnum);
    putDirect(vm, vm.propertyNames->name, jsNontrivialString(vm, String("TestSerializationInherit"_s)), JSC::PropertyAttribute::ReadOnly | JSC::PropertyAttribute::DontEnum);
    putDirect(vm, vm.propertyNames->length, jsNumber(0), JSC::PropertyAttribute::ReadOnly | JSC::PropertyAttribute::DontEnum);
}

template<> const ClassInfo JSTestSerializationInheritConstructor::s_info = { "TestSerializationInherit", &Base::s_info, nullptr, nullptr, CREATE_METHOD_TABLE(JSTestSerializationInheritConstructor) };

/* Hash table for prototype */

static const HashTableValue JSTestSerializationInheritPrototypeTableValues[] =
{
    { "constructor", static_cast<unsigned>(JSC::PropertyAttribute::DontEnum), NoIntrinsic, { (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsTestSerializationInheritConstructor), (intptr_t) static_cast<PutPropertySlot::PutValueFunc>(setJSTestSerializationInheritConstructor) } },
    { "inheritLongAttribute", static_cast<unsigned>(JSC::PropertyAttribute::CustomAccessor | JSC::PropertyAttribute::DOMAttribute), NoIntrinsic, { (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsTestSerializationInheritInheritLongAttribute), (intptr_t) static_cast<PutPropertySlot::PutValueFunc>(setJSTestSerializationInheritInheritLongAttribute) } },
    { "toJSON", static_cast<unsigned>(JSC::PropertyAttribute::Function), NoIntrinsic, { (intptr_t)static_cast<RawNativeFunction>(jsTestSerializationInheritPrototypeFunctionToJSON), (intptr_t) (0) } },
};

const ClassInfo JSTestSerializationInheritPrototype::s_info = { "TestSerializationInheritPrototype", &Base::s_info, nullptr, nullptr, CREATE_METHOD_TABLE(JSTestSerializationInheritPrototype) };

void JSTestSerializationInheritPrototype::finishCreation(VM& vm)
{
    Base::finishCreation(vm);
    reifyStaticProperties(vm, JSTestSerializationInherit::info(), JSTestSerializationInheritPrototypeTableValues, *this);
}

const ClassInfo JSTestSerializationInherit::s_info = { "TestSerializationInherit", &Base::s_info, nullptr, nullptr, CREATE_METHOD_TABLE(JSTestSerializationInherit) };

JSTestSerializationInherit::JSTestSerializationInherit(Structure* structure, JSDOMGlobalObject& globalObject, Ref<TestSerializationInherit>&& impl)
    : JSTestSerialization(structure, globalObject, WTFMove(impl))
{
}

void JSTestSerializationInherit::finishCreation(VM& vm)
{
    Base::finishCreation(vm);
    ASSERT(inherits(vm, info()));

}

JSObject* JSTestSerializationInherit::createPrototype(VM& vm, JSDOMGlobalObject& globalObject)
{
    return JSTestSerializationInheritPrototype::create(vm, &globalObject, JSTestSerializationInheritPrototype::createStructure(vm, &globalObject, JSTestSerialization::prototype(vm, globalObject)));
}

JSObject* JSTestSerializationInherit::prototype(VM& vm, JSDOMGlobalObject& globalObject)
{
    return getDOMPrototype<JSTestSerializationInherit>(vm, globalObject);
}

JSValue JSTestSerializationInherit::getConstructor(VM& vm, const JSGlobalObject* globalObject)
{
    return getDOMConstructor<JSTestSerializationInheritConstructor>(vm, *jsCast<const JSDOMGlobalObject*>(globalObject));
}

template<> inline JSTestSerializationInherit* IDLAttribute<JSTestSerializationInherit>::cast(ExecState& state, EncodedJSValue thisValue)
{
    return jsDynamicCast<JSTestSerializationInherit*>(state.vm(), JSValue::decode(thisValue));
}

template<> inline JSTestSerializationInherit* IDLOperation<JSTestSerializationInherit>::cast(ExecState& state)
{
    return jsDynamicCast<JSTestSerializationInherit*>(state.vm(), state.thisValue());
}

EncodedJSValue jsTestSerializationInheritConstructor(ExecState* state, EncodedJSValue thisValue, PropertyName)
{
    VM& vm = state->vm();
    auto throwScope = DECLARE_THROW_SCOPE(vm);
    auto* prototype = jsDynamicCast<JSTestSerializationInheritPrototype*>(vm, JSValue::decode(thisValue));
    if (UNLIKELY(!prototype))
        return throwVMTypeError(state, throwScope);
    return JSValue::encode(JSTestSerializationInherit::getConstructor(state->vm(), prototype->globalObject()));
}

bool setJSTestSerializationInheritConstructor(ExecState* state, EncodedJSValue thisValue, EncodedJSValue encodedValue)
{
    VM& vm = state->vm();
    auto throwScope = DECLARE_THROW_SCOPE(vm);
    auto* prototype = jsDynamicCast<JSTestSerializationInheritPrototype*>(vm, JSValue::decode(thisValue));
    if (UNLIKELY(!prototype)) {
        throwVMTypeError(state, throwScope);
        return false;
    }
    // Shadowing a built-in constructor
    return prototype->putDirect(vm, vm.propertyNames->constructor, JSValue::decode(encodedValue));
}

static inline JSValue jsTestSerializationInheritInheritLongAttributeGetter(ExecState& state, JSTestSerializationInherit& thisObject, ThrowScope& throwScope)
{
    UNUSED_PARAM(throwScope);
    UNUSED_PARAM(state);
    auto& impl = thisObject.wrapped();
    JSValue result = toJS<IDLLong>(state, throwScope, impl.inheritLongAttribute());
    return result;
}

EncodedJSValue jsTestSerializationInheritInheritLongAttribute(ExecState* state, EncodedJSValue thisValue, PropertyName)
{
    return IDLAttribute<JSTestSerializationInherit>::get<jsTestSerializationInheritInheritLongAttributeGetter, CastedThisErrorBehavior::Assert>(*state, thisValue, "inheritLongAttribute");
}

static inline bool setJSTestSerializationInheritInheritLongAttributeSetter(ExecState& state, JSTestSerializationInherit& thisObject, JSValue value, ThrowScope& throwScope)
{
    UNUSED_PARAM(state);
    UNUSED_PARAM(throwScope);
    auto& impl = thisObject.wrapped();
    auto nativeValue = convert<IDLLong>(state, value);
    RETURN_IF_EXCEPTION(throwScope, false);
    AttributeSetter::call(state, throwScope, [&] {
        return impl.setInheritLongAttribute(WTFMove(nativeValue));
    });
    return true;
}

bool setJSTestSerializationInheritInheritLongAttribute(ExecState* state, EncodedJSValue thisValue, EncodedJSValue encodedValue)
{
    return IDLAttribute<JSTestSerializationInherit>::set<setJSTestSerializationInheritInheritLongAttributeSetter>(*state, thisValue, encodedValue, "inheritLongAttribute");
}

JSC::JSObject* JSTestSerializationInherit::serialize(ExecState& state, JSTestSerializationInherit& thisObject, JSDOMGlobalObject& globalObject, ThrowScope& throwScope)
{
    auto& vm = state.vm();
    auto* result = JSTestSerialization::serialize(state, thisObject, globalObject, throwScope);

    auto inheritLongAttributeValue = jsTestSerializationInheritInheritLongAttributeGetter(state, thisObject, throwScope);
    throwScope.assertNoException();
    result->putDirect(vm, Identifier::fromString(vm, "inheritLongAttribute"), inheritLongAttributeValue);

    return result;
}

static inline EncodedJSValue jsTestSerializationInheritPrototypeFunctionToJSONBody(ExecState* state, JSTestSerializationInherit* thisObject, JSC::ThrowScope& throwScope)
{
    return JSValue::encode(JSTestSerializationInherit::serialize(*state, *thisObject, *thisObject->globalObject(), throwScope));
}

EncodedJSValue JSC_HOST_CALL jsTestSerializationInheritPrototypeFunctionToJSON(ExecState* state)
{
    return IDLOperation<JSTestSerializationInherit>::call<jsTestSerializationInheritPrototypeFunctionToJSONBody>(*state, "toJSON");
}

void JSTestSerializationInherit::analyzeHeap(JSCell* cell, HeapAnalyzer& analyzer)
{
    auto* thisObject = jsCast<JSTestSerializationInherit*>(cell);
    analyzer.setWrappedObjectForCell(cell, &thisObject->wrapped());
    if (thisObject->scriptExecutionContext())
        analyzer.setLabelForCell(cell, "url " + thisObject->scriptExecutionContext()->url().string());
    Base::analyzeHeap(cell, analyzer);
}


}
