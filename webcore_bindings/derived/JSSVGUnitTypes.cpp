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

#if ENABLE(SVG)

#include "JSSVGUnitTypes.h"

#include "SVGUnitTypes.h"
#include <wtf/GetPtr.h>

using namespace JSC;

namespace WebCore {

/* Hash table */

static const HashTableValue JSSVGUnitTypesTableValues[] =
{
    { "constructor", DontEnum | ReadOnly, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGUnitTypesConstructor), (intptr_t)0 },
    { 0, 0, NoIntrinsic, 0, 0 }
};

static const HashTable JSSVGUnitTypesTable = { 2, 1, JSSVGUnitTypesTableValues, 0 };
/* Hash table for constructor */

static const HashTableValue JSSVGUnitTypesConstructorTableValues[] =
{
    { "SVG_UNIT_TYPE_UNKNOWN", DontDelete | ReadOnly, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGUnitTypesSVG_UNIT_TYPE_UNKNOWN), (intptr_t)0 },
    { "SVG_UNIT_TYPE_USERSPACEONUSE", DontDelete | ReadOnly, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGUnitTypesSVG_UNIT_TYPE_USERSPACEONUSE), (intptr_t)0 },
    { "SVG_UNIT_TYPE_OBJECTBOUNDINGBOX", DontDelete | ReadOnly, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGUnitTypesSVG_UNIT_TYPE_OBJECTBOUNDINGBOX), (intptr_t)0 },
    { 0, 0, NoIntrinsic, 0, 0 }
};

static const HashTable JSSVGUnitTypesConstructorTable = { 8, 7, JSSVGUnitTypesConstructorTableValues, 0 };

COMPILE_ASSERT(0 == SVGUnitTypes::SVG_UNIT_TYPE_UNKNOWN, SVGUnitTypesEnumSVG_UNIT_TYPE_UNKNOWNIsWrongUseDoNotCheckConstants);
COMPILE_ASSERT(1 == SVGUnitTypes::SVG_UNIT_TYPE_USERSPACEONUSE, SVGUnitTypesEnumSVG_UNIT_TYPE_USERSPACEONUSEIsWrongUseDoNotCheckConstants);
COMPILE_ASSERT(2 == SVGUnitTypes::SVG_UNIT_TYPE_OBJECTBOUNDINGBOX, SVGUnitTypesEnumSVG_UNIT_TYPE_OBJECTBOUNDINGBOXIsWrongUseDoNotCheckConstants);

const ClassInfo JSSVGUnitTypesConstructor::s_info = { "SVGUnitTypesConstructor", &Base::s_info, &JSSVGUnitTypesConstructorTable, 0, CREATE_METHOD_TABLE(JSSVGUnitTypesConstructor) };

JSSVGUnitTypesConstructor::JSSVGUnitTypesConstructor(Structure* structure, JSDOMGlobalObject* globalObject)
    : DOMConstructorObject(structure, globalObject)
{
}

void JSSVGUnitTypesConstructor::finishCreation(VM& vm, JSDOMGlobalObject* globalObject)
{
    Base::finishCreation(vm);
    ASSERT(inherits(info()));
    putDirect(vm, vm.propertyNames->prototype, JSSVGUnitTypesPrototype::self(vm, globalObject), DontDelete | ReadOnly);
    putDirect(vm, vm.propertyNames->length, jsNumber(0), ReadOnly | DontDelete | DontEnum);
}

bool JSSVGUnitTypesConstructor::getOwnPropertySlot(JSObject* object, ExecState* exec, PropertyName propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSSVGUnitTypesConstructor, JSDOMWrapper>(exec, JSSVGUnitTypesConstructorTable, jsCast<JSSVGUnitTypesConstructor*>(object), propertyName, slot);
}

/* Hash table for prototype */

static const HashTableValue JSSVGUnitTypesPrototypeTableValues[] =
{
    { "SVG_UNIT_TYPE_UNKNOWN", DontDelete | ReadOnly, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGUnitTypesSVG_UNIT_TYPE_UNKNOWN), (intptr_t)0 },
    { "SVG_UNIT_TYPE_USERSPACEONUSE", DontDelete | ReadOnly, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGUnitTypesSVG_UNIT_TYPE_USERSPACEONUSE), (intptr_t)0 },
    { "SVG_UNIT_TYPE_OBJECTBOUNDINGBOX", DontDelete | ReadOnly, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGUnitTypesSVG_UNIT_TYPE_OBJECTBOUNDINGBOX), (intptr_t)0 },
    { 0, 0, NoIntrinsic, 0, 0 }
};

static const HashTable JSSVGUnitTypesPrototypeTable = { 8, 7, JSSVGUnitTypesPrototypeTableValues, 0 };
const ClassInfo JSSVGUnitTypesPrototype::s_info = { "SVGUnitTypesPrototype", &Base::s_info, &JSSVGUnitTypesPrototypeTable, 0, CREATE_METHOD_TABLE(JSSVGUnitTypesPrototype) };

JSObject* JSSVGUnitTypesPrototype::self(VM& vm, JSGlobalObject* globalObject)
{
    return getDOMPrototype<JSSVGUnitTypes>(vm, globalObject);
}

