// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
class ScriptServerBlockDestructionStartedEvent {
public:
    virtual ~ScriptServerBlockDestructionStartedEvent();
    virtual void unk_vfn_1();

public:
    MCAPI void setActorId(struct ActorUniqueID const&);
    MCAPI void setBlockPos(class BlockPos const&);

private:
    MCAPI static class HashedString const mHash;
};