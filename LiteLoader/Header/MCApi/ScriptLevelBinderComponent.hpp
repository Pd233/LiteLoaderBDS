// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
class ScriptLevelBinderComponent {
public:
    virtual ~ScriptLevelBinderComponent();
    virtual bool serialize(class ScriptEngine&, class ScriptApi::ScriptObjectHandle const&);
    virtual bool deserialize(class ScriptEngine&, class ScriptApi::ScriptObjectHandle const&);

public:
    MCAPI enum entt::entity getIdentifier() const;

    MCAPI static std::string const TAG;
};