bool JSSVGUnitTypesPrototype::getOwnPropertySlot(JSObject* object, ExecState* exec, PropertyName propertyName, PropertySlot& slot)
{
    JSSVGUnitTypesPrototype* thisObject = jsCast<JSSVGUnitTypesPrototype*>(object);
    return getStaticValueSlot<JSSVGUnitTypesPrototype, JSObject>(exec, JSSVGUnitTypesPrototypeTable, thisObject, propertyName, slot);
}

const ClassInfo JSSVGUnitTypes::s_info = { "SVGUnitTypes", &Base::s_info, &JSSVGUnitTypesTable, 0 , CREATE_METHOD_TABLE(JSSVGUnitTypes) };

JSSVGUnitTypes::JSSVGUnitTypes(Structure* structure, JSDOMGlobalObject* globalObject, PassRefPtr<SVGUnitTypes> impl)
    : JSDOMWrapper(structure, globalObject)
    , m_impl(impl.leakRef())
{
}

void JSSVGUnitTypes::finishCreation(VM& vm)
{
    Base::finishCreation(vm);
    ASSERT(inherits(info()));
}

JSObject* JSSVGUnitTypes::createPrototype(VM& vm, JSGlobalObject* globalObject)
{
    return JSSVGUnitTypesPrototype::create(vm, globalObject, JSSVGUnitTypesPrototype::createStructure(vm, globalObject, globalObject->objectPrototype()));
}

void JSSVGUnitTypes::destroy(JSC::JSCell* cell)
{
    JSSVGUnitTypes* thisObject = static_cast<JSSVGUnitTypes*>(cell);
    thisObject->JSSVGUnitTypes::~JSSVGUnitTypes();
}

JSSVGUnitTypes::~JSSVGUnitTypes()
{
    releaseImplIfNotNull();
}

bool JSSVGUnitTypes::getOwnPropertySlot(JSObject* object, ExecState* exec, PropertyName propertyName, PropertySlot& slot)
{
    JSSVGUnitTypes* thisObject = jsCast<JSSVGUnitTypes*>(object);
    ASSERT_GC_OBJECT_INHERITS(thisObject, info());
    return getStaticValueSlot<JSSVGUnitTypes, Base>(exec, JSSVGUnitTypesTable, thisObject, propertyName, slot);
}

EncodedJSValue jsSVGUnitTypesConstructor(ExecState* exec, EncodedJSValue thisValue, EncodedJSValue, PropertyName)
{
    JSSVGUnitTypes* domObject = jsDynamicCast<JSSVGUnitTypes*>(JSValue::decode(thisValue));
    if (!domObject)
        return throwVMTypeError(exec);
    if (!domObject)
        return throwVMTypeError(exec);
    return JSValue::encode(JSSVGUnitTypes::getConstructor(exec->vm(), domObject->globalObject()));
}

JSValue JSSVGUnitTypes::getConstructor(VM& vm, JSGlobalObject* globalObject)
{
    return getDOMConstructor<JSSVGUnitTypesConstructor>(vm, jsCast<JSDOMGlobalObject*>(globalObject));
}

// Constant getters

EncodedJSValue jsSVGUnitTypesSVG_UNIT_TYPE_UNKNOWN(ExecState* exec, EncodedJSValue, EncodedJSValue, PropertyName)
{
    UNUSED_PARAM(exec);
    return JSValue::encode(jsNumber(static_cast<int>(0)));
}

EncodedJSValue jsSVGUnitTypesSVG_UNIT_TYPE_USERSPACEONUSE(ExecState* exec, EncodedJSValue, EncodedJSValue, PropertyName)
{
    UNUSED_PARAM(exec);
    return JSValue::encode(jsNumber(static_cast<int>(1)));
}

EncodedJSValue jsSVGUnitTypesSVG_UNIT_TYPE_OBJECTBOUNDINGBOX(ExecState* exec, EncodedJSValue, EncodedJSValue, PropertyName)
{
    UNUSED_PARAM(exec);
    return JSValue::encode(jsNumber(static_cast<int>(2)));
}

bool JSSVGUnitTypesOwner::isReachableFromOpaqueRoots(JSC::Handle<JSC::Unknown> handle, void*, SlotVisitor& visitor)
{
    UNUSED_PARAM(handle);
    UNUSED_PARAM(visitor);
    return false;
}

void JSSVGUnitTypesOwner::finalize(JSC::Handle<JSC::Unknown> handle, void* context)
{
    JSSVGUnitTypes* jsSVGUnitTypes = jsCast<JSSVGUnitTypes*>(handle.get().asCell());
    DOMWrapperWorld& world = *static_cast<DOMWrapperWorld*>(context);
    uncacheWrapper(world, &jsSVGUnitTypes->impl(), jsSVGUnitTypes);
    jsSVGUnitTypes->releaseImpl();
}

SVGUnitTypes* toSVGUnitTypes(JSC::JSValue value)
{
    return value.inherits(JSSVGUnitTypes::info()) ? &jsCast<JSSVGUnitTypes*>(value)->impl() : 0;
}

}

#endif // ENABLE(SVG)