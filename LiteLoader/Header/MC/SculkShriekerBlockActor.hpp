// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "BlockActor.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class SculkShriekerBlockActor : public BlockActor {

#define AFTER_EXTRA

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SCULKSHRIEKERBLOCKACTOR
public:
    class SculkShriekerBlockActor& operator=(class SculkShriekerBlockActor const &) = delete;
    SculkShriekerBlockActor(class SculkShriekerBlockActor const &) = delete;
    SculkShriekerBlockActor() = delete;
#endif

public:
    /*0*/ virtual ~SculkShriekerBlockActor();
    /*7*/ virtual void tick(class BlockSource &);
    /*12*/ virtual void __unk_vfn_12();
    /*13*/ virtual void onRemoved(class BlockSource &);
    /*16*/ virtual void __unk_vfn_16();
    /*28*/ virtual void __unk_vfn_28();
    /*29*/ virtual void __unk_vfn_29();
    /*31*/ virtual void __unk_vfn_31();
    /*32*/ virtual void __unk_vfn_32();
    /*33*/ virtual void __unk_vfn_33();
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_SCULKSHRIEKERBLOCKACTOR
public:
#endif
    MCAPI SculkShriekerBlockActor(class BlockPos const &);



};