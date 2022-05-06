// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Json.hpp"
#include "Potion.hpp"
#include "PotionItem.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class SplashPotionItem : public PotionItem {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SPLASHPOTIONITEM
public:
    class SplashPotionItem& operator=(class SplashPotionItem const &) = delete;
    SplashPotionItem(class SplashPotionItem const &) = delete;
    SplashPotionItem() = delete;
#endif

public:
    /*0*/ virtual ~SplashPotionItem();
    /*2*/ virtual void tearDown();
    /*3*/ virtual int getMaxUseDuration(class ItemStack const *) const;
    /*4*/ virtual void __unk_vfn_4();
    /*5*/ virtual void __unk_vfn_5();
    /*6*/ virtual void executeEvent(class ItemStackBase &, std::string const &, class RenderParams &) const;
    /*7*/ virtual void __unk_vfn_7();
    /*8*/ virtual bool isArmor() const;
    /*9*/ virtual bool isBlockPlanterItem() const;
    /*10*/ virtual void __unk_vfn_10();
    /*12*/ virtual void __unk_vfn_12();
    /*14*/ virtual bool isDyeable() const;
    /*15*/ virtual bool isDye() const;
    /*17*/ virtual bool isFertilizer() const;
    /*18*/ virtual bool isFood() const;
    /*19*/ virtual bool isThrowable() const;
    /*20*/ virtual bool isUseable() const;
    /*21*/ virtual class ItemComponent * getComponent(class HashedString const &) const;
    /*24*/ virtual class FuelItemComponent * getFuel() const;
    /*38*/ virtual enum BlockShape getBlockShape() const;
    /*40*/ virtual bool canDestroySpecial(class Block const &) const;
    /*41*/ virtual int getLevelDataForAuxValue(int) const;
    /*43*/ virtual short getMaxDamage() const;
    /*44*/ virtual int getAttackDamage() const;
    /*47*/ virtual void __unk_vfn_47();
    /*48*/ virtual int getPatternIndex() const;
    /*49*/ virtual void __unk_vfn_49();
    /*50*/ virtual bool isWearableThroughLootTable(class CompoundTag const *) const;
    /*51*/ virtual bool canDestroyInCreative() const;
    /*53*/ virtual bool isLiquidClipItem(int) const;
    /*54*/ virtual bool shouldInteractionWithBlockBypassLiquid(class Block const &) const;
    /*55*/ virtual bool requiresInteract() const;
    /*56*/ virtual void appendFormattedHovertext(class ItemStackBase const &, class Level &, std::string &, bool) const;
    /*57*/ virtual bool isValidRepairItem(class ItemStackBase const &, class ItemStackBase const &, class BaseGameVersion const &) const;
    /*58*/ virtual int getEnchantSlot() const;
    /*59*/ virtual int getEnchantValue() const;
    /*60*/ virtual int getArmorValue() const;
    /*61*/ virtual int getToughnessValue() const;
    /*62*/ virtual void __unk_vfn_62();
    /*65*/ virtual void __unk_vfn_65();
    /*66*/ virtual void __unk_vfn_66();
    /*67*/ virtual void __unk_vfn_67();
    /*68*/ virtual void __unk_vfn_68();
    /*69*/ virtual class mce::Color getColor(class CompoundTag const *, class ItemDescriptor const &) const;
    /*70*/ virtual bool hasCustomColor(class CompoundTag const *) const;
    /*71*/ virtual void __unk_vfn_71();
    /*72*/ virtual void clearColor(class ItemStackBase &) const;
    /*73*/ virtual void clearColor(class CompoundTag *) const;
    /*74*/ virtual void setColor(class ItemStackBase &, class mce::Color const &) const;
    /*75*/ virtual void __unk_vfn_75();
    /*76*/ virtual void __unk_vfn_76();
    /*79*/ virtual bool canUseOnSimTick() const;
    /*80*/ virtual class ItemStack & use(class ItemStack &, class Player &) const;
    /*81*/ virtual bool dispense(class BlockSource &, class Container &, int, class Vec3 const &, unsigned char) const;
    /*84*/ virtual float getDestroySpeed(class ItemStackBase const &, class Block const &) const;
    /*86*/ virtual void hitActor(class ItemStack &, class Actor &, class Mob &) const;
    /*87*/ virtual void hitBlock(class ItemStack &, class Block const &, class BlockPos const &, class Mob &) const;
    /*88*/ virtual bool mineBlock(class ItemInstance &, class Block const &, int, int, int, class Actor *) const;
    /*89*/ virtual bool mineBlock(class ItemStack &, class Block const &, int, int, int, class Actor *) const;
    /*90*/ virtual std::string buildDescriptionName(class ItemStackBase const &) const;
    /*91*/ virtual std::string buildDescriptionId(class ItemDescriptor const &, class CompoundTag const *) const;
    /*96*/ virtual unsigned char getMaxStackSize(class ItemDescriptor const &) const;
    /*97*/ virtual bool inventoryTick(class ItemStack &, class Level &, class Actor &, int, bool) const;
    /*98*/ virtual void refreshedInContainer(class ItemStackBase const &, class Level &) const;
    /*102*/ virtual void fixupCommon(class ItemStackBase &, class Level &) const;
    /*105*/ virtual enum InHandUpdateType getInHandUpdateType(class Player const &, class ItemInstance const &, class ItemInstance const &, bool, bool) const;
    /*106*/ virtual enum InHandUpdateType getInHandUpdateType(class Player const &, class ItemStack const &, class ItemStack const &, bool, bool) const;
    /*107*/ virtual bool validFishInteraction(int) const;
    /*110*/ virtual std::string getInteractText(class Player const &) const;
    /*111*/ virtual int getAnimationFrameFor(class Mob *, bool, class ItemStack const *, bool) const;
    /*114*/ virtual struct TextureUVCoordinateSet const & getIcon(class ItemStackBase const &, int, bool) const;
    /*115*/ virtual int getIconYOffset() const;
    /*116*/ virtual class Item & setIcon(std::string const &, int);
    /*119*/ virtual bool canBeCharged() const;
    /*120*/ virtual void playSoundIncrementally(class ItemStack const &, class Mob &) const;
    /*121*/ virtual void __unk_vfn_121();
    /*124*/ virtual std::string getAuxValuesDescription() const;
    /*126*/ virtual bool _calculatePlacePos(class ItemStackBase &, class Actor &, unsigned char &, class BlockPos &) const;
    /*128*/ virtual enum Potion::PotionType getPotionType() const;
    MCAPI SplashPotionItem(std::string const &, int);

protected:

private:

};