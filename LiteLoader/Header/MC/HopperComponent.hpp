// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class HopperComponent {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_HOPPERCOMPONENT
public:
    class HopperComponent& operator=(class HopperComponent const &) = delete;
    HopperComponent(class HopperComponent const &) = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_HOPPERCOMPONENT
#endif
    MCAPI HopperComponent();
    MCAPI class BlockPos getLastPosition() const;
    MCAPI bool pullInItems(class Actor &);

protected:

private:

};