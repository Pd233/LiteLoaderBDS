// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class ItemStackRequestActionCraftBase {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ITEMSTACKREQUESTACTIONCRAFTBASE
public:
    class ItemStackRequestActionCraftBase& operator=(class ItemStackRequestActionCraftBase const &) = delete;
    ItemStackRequestActionCraftBase(class ItemStackRequestActionCraftBase const &) = delete;
    ItemStackRequestActionCraftBase() = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_ITEMSTACKREQUESTACTIONCRAFTBASE
    MCVAPI class ItemStackRequestActionCraftBase const * getCraftAction() const;
    MCVAPI void postLoadItems_DEPRECATEDASKTYLAING(class BlockPalette &, bool);
    MCVAPI ~ItemStackRequestActionCraftBase();
#endif

protected:

private:

};