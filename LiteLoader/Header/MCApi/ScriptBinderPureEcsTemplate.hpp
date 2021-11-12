// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
class ScriptBinderPureEcsTemplate {
public:
    virtual ~ScriptBinderPureEcsTemplate();
    virtual std::string const& getTemplateIdentifier();
    virtual void applyTemplate(class ScriptObjectBinder&);

public:
    MCAPI static std::unique_ptr<class ScriptObjectBinder> build(class entt::basic_registry<enum entt::entity>&, enum entt::entity);
};