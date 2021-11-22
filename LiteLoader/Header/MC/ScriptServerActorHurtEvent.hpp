// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART
#include "Extra/ScriptServerActorHurtEventAPI.hpp"
#undef EXTRA_INCLUDE_PART
class ScriptServerActorHurtEvent {
#include "Extra/ScriptServerActorHurtEventAPI.hpp"
public:
    virtual ~ScriptServerActorHurtEvent();
    virtual bool _serialize(class ScriptEngine&, class ScriptApi::ScriptObjectHandle&);

public:
    MCAPI ScriptServerActorHurtEvent();
    MCAPI void setAbsorbedDamage(int);
    MCAPI void setActorId(struct ActorUniqueID const&);
    MCAPI void setAttackerId(struct ActorUniqueID const&);
    MCAPI void setBlockPos(class BlockPos const&);
    MCAPI void setCause(std::string const&);
    MCAPI void setDamage(int);
    MCAPI void setProjectile(enum ActorType const&);


private:
    MCAPI static class HashedString const mHash;
};