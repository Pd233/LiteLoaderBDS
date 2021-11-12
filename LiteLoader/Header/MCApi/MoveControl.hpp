// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
class MoveControl {
public:
    virtual ~MoveControl();
    virtual void initializeInternal(class Mob&, struct MoveControlDescription*);
    virtual void tick(class MoveControlComponent&, class Mob&);
    virtual void setWantedPosition(class MoveControlComponent&, class Mob&, class Vec3 const&, float);

public:
    MCAPI static float const MIN_DELTA_TO_JUMP;
    MCAPI static float const MIN_DELTA_TO_JUMP_UNDERWATER;
    MCAPI static float const MIN_DELTA_TO_MOVE;
    MCAPI static float const MIN_SPEED;
    MCAPI static float const MIN_SPEED_SQR;

protected:
    MCAPI float calculateMoveSpeed(class MoveControlComponent const&, class Mob&, class Vec3 const&, float);
    MCAPI float calculateYRotation(class MoveControlComponent const&, class Mob const&, class Vec3 const&, float);
};