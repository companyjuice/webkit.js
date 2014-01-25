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
#include "JSEventTarget.h"

#include "Event.h"
#include "EventTarget.h"
#include "ExceptionCode.h"
#include "JSDOMBinding.h"
#include "JSEvent.h"
#include "JSEventListener.h"
#include <runtime/Error.h>
#include <wtf/GetPtr.h>

using namespace JSC;

namespace WebCore {

/* Hash table for prototype */

static const HashTableValue JSEventTargetPrototypeTableValues[] =
{
    { "addEventListener", JSC::Function, NoIntrinsic, (intptr_t)static_cast<NativeFunction>(jsEventTargetPrototypeFunctionAddEventListener), (intptr_t)2 },
    { "removeEventListener", JSC::Function, NoIntrinsic, (intptr_t)static_cast<NativeFunction>(jsEventTargetPrototypeFunctionRemoveEventListener), (intptr_t)2 },
    { "dispatchEvent", JSC::Function, NoIntrinsic, (intptr_t)static_cast<NativeFunction>(jsEventTargetPrototypeFunctionDispatchEvent), (intptr_t)1 },
    { 0, 0, NoIntrinsic, 0, 0 }
};

static const HashTable JSEventTargetPrototypeTable = { 8, 7, JSEventTargetPrototypeTableValues, 0 };
const ClassInfo JSEventTargetPrototype::s_info = { "EventTargetPrototype", &Base::s_info, &JSEventTargetPrototypeTable, 0, CREATE_METHOD_TABLE(JSEventTargetPrototype) };

JSObject* JSEventTargetPrototype::self(VM& vm, JSGlobalObject* globalObject)
{
    return getDOMPrototype<JSEventTarget>(vm, globalObject);
}

bool JSEventTargetPrototype::getOwnPropertySlot(JSObject* object, ExecState* exec, PropertyName propertyName, PropertySlot& slot)
{
    JSEventTargetPrototype* thisObject = jsCast<JSEventTargetPrototype*>(object);
    return getStaticFunctionSlot<JSObject>(exec, JSEventTargetPrototypeTable, thisObject, propertyName, slot);
}

const ClassInfo JSEventTarget::s_info = { "EventTarget", &Base::s_info, 0, 0 , CREATE_METHOD_TABLE(JSEventTarget) };

JSEventTarget::JSEventTarget(Structure* structure, JSDOMGlobalObject* globalObject, PassRefPtr<EventTarget> impl)
    : JSDOMWrapper(structure, globalObject)
    , m_impl(impl.leakRef())
{
}

void JSEventTarget::finishCreation(VM& vm)
{
    Base::finishCreation(vm);
    ASSERT(inherits(info()));
}

JSObject* JSEventTarget::createPrototype(VM& vm, JSGlobalObject* globalObject)
{
    return JSEventTargetPrototype::create(vm, globalObject, JSEventTargetPrototype::createStructure(vm, globalObject, globalObject->objectPrototype()));
}

void JSEventTarget::destroy(JSC::JSCell* cell)
{
    JSEventTarget* thisObject = static_cast<JSEventTarget*>(cell);
    thisObject->JSEventTarget::~JSEventTarget();
}

JSEventTarget::~JSEventTarget()
{
    releaseImplIfNotNull();
}

EncodedJSValue JSC_HOST_CALL jsEventTargetPrototypeFunctionAddEventListener(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    JSEventTarget* castedThis = jsDynamicCast<JSEventTarget*>(thisValue);
    if (!castedThis)
        return throwVMTypeError(exec);
    ASSERT_GC_OBJECT_INHERITS(castedThis, JSEventTarget::info());
    EventTarget& impl = castedThis->impl();
    JSValue listener = exec->argument(1);
    if (!listener.isObject())
        return JSValue::encode(jsUndefined());
    impl.addEventListener(exec->argument(0).toString(exec)->value(exec), JSEventListener::create(asObject(listener), castedThis, false, currentWorld(exec)), exec->argument(2).toBoolean(exec));
    return JSValue::encode(jsUndefined());
}

EncodedJSValue JSC_HOST_CALL jsEventTargetPrototypeFunctionRemoveEventListener(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    JSEventTarget* castedThis = jsDynamicCast<JSEventTarget*>(thisValue);
    if (!castedThis)
        return throwVMTypeError(exec);
    ASSERT_GC_OBJECT_INHERITS(castedThis, JSEventTarget::info());
    EventTarget& impl = castedThis->impl();
    JSValue listener = exec->argument(1);
    if (!listener.isObject())
        return JSValue::encode(jsUndefined());
    impl.removeEventListener(exec->argument(0).toString(exec)->value(exec), JSEventListener::create(asObject(listener), castedThis, false, currentWorld(exec)).get(), exec->argument(2).toBoolean(exec));
    return JSValue::encode(jsUndefined());
}

EncodedJSValue JSC_HOST_CALL jsEventTargetPrototypeFunctionDispatchEvent(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    JSEventTarget* castedThis = jsDynamicCast<JSEventTarget*>(thisValue);
    if (!castedThis)
        return throwVMTypeError(exec);
    ASSERT_GC_OBJECT_INHERITS(castedThis, JSEventTarget::info());
    EventTarget& impl = castedThis->impl();
    if (exec->argumentCount() < 1)
        return throwVMError(exec, createNotEnoughArgumentsError(exec));
    ExceptionCode ec = 0;
    Event* event(toEvent(exec->argument(0)));
    if (exec->hadException())
        return JSValue::encode(jsUndefined());

    JSC::JSValue result = jsBoolean(impl.dispatchEvent(event, ec));
    setDOMException(exec, ec);
    return JSValue::encode(result);
}

void JSEventTarget::visitChildren(JSCell* cell, SlotVisitor& visitor)
{
    JSEventTarget* thisObject = jsCast<JSEventTarget*>(cell);
    ASSERT_GC_OBJECT_INHERITS(thisObject, info());
    COMPILE_ASSERT(StructureFlags & OverridesVisitChildren, OverridesVisitChildrenWithoutSettingFlag);
    ASSERT(thisObject->structure()->typeInfo().overridesVisitChildren());
    Base::visitChildren(thisObject, visitor);
    thisObject->impl().visitJSEventListeners(visitor);
}

bool JSEventTargetOwner::isReachableFromOpaqueRoots(JSC::Handle<JSC::Unknown> handle, void*, SlotVisitor& visitor)
{
    JSEventTarget* jsEventTarget = jsCast<JSEventTarget*>(handle.get().asCell());
    if (jsEventTarget->impl().isFiringEventListeners())
        return true;
    UNUSED_PARAM(visitor);
    return false;
}

void JSEventTargetOwner::finalize(JSC::Handle<JSC::Unknown> handle, void* context)
{
    JSEventTarget* jsEventTarget = jsCast<JSEventTarget*>(handle.get().asCell());
    DOMWrapperWorld& world = *static_cast<DOMWrapperWorld*>(context);
    uncacheWrapper(world, &jsEventTarget->impl(), jsEventTarget);
    jsEventTarget->releaseImpl();
}


}