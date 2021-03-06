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

/*
* This file was modified by Electronic Arts Inc Copyright � 2009-2010
*/

#include "config.h"

#include "JSNavigator.h"

#include <wtf/GetPtr.h>

#include "JSMimeTypeArray.h"
#include "JSPluginArray.h"
#include "KURL.h"
#include "MimeTypeArray.h"
#include "Navigator.h"
#include "PluginArray.h"

using namespace KJS;

namespace WebCore {

/* Hash table */

static const HashTableValue JSNavigatorTableValues[15] =
{
    { "appCodeName", (intptr_t)JSNavigator::AppCodeNameAttrNum, DontDelete|ReadOnly, 0 },
    { "appName", (intptr_t)JSNavigator::AppNameAttrNum, DontDelete|ReadOnly, 0 },
    { "appVersion", (intptr_t)JSNavigator::AppVersionAttrNum, DontDelete|ReadOnly, 0 },
    { "language", (intptr_t)JSNavigator::LanguageAttrNum, DontDelete|ReadOnly, 0 },
    { "userAgent", (intptr_t)JSNavigator::UserAgentAttrNum, DontDelete|ReadOnly, 0 },
    { "platform", (intptr_t)JSNavigator::PlatformAttrNum, DontDelete|ReadOnly, 0 },
    { "plugins", (intptr_t)JSNavigator::PluginsAttrNum, DontDelete|ReadOnly, 0 },
    { "mimeTypes", (intptr_t)JSNavigator::MimeTypesAttrNum, DontDelete|ReadOnly, 0 },
    { "product", (intptr_t)JSNavigator::ProductAttrNum, DontDelete|ReadOnly, 0 },
    { "productSub", (intptr_t)JSNavigator::ProductSubAttrNum, DontDelete|ReadOnly, 0 },
    { "vendor", (intptr_t)JSNavigator::VendorAttrNum, DontDelete|ReadOnly, 0 },
    { "vendorSub", (intptr_t)JSNavigator::VendorSubAttrNum, DontDelete|ReadOnly, 0 },
    { "cookieEnabled", (intptr_t)JSNavigator::CookieEnabledAttrNum, DontDelete|ReadOnly, 0 },
    { "onLine", (intptr_t)JSNavigator::OnLineAttrNum, DontDelete|ReadOnly, 0 },
    { 0, 0, 0, 0 }
};

static const HashTable JSNavigatorTable = { 511, JSNavigatorTableValues, 0 };

/* Hash table for prototype */

static const HashTableValue JSNavigatorPrototypeTableValues[2] =
{
    { "javaEnabled", (intptr_t)jsNavigatorPrototypeFunctionJavaEnabled, DontDelete|Function, 0 },
    { 0, 0, 0, 0 }
};

static const HashTable JSNavigatorPrototypeTable = { 0, JSNavigatorPrototypeTableValues, 0 };

const ClassInfo JSNavigatorPrototype::s_info = { "NavigatorPrototype", 0, &JSNavigatorPrototypeTable, 0 };

JSObject* JSNavigatorPrototype::self(ExecState* exec)
{
    // Changed by Paul Pedriana (1/2009), as the static new was creating a memory leak. If this gets called a lot then we can consider making it a static pointer that's freed on shutdown.
    const Identifier prototypeIdentifier(exec, "[[JSNavigator.prototype]]");
    return KJS::cacheGlobalObject<JSNavigatorPrototype>(exec, prototypeIdentifier);
}

bool JSNavigatorPrototype::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticFunctionSlot<JSObject>(exec, &JSNavigatorPrototypeTable, this, propertyName, slot);
}

const ClassInfo JSNavigator::s_info = { "Navigator", 0, &JSNavigatorTable , 0 };

JSNavigator::JSNavigator(JSObject* prototype, Navigator* impl)
    : DOMObject(prototype)
    , m_impl(impl)
{
}

JSNavigator::~JSNavigator()
{
    ScriptInterpreter::forgetDOMObject(m_impl.get());

}

bool JSNavigator::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSNavigator, Base>(exec, &JSNavigatorTable, this, propertyName, slot);
}

JSValue* JSNavigator::getValueProperty(ExecState* exec, int token) const
{
    switch (token) {
    case AppCodeNameAttrNum: {
        Navigator* imp = static_cast<Navigator*>(impl());
        return jsString(exec, imp->appCodeName());
    }
    case AppNameAttrNum: {
        Navigator* imp = static_cast<Navigator*>(impl());
        return jsString(exec, imp->appName());
    }
    case AppVersionAttrNum: {
        return appVersion(exec);
    }
    case LanguageAttrNum: {
        Navigator* imp = static_cast<Navigator*>(impl());
        return jsString(exec, imp->language());
    }
    case UserAgentAttrNum: {
        Navigator* imp = static_cast<Navigator*>(impl());
        return jsString(exec, imp->userAgent());
    }
    case PlatformAttrNum: {
        Navigator* imp = static_cast<Navigator*>(impl());
        return jsString(exec, imp->platform());
    }
    case PluginsAttrNum: {
        Navigator* imp = static_cast<Navigator*>(impl());
        return toJS(exec, WTF::getPtr(imp->plugins()));
    }
    case MimeTypesAttrNum: {
        Navigator* imp = static_cast<Navigator*>(impl());
        return toJS(exec, WTF::getPtr(imp->mimeTypes()));
    }
    case ProductAttrNum: {
        Navigator* imp = static_cast<Navigator*>(impl());
        return jsString(exec, imp->product());
    }
    case ProductSubAttrNum: {
        Navigator* imp = static_cast<Navigator*>(impl());
        return jsString(exec, imp->productSub());
    }
    case VendorAttrNum: {
        Navigator* imp = static_cast<Navigator*>(impl());
        return jsString(exec, imp->vendor());
    }
    case VendorSubAttrNum: {
        Navigator* imp = static_cast<Navigator*>(impl());
        return jsString(exec, imp->vendorSub());
    }
    case CookieEnabledAttrNum: {
        Navigator* imp = static_cast<Navigator*>(impl());
        return jsBoolean(imp->cookieEnabled());
    }
    case OnLineAttrNum: {
        Navigator* imp = static_cast<Navigator*>(impl());
        return jsBoolean(imp->onLine());
    }
    }
    return 0;
}

JSValue* jsNavigatorPrototypeFunctionJavaEnabled(ExecState* exec, JSObject*, JSValue* thisValue, const ArgList& args)
{
    if (!thisValue->isObject(&JSNavigator::s_info))
        return throwError(exec, TypeError);
    JSNavigator* castedThisObj = static_cast<JSNavigator*>(thisValue);
    Navigator* imp = static_cast<Navigator*>(castedThisObj->impl());


    KJS::JSValue* result = jsBoolean(imp->javaEnabled());
    return result;
}

KJS::JSValue* toJS(KJS::ExecState* exec, Navigator* obj)
{
    return cacheDOMObject<Navigator, JSNavigator, JSNavigatorPrototype>(exec, obj);
}
Navigator* toNavigator(KJS::JSValue* val)
{
    return val->isObject(&JSNavigator::s_info) ? static_cast<JSNavigator*>(val)->impl() : 0;
}

}
