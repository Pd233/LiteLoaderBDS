// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Json.hpp"
#include "LootItemFunction.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class SetBannerDetailsFunction : public LootItemFunction {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SETBANNERDETAILSFUNCTION
public:
    class SetBannerDetailsFunction& operator=(class SetBannerDetailsFunction const &) = delete;
    SetBannerDetailsFunction(class SetBannerDetailsFunction const &) = delete;
    SetBannerDetailsFunction() = delete;
#endif

public:
    /*0*/ virtual ~SetBannerDetailsFunction();
    /*1*/ virtual void apply(class ItemStack &, class Random &, class LootTableContext &);
    /*3*/ virtual void apply(class ItemInstance &, class Random &, class LootTableContext &);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_SETBANNERDETAILSFUNCTION
#endif
    MCAPI static std::unique_ptr<class LootItemFunction> deserialize(class Json::Value, std::vector<std::unique_ptr<class LootItemCondition>> &);

protected:

private:
    MCAPI void _apply(class ItemStackBase &, class Random &, class LootTableContext &) const;
    MCAPI static void _parseBannerPattern(std::vector<struct std::pair<unsigned char, enum ItemColor>> &, class Json::Value const &);

};