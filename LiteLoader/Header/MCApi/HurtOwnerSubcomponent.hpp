// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
class HurtOwnerSubcomponent {
public:
    virtual ~HurtOwnerSubcomponent();
    virtual void readfromJSON(class Json::Value&, class SemVersion const&);
    virtual void writetoJSON(class Json::Value&);
    virtual void doOnHitEffect(class Actor&, class ProjectileComponent&);
    virtual char const* getName();
};