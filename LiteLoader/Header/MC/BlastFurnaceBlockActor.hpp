// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class BlastFurnaceBlockActor {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BLASTFURNACEBLOCKACTOR
public:
    class BlastFurnaceBlockActor& operator=(class BlastFurnaceBlockActor const &) = delete;
    BlastFurnaceBlockActor(class BlastFurnaceBlockActor const &) = delete;
    BlastFurnaceBlockActor() = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_BLASTFURNACEBLOCKACTOR
public:
    MCVAPI std::string getName() const;
#endif
    MCAPI BlastFurnaceBlockActor(class BlockPos const &);



};