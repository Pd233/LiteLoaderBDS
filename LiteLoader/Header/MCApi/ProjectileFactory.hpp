// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
class ProjectileFactory {

public:
    MCAPI bool shootProjectileFromDefinition(struct ActorDefinitionIdentifier const&, class Mob*, class Vec3);

    MCAPI static void initFactory();
    MCAPI static void shutdown();
};