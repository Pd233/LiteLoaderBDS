// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "MeleeAttackGoal.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class DelayedAttackGoal : public MeleeAttackGoal {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_DELAYEDATTACKGOAL
public:
    class DelayedAttackGoal& operator=(class DelayedAttackGoal const &) = delete;
    DelayedAttackGoal(class DelayedAttackGoal const &) = delete;
    DelayedAttackGoal() = delete;
#endif

public:
    /*0*/ virtual ~DelayedAttackGoal();
    /*1*/ virtual bool canUse();
    /*2*/ virtual bool canContinueToUse();
    /*3*/ virtual void __unk_vfn_3();
    /*4*/ virtual void start();
    /*5*/ virtual void stop();
    /*6*/ virtual void tick();
    /*7*/ virtual void appendDebugInfo(std::string &) const;
    /*8*/ virtual void __unk_vfn_8();
    /*9*/ virtual void __unk_vfn_9();
    /*10*/ virtual void _attemptMoveToTarget(class Actor &);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_DELAYEDATTACKGOAL
#endif
    MCAPI DelayedAttackGoal(class Mob &);

protected:

private:
    MCAPI void _attemptAttack(class Actor *);
    MCAPI void _attemptStartAttacking(class Actor *) const;
    MCAPI void _manageAttackTime();

};