// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
class ScriptMovementJumpComponentFactory {
public:
    virtual ~ScriptMovementJumpComponentFactory();
    virtual class Scripting::StrongObjectHandle createComponent(class WeakEntityRef, class Scripting::WeakLifetimeScope const&, std::string const&);
    virtual bool hasComponent(class WeakEntityRef);
};