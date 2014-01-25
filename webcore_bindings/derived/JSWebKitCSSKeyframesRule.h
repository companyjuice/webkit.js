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

#ifndef JSWebKitCSSKeyframesRule_h
#define JSWebKitCSSKeyframesRule_h

#include "JSCSSRule.h"
#include "JSDOMBinding.h"
#include "WebKitCSSKeyframesRule.h"
#include <runtime/JSObject.h>

namespace WebCore {

class JSWebKitCSSKeyframesRule : public JSCSSRule {
public:
    typedef JSCSSRule Base;
    static JSWebKitCSSKeyframesRule* create(JSC::Structure* structure, JSDOMGlobalObject* globalObject, PassRefPtr<WebKitCSSKeyframesRule> impl)
    {
        JSWebKitCSSKeyframesRule* ptr = new (NotNull, JSC::allocateCell<JSWebKitCSSKeyframesRule>(globalObject->vm().heap)) JSWebKitCSSKeyframesRule(structure, globalObject, impl);
        ptr->finishCreation(globalObject->vm());
        return ptr;
    }

    static JSC::JSObject* createPrototype(JSC::VM&, JSC::JSGlobalObject*);
    static bool getOwnPropertySlot(JSC::JSObject*, JSC::ExecState*, JSC::PropertyName, JSC::PropertySlot&);
    static bool getOwnPropertySlotByIndex(JSC::JSObject*, JSC::ExecState*, unsigned propertyName, JSC::PropertySlot&);
    static void put(JSC::JSCell*, JSC::ExecState*, JSC::PropertyName, JSC::JSValue, JSC::PutPropertySlot&);
    DECLARE_INFO;

    static JSC::Structure* createStructure(JSC::VM& vm, JSC::JSGlobalObject* globalObject, JSC::JSValue prototype)
    {
        return JSC::Structure::create(vm, globalObject, prototype, JSC::TypeInfo(JSC::ObjectType, StructureFlags), info());
    }

    static void getOwnPropertyNames(JSC::JSObject*, JSC::ExecState*, JSC::PropertyNameArray&, JSC::EnumerationMode mode = JSC::ExcludeDontEnumProperties);
    static JSC::JSValue getConstructor(JSC::VM&, JSC::JSGlobalObject*);
    WebKitCSSKeyframesRule& impl() const
    {
        return static_cast<WebKitCSSKeyframesRule&>(Base::impl());
    }
protected:
    JSWebKitCSSKeyframesRule(JSC::Structure*, JSDOMGlobalObject*, PassRefPtr<WebKitCSSKeyframesRule>);
    void finishCreation(JSC::VM&);
    static const unsigned StructureFlags = JSC::OverridesGetPropertyNames | JSC::OverridesGetOwnPropertySlot | JSC::InterceptsGetOwnPropertySlotByIndexEvenWhenLengthIsNotZero | Base::StructureFlags;
    static JSC::EncodedJSValue indexGetter(JSC::ExecState*, JSC::EncodedJSValue, JSC::EncodedJSValue, unsigned);
};


class JSWebKitCSSKeyframesRulePrototype : public JSC::JSNonFinalObject {
public:
    typedef JSC::JSNonFinalObject Base;
    static JSC::JSObject* self(JSC::VM&, JSC::JSGlobalObject*);
    static JSWebKitCSSKeyframesRulePrototype* create(JSC::VM& vm, JSC::JSGlobalObject* globalObject, JSC::Structure* structure)
    {
        JSWebKitCSSKeyframesRulePrototype* ptr = new (NotNull, JSC::allocateCell<JSWebKitCSSKeyframesRulePrototype>(vm.heap)) JSWebKitCSSKeyframesRulePrototype(vm, globalObject, structure);
        ptr->finishCreation(vm);
        return ptr;
    }

    DECLARE_INFO;
    static bool getOwnPropertySlot(JSC::JSObject*, JSC::ExecState*, JSC::PropertyName, JSC::PropertySlot&);
    static JSC::Structure* createStructure(JSC::VM& vm, JSC::JSGlobalObject* globalObject, JSC::JSValue prototype)
    {
        return JSC::Structure::create(vm, globalObject, prototype, JSC::TypeInfo(JSC::ObjectType, StructureFlags), info());
    }

private:
    JSWebKitCSSKeyframesRulePrototype(JSC::VM& vm, JSC::JSGlobalObject*, JSC::Structure* structure) : JSC::JSNonFinalObject(vm, structure) { }
protected:
    static const unsigned StructureFlags = JSC::OverridesGetOwnPropertySlot | Base::StructureFlags;
};

class JSWebKitCSSKeyframesRuleConstructor : public DOMConstructorObject {
private:
    JSWebKitCSSKeyframesRuleConstructor(JSC::Structure*, JSDOMGlobalObject*);
    void finishCreation(JSC::VM&, JSDOMGlobalObject*);

public:
    typedef DOMConstructorObject Base;
    static JSWebKitCSSKeyframesRuleConstructor* create(JSC::VM& vm, JSC::Structure* structure, JSDOMGlobalObject* globalObject)
    {
        JSWebKitCSSKeyframesRuleConstructor* ptr = new (NotNull, JSC::allocateCell<JSWebKitCSSKeyframesRuleConstructor>(vm.heap)) JSWebKitCSSKeyframesRuleConstructor(structure, globalObject);
        ptr->finishCreation(vm, globalObject);
        return ptr;
    }

    static bool getOwnPropertySlot(JSC::JSObject*, JSC::ExecState*, JSC::PropertyName, JSC::PropertySlot&);
    DECLARE_INFO;
    static JSC::Structure* createStructure(JSC::VM& vm, JSC::JSGlobalObject* globalObject, JSC::JSValue prototype)
    {
        return JSC::Structure::create(vm, globalObject, prototype, JSC::TypeInfo(JSC::ObjectType, StructureFlags), info());
    }
protected:
    static const unsigned StructureFlags = JSC::OverridesGetOwnPropertySlot | JSC::ImplementsHasInstance | DOMConstructorObject::StructureFlags;
};

// Functions

JSC::EncodedJSValue JSC_HOST_CALL jsWebKitCSSKeyframesRulePrototypeFunctionInsertRule(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsWebKitCSSKeyframesRulePrototypeFunctionDeleteRule(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsWebKitCSSKeyframesRulePrototypeFunctionFindRule(JSC::ExecState*);
// Attributes

JSC::EncodedJSValue jsWebKitCSSKeyframesRuleName(JSC::ExecState*, JSC::EncodedJSValue, JSC::EncodedJSValue, JSC::PropertyName);
void setJSWebKitCSSKeyframesRuleName(JSC::ExecState*, JSC::EncodedJSValue, JSC::EncodedJSValue);
JSC::EncodedJSValue jsWebKitCSSKeyframesRuleCssRules(JSC::ExecState*, JSC::EncodedJSValue, JSC::EncodedJSValue, JSC::PropertyName);
JSC::EncodedJSValue jsWebKitCSSKeyframesRuleConstructor(JSC::ExecState*, JSC::EncodedJSValue, JSC::EncodedJSValue, JSC::PropertyName);

} // namespace WebCore

#endif