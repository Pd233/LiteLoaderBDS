// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "MoveControl.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class FlyMoveControl : public MoveControl {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_FLYMOVECONTROL
public:
    class FlyMoveControl& operator=(class FlyMoveControl const &) = delete;
    FlyMoveControl(class FlyMoveControl const &) = delete;
#endif

public:
    /*0*/ virtual ~FlyMoveControl();
    /*2*/ virtual void tick(class MoveControlComponent &, class Mob &);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_FLYMOVECONTROL
public:
#endif
    MCAPI FlyMoveControl();



};