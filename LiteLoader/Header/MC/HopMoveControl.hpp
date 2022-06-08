// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "MoveControl.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class HopMoveControl : public MoveControl {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_HOPMOVECONTROL
public:
    class HopMoveControl& operator=(class HopMoveControl const &) = delete;
    HopMoveControl(class HopMoveControl const &) = delete;
#endif

public:
    /*0*/ virtual ~HopMoveControl();
    /*2*/ virtual void tick(class MoveControlComponent &, class Mob &);
    /*3*/ virtual void setWantedPosition(class MoveControlComponent &, class Mob &, class Vec3 const &, float);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_HOPMOVECONTROL
public:
#endif
    MCAPI HopMoveControl();



};