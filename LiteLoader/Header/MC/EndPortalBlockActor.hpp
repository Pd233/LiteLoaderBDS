// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "BlockActor.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class EndPortalBlockActor : public BlockActor {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ENDPORTALBLOCKACTOR
public:
    class EndPortalBlockActor& operator=(class EndPortalBlockActor const &) = delete;
    EndPortalBlockActor(class EndPortalBlockActor const &) = delete;
    EndPortalBlockActor() = delete;
#endif

public:
    /*0*/ virtual ~EndPortalBlockActor();
    /*4*/ virtual void saveBlockData(class CompoundTag &, class BlockSource &) const;
    /*5*/ virtual void loadBlockData(class CompoundTag const &, class BlockSource &, class DataLoadHelper &);
    /*6*/ virtual void onCustomTagLoadDone(class BlockSource &);
    /*8*/ virtual void onChanged(class BlockSource &);
    /*11*/ virtual void onPlace(class BlockSource &);
    /*12*/ virtual void __unk_vfn_12();
    /*13*/ virtual void onRemoved(class BlockSource &);
    /*14*/ virtual void triggerEvent(int, int);
    /*16*/ virtual void __unk_vfn_16();
    /*17*/ virtual float getShadowRadius(class BlockSource &) const;
    /*19*/ virtual class BlockActor * getCrackEntity(class BlockSource &, class BlockPos const &);
    /*27*/ virtual class PistonBlockActor * getOwningPiston(class BlockSource &);
    /*28*/ virtual void __unk_vfn_28();
    /*29*/ virtual void __unk_vfn_29();
    /*30*/ virtual void __unk_vfn_30();
    /*31*/ virtual void __unk_vfn_31();
    /*32*/ virtual void __unk_vfn_32();
    /*33*/ virtual void __unk_vfn_33();
    /*35*/ virtual void _onUpdatePacket(class CompoundTag const &, class BlockSource &);
    /*36*/ virtual bool _playerCanUpdate(class Player const &) const;
    MCAPI EndPortalBlockActor(class BlockPos const &);

protected:

private:

};