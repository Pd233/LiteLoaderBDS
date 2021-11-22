// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART
#include "Extra/StructureAnimationActionAPI.hpp"
#undef EXTRA_INCLUDE_PART
class StructureAnimationAction {
#include "Extra/StructureAnimationActionAPI.hpp"
public:
    virtual ~StructureAnimationAction();
    virtual void execute(class ServerLevel&, class Dimension&);
    virtual void serialize(class CompoundTag&);
    virtual void unk_vfn_3();

public:
    MCAPI StructureAnimationAction(std::unique_ptr<class StructureAnimationData>, class AutomaticID<class Dimension, int>);
    MCAPI StructureAnimationAction(class StructureSettings const&, class AutomaticID<class Dimension, int>, class BlockPos const&, std::string const&);
};