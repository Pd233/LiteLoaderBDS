// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#include "BaseMobSpawner.hpp"
#define EXTRA_INCLUDE_PART
#include "Extra/DefaultMobSpawnerAPI.hpp"
#undef EXTRA_INCLUDE_PART
class DefaultMobSpawner : public BaseMobSpawner {
#include "Extra/DefaultMobSpawnerAPI.hpp"
public:
    virtual ~DefaultMobSpawner();
    virtual class BlockPos const& getPos();
};