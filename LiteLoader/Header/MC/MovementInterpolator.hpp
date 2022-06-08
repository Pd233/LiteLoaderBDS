// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class MovementInterpolator {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_MOVEMENTINTERPOLATOR
public:
    class MovementInterpolator& operator=(class MovementInterpolator const &) = delete;
    MovementInterpolator(class MovementInterpolator const &) = delete;
#endif

public:
    /*0*/ virtual ~MovementInterpolator();
    /*1*/ virtual void lerpTo(class Vec3 const &, class Vec2 const &, int);
    /*2*/ virtual void lerpToRotation(class Vec2 const &, int);
    /*3*/ virtual void tick(class Actor &);
    /*4*/ virtual void stop();
    /*5*/ virtual void start();
    /*6*/ virtual void reset();
    /*7*/ virtual void setHeadYawLerpTarget(float, int);
    /*8*/ virtual bool isActive() const;
    /*9*/ virtual int getPositionSteps() const;
    /*10*/ virtual int getRotationSteps() const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_MOVEMENTINTERPOLATOR
#endif
    MCAPI MovementInterpolator();

protected:

private:

};