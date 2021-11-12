// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
class ItemStackBase {
public:
    virtual ~ItemStackBase();
    virtual void reinit(class gsl::basic_string_span<char const, -1>, int, int);
    virtual void reinit(class BlockLegacy const&, int);
    virtual void reinit(class Item const&, int, int);
    virtual void setNull();
    virtual std::string toString();
    virtual std::string toDebugString();

public:
    MCAPI void add(int);
    MCAPI bool addComponents(class Json::Value const&, std::string&);
    MCAPI bool operator!=(class ItemStackBase const&);
    MCAPI bool operator==(class ItemStackBase const&);
    MCAPI bool canDestroy(class Block const*) const;
    MCAPI enum ArmorSlot getArmorSlot() const;
    MCAPI class Block const* getBlock() const;
    MCAPI bool operator bool();
    MCAPI void addCustomUserData(class ContainerComponent&);
    MCAPI void addCustomUserData(class BlockActor&, class BlockSource&);
    MCAPI bool canBeCharged() const;
    MCAPI bool canDestroySpecial(class Block const&) const;
    MCAPI bool canPlaceOn(class Block const*) const;
    MCAPI void clearChargedItem();
    MCAPI bool componentsMatch(class ItemStackBase const&) const;
    MCAPI class ItemEnchants constructItemEnchantsFromUserData() const;
    MCAPI void deserializeComponents(class IDataInput&);
    MCAPI int getAttackDamage() const;
    MCAPI short getAuxValue() const;
    MCAPI int getBaseRepairCost() const;
    MCAPI struct Tick const& getBlockingTick() const;
    MCAPI std::string getCategoryName() const;
    MCAPI class ItemInstance const& getChargedItem() const;
    MCAPI class mce::Color getColor() const;
    MCAPI class ComponentItem const* getComponentItem() const;
    MCAPI std::string getCustomName() const;
    MCAPI short getDamageValue() const;
    MCAPI std::string getDescriptionId() const;
    MCAPI class ItemDescriptor getDescriptor() const;
    MCAPI std::string getEffectName() const;
    MCAPI int getEnchantValue() const;
    MCAPI std::string getHoverName() const;
    MCAPI struct TextureUVCoordinateSet const* getIcon(int, bool) const;
    MCAPI short getId() const;
    MCAPI int getIdAux() const;
    MCAPI class Item const* getItem() const;
    MCAPI class WeakPtr<class BlockLegacy> const& getLegacyBlock() const;
    MCAPI short getMaxDamage() const;
    MCAPI unsigned char getMaxStackSize() const;
    MCAPI std::string getName() const;
    MCAPI std::unique_ptr<class CompoundTag> getNetworkUserData() const;
    MCAPI class HashedString const& getRawNameHash() const;
    MCAPI std::string getRawNameId() const;
    MCAPI class BaseGameVersion const& getRequiredBaseGameVersion() const;
    MCAPI enum UseAnimation getUseAnimation() const;
    MCAPI class CompoundTag const* getUserData() const;
    MCAPI class CompoundTag* getUserData();
    MCAPI bool getWasPickedUp() const;
    MCAPI bool hasChargedItem() const;
    MCAPI bool hasCompoundTextUserData() const;
    MCAPI bool hasCustomHoverName() const;
    MCAPI bool hasSameAuxValue(class ItemStackBase const&) const;
    MCAPI bool hasSameUserData(class ItemStackBase const&) const;
    MCAPI bool hasTag(unsigned __int64 const&) const;
    MCAPI bool hasTag(class HashedString const&) const;
    MCAPI bool hasUserData() const;
    MCAPI bool hurtAndBreak(int, class Actor*);
    MCAPI void initParams(class RenderParams&, class Actor*);
    MCAPI bool isArmorItem() const;
    MCAPI bool isBlock() const;
    MCAPI bool isDamageableItem() const;
    MCAPI bool isDamaged() const;
    MCAPI bool isEnchanted() const;
    MCAPI bool isEnchantingBook() const;
    MCAPI bool isExplodable() const;
    MCAPI bool isFireResistant() const;
    MCAPI bool isFullStack() const;
    MCAPI bool isGlint() const;
    MCAPI bool isHorseArmorItem() const;
    MCAPI bool isInstance(class BlockLegacy const&) const;
    MCAPI bool isInstance(class HashedString const&, bool) const;
    MCAPI bool isLiquidClipItem() const;
    MCAPI bool isMusicDiscItem() const;
    MCAPI bool isNull() const;
    MCAPI bool isOffhandItem() const;
    MCAPI bool isOneOfInstances(std::vector<class HashedString>, bool) const;
    MCAPI bool isPattern() const;
    MCAPI bool isPotionItem() const;
    MCAPI bool isStackable(class ItemStackBase const&) const;
    MCAPI bool isStackedByData() const;
    MCAPI bool isValidAuxValue(int) const;
    MCAPI bool isWearableItem() const;
    MCAPI void load(class CompoundTag const&);
    MCAPI void load(class CompoundTag const&, class Level&);
    MCAPI bool matches(class ItemStackBase const&) const;
    MCAPI bool matchesEitherWearableCase(class CompoundTag const*) const;
    MCAPI bool matchesItem(class ItemStackBase const&) const;
    MCAPI void refreshedInContainer(class Level&) const;
    MCAPI void remove(int);
    MCAPI void resetHoverName();
    MCAPI bool sameItem(int, int) const;
    MCAPI bool sameItem(class ItemStackBase const&) const;
    MCAPI bool sameItemAndAux(class ItemStackBase const&) const;
    MCAPI std::unique_ptr<class CompoundTag> save() const;
    MCAPI void saveEnchantsToUserData(class ItemEnchants const&);
    MCAPI void sendItemDefinitionEventTriggered(std::string const&);
    MCAPI void serializeComponents(class IDataOutput&) const;
    MCAPI void set(int);
    MCAPI void setAuxValue(short);
    MCAPI void setBlock(class Block const*);
    MCAPI void setBlockingTick(struct Tick);
    MCAPI void setChargedItem(class ItemInstance const&, bool);
    MCAPI void setCustomLore(std::vector<std::string> const&);
    MCAPI void setCustomName(std::string const&);
    MCAPI void setDamageValue(short);
    MCAPI void setJustBrewed(bool);
    MCAPI void setPickupTime();
    MCAPI void setRepairCost(int);
    MCAPI void setUserData(std::unique_ptr<class CompoundTag>);
    MCAPI void setWasPickedUp(bool);
    MCAPI bool shouldInteractionWithBlockBypassLiquid(class Block const&) const;
    MCAPI bool shouldVanish() const;
    MCAPI void startCoolDown(class Player*) const;
    MCAPI bool updateComponent(std::string const&, class Json::Value const&);

