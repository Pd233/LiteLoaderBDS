// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
class ClientPlayerEventCoordinator {
public:
    virtual ~ClientPlayerEventCoordinator();

public:
    MCAPI void sendPlayerDestroyedBlock(class Player&, class BlockLegacy const&);
    MCAPI void sendPlayerInput(struct IPlayerMovementProxy&, class MoveInputHandler&);
    MCAPI void sendStartDestroyBlock(class Player&, class BlockPos const&, unsigned char&);
};