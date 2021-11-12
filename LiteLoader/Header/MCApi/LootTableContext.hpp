// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
class LootTableContext {

public:
    MCAPI class Actor* getEntity(enum ActorTarget) const;
    MCAPI class Actor* getKillerEntity() const;
    MCAPI class Actor* getKillerPet() const;
    MCAPI class Actor* getKillerPlayer() const;
    MCAPI class Level* getLevel() const;
    MCAPI std::string getOriginalItemName() const;
    MCAPI class Actor* getThisEntity() const;
    MCAPI class ItemStack const* getTool() const;
    MCAPI void setOriginalItemName(std::string const&);
};