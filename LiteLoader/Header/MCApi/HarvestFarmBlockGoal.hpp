// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
class HarvestFarmBlockGoal : public BaseMoveToBlockGoal {
public:
    virtual ~HarvestFarmBlockGoal();
    virtual bool canUse();
    virtual bool canContinueToUse();
    virtual void unk_vfn_3();
    virtual void start();
    virtual void stop();
    virtual void tick();
    virtual void appendDebugInfo(std::string&);
    virtual void unk_vfn_8();
    virtual void unk_vfn_9();
    virtual bool isValidTarget(class BlockSource&, class BlockPos const&);
    virtual void unk_vfn_16();

protected:
    MCAPI bool trySowCrop(class BlockSource&, class BlockPos const&);
};