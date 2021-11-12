// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
class ScriptBinderActorTemplate {
public:
    virtual ~ScriptBinderActorTemplate();
    virtual std::string const& getTemplateIdentifier();
    virtual void applyTemplate(class ScriptObjectBinder&);

public:
    MCAPI static std::unique_ptr<class ScriptObjectBinder> build(class entt::basic_registry<enum entt::entity>&, class Actor const&);
};