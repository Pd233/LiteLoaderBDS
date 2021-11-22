// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART
#include "Extra/StickInGroundSubcomponentAPI.hpp"
#undef EXTRA_INCLUDE_PART
class StickInGroundSubcomponent {
#include "Extra/StickInGroundSubcomponentAPI.hpp"
public:
    virtual ~StickInGroundSubcomponent();
    virtual void readfromJSON(class Json::Value&, class SemVersion const&);
    virtual void writetoJSON(class Json::Value&);
    virtual void doOnHitEffect(class Actor&, class ProjectileComponent&);
    virtual char const* getName();

public:
    MCAPI StickInGroundSubcomponent();
};