// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "BushBlock.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class DoublePlantBlock : public BushBlock {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_DOUBLEPLANTBLOCK
public:
    class DoublePlantBlock& operator=(class DoublePlantBlock const &) = delete;
    DoublePlantBlock(class DoublePlantBlock const &) = delete;
    DoublePlantBlock() = delete;
#endif

public:
    /*0*/ virtual ~DoublePlantBlock();
    /*3*/ virtual class Block const * getNextBlockPermutation(class Block const &) const;
    /*7*/ virtual class Vec3 randomlyModifyPosition(class BlockPos const &, int &) const;
    /*8*/ virtual class Vec3 randomlyModifyPosition(class BlockPos const &) const;
    /*10*/ virtual class AABB const & getAABB(class IConstBlockSource const &, class BlockPos const &, class Block const &, class AABB &, bool) const;
    /*19*/ virtual void __unk_vfn_19();
    /*30*/ virtual void __unk_vfn_30();
    /*31*/ virtual void __unk_vfn_31();
    /*32*/ virtual void __unk_vfn_32();
    /*34*/ virtual void __unk_vfn_34();
    /*35*/ virtual void __unk_vfn_35();
    /*36*/ virtual void __unk_vfn_36();
    /*37*/ virtual void __unk_vfn_37();
    /*38*/ virtual void __unk_vfn_38();
    /*39*/ virtual void __unk_vfn_39();
    /*40*/ virtual void __unk_vfn_40();
    /*41*/ virtual void __unk_vfn_41();
    /*43*/ virtual void __unk_vfn_43();
    /*44*/ virtual void __unk_vfn_44();
    /*45*/ virtual void __unk_vfn_45();
    /*46*/ virtual void __unk_vfn_46();
    /*47*/ virtual void __unk_vfn_47();
    /*48*/ virtual void __unk_vfn_48();
    /*58*/ virtual void __unk_vfn_58();
    /*59*/ virtual void __unk_vfn_59();
    /*60*/ virtual bool canContainLiquid() const;
    /*72*/ virtual void __unk_vfn_72();
    /*76*/ virtual void setupRedstoneComponent(class BlockSource &, class BlockPos const &) const;
    /*79*/ virtual void __unk_vfn_79();
    /*83*/ virtual bool onFertilized(class BlockSource &, class BlockPos const &, class Actor *, enum FertilizerType) const;
    /*85*/ virtual bool canBeFertilized(class BlockSource &, class BlockPos const &, class Block const &) const;
    /*88*/ virtual bool mayPlace(class BlockSource &, class BlockPos const &, unsigned char) const;
    /*89*/ virtual bool mayPlace(class BlockSource &, class BlockPos const &) const;
    /*95*/ virtual bool playerWillDestroy(class Player &, class BlockPos const &, class Block const &) const;
    /*98*/ virtual bool getSecondPart(class BlockSource const &, class BlockPos const &, class BlockPos &) const;
    /*99*/ virtual int getResourceCount(class Randomize &, class Block const &, int) const;
    /*100*/ virtual class ItemInstance getResourceItem(class Randomize &, class Block const &, int) const;
    /*101*/ virtual class ItemInstance asItemInstance(class BlockSource &, class BlockPos const &, class Block const &) const;
    /*102*/ virtual void spawnResources(class BlockSource &, class BlockPos const &, class Block const &, class Randomize &, std::vector<class Item const *> *, float, int) const;
    /*104*/ virtual void __unk_vfn_104();
    /*115*/ virtual bool canBeBuiltOver(class BlockSource &, class BlockPos const &) const;
    /*124*/ virtual void __unk_vfn_124();
    /*126*/ virtual void __unk_vfn_126();
    /*127*/ virtual void __unk_vfn_127();
    /*132*/ virtual void __unk_vfn_132();
    /*134*/ virtual std::string buildDescriptionId(class Block const &) const;
    /*135*/ virtual bool isAuxValueRelevantForPicking() const;
    /*137*/ virtual int getColor(class BlockSource &, class BlockPos const &, class Block const &) const;
    /*139*/ virtual int getColorForParticle(class BlockSource &, class BlockPos const &, class Block const &) const;
    /*144*/ virtual class AABB const & getVisualShape(class Block const &, class AABB &, bool) const;
    /*147*/ virtual int getVariant(class Block const &) const;
    /*148*/ virtual void __unk_vfn_148();
    /*165*/ virtual void __unk_vfn_165();
    /*179*/ virtual void __unk_vfn_179();
    /*180*/ virtual void __unk_vfn_180();
    /*181*/ virtual void onPlace(class BlockSource &, class BlockPos const &) const;
    /*183*/ virtual void playerDestroy(class Player &, class BlockPos const &, class Block const &) const;
    /*184*/ virtual void tick(class BlockSource &, class BlockPos const &, class Random &) const;
    /*187*/ virtual void __unk_vfn_187();
    /*190*/ virtual bool canSurvive(class BlockSource &, class BlockPos const &) const;
    /*191*/ virtual enum BlockRenderLayer getRenderLayer() const;
    /*192*/ virtual enum BlockRenderLayer getRenderLayer(class Block const &, class BlockSource &, class BlockPos const &) const;
    /*199*/ virtual void __unk_vfn_199();
    /*203*/ virtual void checkAlive(class BlockSource &, class BlockPos const &) const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_DOUBLEPLANTBLOCK
public:
    MCVAPI bool canBeSilkTouched() const;
#endif
    MCAPI DoublePlantBlock(std::string const &, int);
    MCAPI int getType(class BlockSource &, class BlockPos const &, class Block const &) const;
    MCAPI bool placeAt(class BlockSource &, class BlockPos const &, enum DoublePlantType, int, class Actor *) const;



};