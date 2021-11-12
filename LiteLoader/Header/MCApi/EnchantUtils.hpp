// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
class EnchantUtils {

public:
    MCAPI static int const MAX_EXP_REPAIR_COST;
    MCAPI static int const PROTECTIONFACTOR_PRIMARYCAP;
    MCAPI static int const PROTECTIONFACTOR_SECONDARYCAP;
    MCAPI static void appendEnchantToFormattedText(enum Enchant::Type, class gsl::basic_string_span<char const, -1>, std::string&);
    MCAPI static int applyEnchant(class ItemStackBase&, class ItemEnchants const&, bool);
    MCAPI static bool applyEnchant(class ItemStackBase&, class EnchantmentInstance const&, bool);
    MCAPI static bool applyEnchant(class ItemStackBase&, enum Enchant::Type, int, bool);
    MCAPI static struct EnchantResult canEnchant(class ItemStackBase const&, class EnchantmentInstance const&, bool);
    MCAPI static struct EnchantResult canEnchant(class ItemStackBase const&, enum Enchant::Type, int, bool);
    MCAPI static int combineEnchantedItems(class ItemStack const&, class ItemStack const&, class ItemStack&, bool);
    MCAPI static int determineActivation(enum Enchant::Type);
    MCAPI static void doPostDamageEffects(class Actor&, class Actor&);
    MCAPI static void doPostHurtEffects(class Mob&, class Mob&);
    MCAPI static class ItemInstance generateEnchantedBook(class EnchantmentInstance const&);
    MCAPI static std::vector<struct std::pair<class EnchantmentInstance, int>> getAvailableEnchantmentResults(class Item const*, int, bool);
    MCAPI static int getBestEnchantLevel(enum Enchant::Type, class Mob const&, enum EquipmentFilter);
    MCAPI static std::vector<class Vec3> getBookCasePositions(class BlockSource&, class Vec3 const&);
    MCAPI static void getCurses(class ItemStackBase const&, std::vector<class EnchantmentInstance>&);
    MCAPI static float getDamageReduction(class ActorDamageSource const&, class Mob const&);
    MCAPI static std::vector<int> getEnchantCosts(class ItemStackBase const&, int);
    MCAPI static int getEnchantLevel(enum Enchant::Type, class ItemStackBase const&);
    MCAPI static std::string getEnchantNameAndLevel(enum Enchant::Type, int);
    MCAPI static std::vector<class Vec3> getEnchantingTablePositions(class BlockSource&, class Vec3 const&);
    MCAPI static enum Enchant::Type getEnchantmentId(class HashedString const&);
    MCAPI static std::vector<int> getLegalEnchants(class Item const*);
    MCAPI static int getLootableRandomEnchantIndex(class Random&);
    MCAPI static int getMeleeDamageBonus(class Actor const&, class Actor&);
    MCAPI static class ItemStack const& getRandomDamagedItemWithMending(class Mob const&);
    MCAPI static class ItemStack const& getRandomItemWith(enum Enchant::Type, class Mob const&, enum EquipmentFilter);
    MCAPI static std::string getRandomName();
    MCAPI static int getTotalProtectionLevels(enum Enchant::Type, class Mob const&);
    MCAPI static bool hasCurse(class ItemStackBase const&);
    MCAPI static bool hasEnchant(enum Enchant::Type, class ItemStackBase const&);
    MCAPI static void randomlyEnchant(class ItemInstance&, int, int, bool);
    MCAPI static void randomlyEnchant(class ItemStack&, int, int, bool);
    MCAPI static void removeEnchants(class ItemStack&);
    MCAPI static class ItemEnchants selectEnchantments(class Item const*, int, int, bool);

private:
    MCAPI static void _convertBookCheck(class ItemStackBase&);
    MCAPI static std::vector<std::string> mEnchantmentNames;
};