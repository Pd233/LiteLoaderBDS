// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class JumpControlComponent {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_JUMPCONTROLCOMPONENT
public:
    class JumpControlComponent& operator=(class JumpControlComponent const &) = delete;
    JumpControlComponent(class JumpControlComponent const &) = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_JUMPCONTROLCOMPONENT
public:
#endif
    MCAPI JumpControlComponent();
    MCAPI int getAnimationDuration() const;
    MCAPI float getDistanceScale() const;
    MCAPI int getJumpDelay(class Mob const &) const;
    MCAPI float getJumpPower(class Mob const &) const;
    MCAPI bool getJumping() const;
    MCAPI bool getSwimming() const;
    MCAPI void initMultiTypeJumpComponent(class Mob &, class ActorDefinitionDescriptor &);
    MCAPI void initializeFromDefinition(class Mob &, struct JumpControlDescription *);
    MCAPI class JumpControlComponent & operator=(class JumpControlComponent &&);
    MCAPI void resetSpeedModifier(class Mob &);
    MCAPI void setInternalType(std::unique_ptr<class JumpControl>);
    MCAPI void setJumpType(class Mob &, enum JumpType);
    MCAPI void setJumping(bool);
    MCAPI void setSwimming(bool);
    MCAPI void update(class Mob &);


//private:
    MCAPI float _getDelayInternal() const;
    MCAPI float _getHeightInternal() const;

};