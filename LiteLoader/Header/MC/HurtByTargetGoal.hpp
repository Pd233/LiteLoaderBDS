// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "TargetGoal.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class HurtByTargetGoal : public TargetGoal {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_HURTBYTARGETGOAL
public:
    class HurtByTargetGoal& operator=(class HurtByTargetGoal const &) = delete;
    HurtByTargetGoal(class HurtByTargetGoal const &) = delete;
    HurtByTargetGoal() = delete;
#endif

public:
    /*0*/ virtual ~HurtByTargetGoal();
    /*1*/ virtual bool canUse();
    /*4*/ virtual void start();
    /*7*/ virtual void appendDebugInfo(std::string &) const;
    /*8*/ virtual void __unk_vfn_8();
    /*9*/ virtual void __unk_vfn_9();
    /*11*/ virtual void alertOther(class Mob *, class Mob *);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_HURTBYTARGETGOAL
public:
#endif
    MCAPI HurtByTargetGoal(class Mob &, std::vector<struct MobDescriptor> const &, bool);



};