    MCAPI static std::string const TAG_CAN_DESTROY;
    MCAPI static std::string const TAG_CAN_PLACE_ON;
    MCAPI static std::string const TAG_DISPLAY;
    MCAPI static std::string const TAG_DISPLAY_NAME;
    MCAPI static std::string const TAG_ENCHANTS;
    MCAPI static std::string const TAG_LORE;
    MCAPI static std::string const TAG_REPAIR_COST;
    MCAPI static bool isValidComponent(std::string const&);

private:
    MCAPI void _addCustomUserDataCommon(std::unique_ptr<class CompoundTag>&&);
    MCAPI void _checkForItemWorldCompatibility();
    MCAPI void _loadComponents(class CompoundTag const&);
    MCAPI void _loadItem(class CompoundTag const&);
    MCAPI void _setChargedItem(class ItemInstance const&);
    MCAPI void _updateCompareHashes();

    MCAPI static int const MAX_STACK_SIZE;

protected:
    MCAPI std::string _getHoverFormattingPrefix() const;
    MCAPI bool _setItem(int, bool);
    MCAPI void init(class BlockLegacy const&, int);
    MCAPI void init(class Item const&, int, int, class CompoundTag const*, bool);
    MCAPI void init(int, int, int, bool);
    MCAPI class ItemStackBase& operator=(class ItemStackBase const&);

    MCAPI static std::string const TAG_CHARGED_ITEM;
    MCAPI static std::string const TAG_STORE_CAN_DESTROY;
    MCAPI static std::string const TAG_STORE_CAN_PLACE_ON;
};