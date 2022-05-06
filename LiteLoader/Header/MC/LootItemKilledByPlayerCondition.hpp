// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Json.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class LootItemKilledByPlayerCondition {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_LOOTITEMKILLEDBYPLAYERCONDITION
public:
    class LootItemKilledByPlayerCondition& operator=(class LootItemKilledByPlayerCondition const &) = delete;
    LootItemKilledByPlayerCondition(class LootItemKilledByPlayerCondition const &) = delete;
    LootItemKilledByPlayerCondition() = delete;
#endif

public:
    /*0*/ virtual ~LootItemKilledByPlayerCondition();
    /*1*/ virtual bool applies(class Random &, class LootTableContext &);
    MCAPI static std::unique_ptr<class LootItemCondition> deserialize(class Json::Value);

protected:

private:

};