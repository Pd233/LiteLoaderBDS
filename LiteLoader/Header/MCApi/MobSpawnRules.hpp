// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
class MobSpawnRules {

public:
    MCAPI class MobSpawnRules& addHerd(int, int, std::string const&);
    MCAPI class MobSpawnRules& addPermutation(int, int, struct ActorDefinitionIdentifier const&);
    MCAPI bool canSpawnInConditions(class SpawnConditions const&, class BlockSource&) const;
    MCAPI int getAboveBlockDistance() const;
    MCAPI struct std::pair<int, int> const getDelayRange() const;
    MCAPI int getDelaySpawnChance() const;
    MCAPI std::vector<class MobSpawnerPermutation> const& getGuaranteedPermutations() const;
    MCAPI std::vector<struct MobSpawnHerdInfo>& getHerdListMutable();
    MCAPI std::string const getMobToDelayId() const;
    MCAPI std::vector<class MobSpawnerPermutation> const& getPermutations() const;
    MCAPI bool getPersistence() const;
    MCAPI int getPopulationCap(class SpawnConditions const&) const;
    MCAPI class std::unordered_set<class BlockLegacy const*, struct std::hash<class BlockLegacy const*>, struct std::equal_to<class BlockLegacy const*>, class std::allocator<class BlockLegacy const*>> const& getSpawnAboveBlockList() const;
    MCAPI class std::unordered_set<class BlockLegacy const*, struct std::hash<class BlockLegacy const*>, struct std::equal_to<class BlockLegacy const*>, class std::allocator<class BlockLegacy const*>>& getSpawnAboveBlockListMutable();
    MCAPI int getSpawnCount(class SpawnConditions const&, class BlockSource&, class Random&, struct MobSpawnHerdInfo const&) const;
    MCAPI class std::unordered_set<class BlockLegacy const*, struct std::hash<class BlockLegacy const*>, struct std::equal_to<class BlockLegacy const*>, class std::allocator<class BlockLegacy const*>> const& getSpawnOnBlockList() const;
    MCAPI class std::unordered_set<class BlockLegacy const*, struct std::hash<class BlockLegacy const*>, struct std::equal_to<class BlockLegacy const*>, class std::allocator<class BlockLegacy const*>>& getSpawnOnBlockListMutable();
    MCAPI class std::unordered_set<class BlockLegacy const*, struct std::hash<class BlockLegacy const*>, struct std::equal_to<class BlockLegacy const*>, class std::allocator<class BlockLegacy const*>> const& getSpawnOnBlockPreventedList() const;
    MCAPI class std::unordered_set<class BlockLegacy const*, struct std::hash<class BlockLegacy const*>, struct std::equal_to<class BlockLegacy const*>, class std::allocator<class BlockLegacy const*>>& getSpawnOnBlockPreventedListMutable();
    MCAPI bool isLavaSpawner() const;
    MCAPI bool isUnderwaterSpawner() const;
    MCAPI struct MobSpawnHerdInfo const& selectRandomHerd(class Random&) const;
    MCAPI class MobSpawnRules& setAboveBlockDistance(int);
    MCAPI class MobSpawnRules& setBrightnessRange(int, int, bool);
    MCAPI class MobSpawnRules& setBubbleSpawner(bool);
    MCAPI class MobSpawnRules& setDelayRange(int, int, std::string);
    MCAPI class MobSpawnRules& setDelaySpawnChance(int);
    MCAPI class MobSpawnRules& setDifficultyRange(enum Difficulty, enum Difficulty);
    MCAPI class MobSpawnRules& setExperimentalGameplay();
    MCAPI class MobSpawnRules& setHeightRange(int, int);
    MCAPI class MobSpawnRules& setLavaSpawner();
    MCAPI class MobSpawnRules& setMobEventType(std::string const&);
    MCAPI class MobSpawnRules& setPersistence(bool);
    MCAPI class MobSpawnRules& setPlayerInVillageBorderTolerance(unsigned int);
    MCAPI class MobSpawnRules& setPlayerInVillageDistance(unsigned int);
    MCAPI class MobSpawnRules& setPopulationCap(int, int);
    MCAPI class MobSpawnRules& setRarity(int);
    MCAPI class MobSpawnRules& setSpawnDistanceCap(int);
    MCAPI class MobSpawnRules& setSpawnDistances(int, int);
    MCAPI class MobSpawnRules& setSurfaceSpawner();
    MCAPI class MobSpawnRules& setUndergroundSpawner();
    MCAPI class MobSpawnRules& setUnderwaterSpawner();
    MCAPI class MobSpawnRules& setWorldAgeRange(unsigned __int64, unsigned __int64);

    MCAPI static int const LOW_END_MAX_SPAWN_DISTANCE;
    MCAPI static int const MAX_DEFAULT_SPAWN_DISTANCE;
    MCAPI static unsigned __int64 const MAX_WORLD_AGE;
    MCAPI static int const MIN_DEFAULT_SPAWN_DISTANCE;
};