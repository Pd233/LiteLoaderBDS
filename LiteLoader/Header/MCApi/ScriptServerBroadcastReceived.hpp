// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
class ScriptServerBroadcastReceived {
public:
    virtual ~ScriptServerBroadcastReceived();
    virtual bool receivedEvent(class ScriptApi::ScriptVersionInfo const&, class ScriptEngine&, class ScriptServerContext&, std::string const&, class ScriptApi::ScriptObjectHandle const&);
    virtual void unk_vfn_2();
};