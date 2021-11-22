// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#include "BaseMoveToBlockGoal.hpp"
#define EXTRA_INCLUDE_PART
#include "Extra/RaidGardenGoalAPI.hpp"
#undef EXTRA_INCLUDE_PART
class RaidGardenGoal : public BaseMoveToBlockGoal {
#include "Extra/RaidGardenGoalAPI.hpp"
public:
    virtual ~RaidGardenGoal();
    virtual bool canUse();
    virtual bool canContinueToUse();
    virtual void unk_vfn_3();
    virtual void start();
    virtual void tick();
    virtual void appendDebugInfo(std::string&);
    virtual void unk_vfn_8();
    virtual void unk_vfn_9();
    virtual bool isValidTarget(class BlockSource&, class BlockPos const&);
    virtual void unk_vfn_16();

public:
    MCAPI RaidGardenGoal(class Mob&, float, int, int, int, float, int, int, int, int, std::vector<class BlockDescriptor> const&);
};