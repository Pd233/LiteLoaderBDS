// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class LegacyStructureBlockInfo {

#define AFTER_EXTRA

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_LEGACYSTRUCTUREBLOCKINFO
public:
    class LegacyStructureBlockInfo& operator=(class LegacyStructureBlockInfo const &) = delete;
    LegacyStructureBlockInfo(class LegacyStructureBlockInfo const &) = delete;
    LegacyStructureBlockInfo() = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_LEGACYSTRUCTUREBLOCKINFO
public:
#endif
    MCAPI LegacyStructureBlockInfo(class BlockPos const &, std::unique_ptr<class CompoundTag>, class Block const &, class Block const &);



};