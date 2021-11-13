// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
class StalkAndPounceOnTargetGoal {
public:
    virtual ~StalkAndPounceOnTargetGoal();
    virtual bool canUse();
    virtual bool canContinueToUse();
    virtual bool canBeInterrupted();
    virtual void start();
    virtual void stop();
    virtual void tick();
    virtual void appendDebugInfo(std::string&);
    virtual void unk_vfn_8();
    virtual void unk_vfn_9();

private:
    MCAPI bool _isStuckBlock(class BlockPos) const;
    MCAPI void _preparePounce(class Vec3 const&, class Vec3 const&);
};