// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
class RandomDyeFunction : public LootItemFunction {
public:
    virtual ~RandomDyeFunction();
    virtual void apply(class ItemInstance&, class Random&, class LootTableContext&);
    virtual void apply(class ItemStack&, class Random&, class LootTableContext&);

private:
    MCAPI void _applyBase(class ItemStackBase&, class Random&) const;
    MCAPI class mce::Color _getRandomArmorColor(class Random&) const;
    MCAPI class mce::Color _getRandomDyeColor(class Random&) const;
};