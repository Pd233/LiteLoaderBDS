// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
class LootItemKilledByActorCondition {
public:
    virtual ~LootItemKilledByActorCondition();
    virtual bool applies(class Random&, class LootTableContext&);

public:
    MCAPI static std::unique_ptr<class LootItemCondition> deserialize(class Json::Value);
};