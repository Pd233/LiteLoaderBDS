// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class RopePoints {

#define AFTER_EXTRA

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ROPEPOINTS
public:
    class RopePoints& operator=(class RopePoints const &) = delete;
    RopePoints(class RopePoints const &) = delete;
    RopePoints() = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_ROPEPOINTS
public:
#endif
    MCAPI void beginRope();
    MCAPI void endRope();
    MCAPI void freezeInterpolation();
    MCAPI void pushBack(class Vec3 const &);
    MCAPI void reserve(unsigned __int64);
    MCAPI unsigned __int64 size() const;
    MCAPI ~RopePoints();



};