// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
class StompBlockGoal : public BaseMoveToGoal {
public:
    virtual ~StompBlockGoal();
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
    virtual bool _canReach(class BlockPos const&);
    virtual void _moveToBlock();
    virtual void unk_vfn_16();
    virtual bool findTargetBlock();
    virtual void _createBreakProgressParticles(class Level&, class BlockSource&, class BlockPos);
    virtual void _createDestroyParticles(class Level&, class BlockSource&, class BlockPos);
    virtual void _playBreakProgressSound(class Level&, class BlockSource&, class BlockPos);
    virtual void _playDestroySound(class Level&, class BlockSource&, class BlockPos);
};