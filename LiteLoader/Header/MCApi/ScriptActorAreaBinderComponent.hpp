// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
class ScriptActorAreaBinderComponent {
public:
    virtual ~ScriptActorAreaBinderComponent();
    virtual bool serialize(class ScriptEngine&, class ScriptApi::ScriptObjectHandle const&);
    virtual bool deserialize(class ScriptEngine&, class ScriptApi::ScriptObjectHandle const&);
    virtual void unk_vfn_3();

public:
    MCAPI struct ActorUniqueID getIdentifier() const;

    MCAPI static std::string const TAG;
};