// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
class NapGoal {
public:
    virtual ~NapGoal();
    virtual bool canUse();
    virtual bool canContinueToUse();
    virtual void unk_vfn_3();
    virtual void start();
    virtual void stop();
    virtual void unk_vfn_6();
    virtual void appendDebugInfo(std::string&);
    virtual void unk_vfn_8();
    virtual void unk_vfn_9();

private:
    MCAPI bool _canSleep(struct Tick const&) const;
    MCAPI bool _detectsMobs() const;
    MCAPI void _setCooldown();

    MCAPI static float const MOB_DETECT_TIME;
};