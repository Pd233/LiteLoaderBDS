// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Social.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class LevelSettings {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_LEVELSETTINGS
public:
    class LevelSettings& operator=(class LevelSettings const &) = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_LEVELSETTINGS
public:
#endif
    MCAPI LevelSettings(class LevelSettings const &);
    MCAPI LevelSettings(class LevelSettings &&);
    MCAPI LevelSettings(class LevelData const &, class AutomaticID<class Dimension, int>);
    MCAPI LevelSettings();
    MCAPI bool achievementsWillBeDisabledOnLoad() const;
    MCAPI bool educationFeaturesEnabled() const;
    MCAPI std::string const & educationProductID() const;
    MCAPI bool forceGameType() const;
    MCAPI class BaseGameVersion const & getBaseGameVersion() const;
    MCAPI std::string const & getBiomeOverride() const;
    MCAPI class Abilities getDefaultAbilities() const;
    MCAPI class BlockPos const & getDefaultSpawn() const;
    MCAPI struct EduSharedUriResource const & getEduSharedUriResource() const;
    MCAPI enum EducationEditionOffer getEducationEditionOffer() const;
    MCAPI class std::optional<struct EducationLevelSettings> const & getEducationLevelSettings() const;
    MCAPI class Experiments const & getExperiments() const;
    MCAPI enum Difficulty getGameDifficulty() const;
    MCAPI class GameRules const & getGameRules() const;
    MCAPI enum GameType getGameType() const;
    MCAPI enum GeneratorType getGenerator() const;
    MCAPI bool getImmutableWorld() const;
    MCAPI bool getLanBroadcastIntent() const;
    MCAPI float getLightningLevel() const;
    MCAPI int getLimitedWorldDepth() const;
    MCAPI int getLimitedWorldWidth() const;
    MCAPI bool getMultiplayerGameIntent() const;
    MCAPI enum NetherWorldType getNetherType() const;
    MCAPI bool getOnlySpawnV1Villagers() const;
    MCAPI enum Social::GamePublishSetting getPlatformBroadcastIntent() const;
    MCAPI float getRainLevel() const;
    MCAPI class LevelSeed64 getSeed() const;
    MCAPI unsigned int getServerChunkTickRange() const;
    MCAPI struct SpawnSettings getSpawnSettings() const;
    MCAPI int getTime() const;
    MCAPI enum WorldVersion getWorldVersion() const;
    MCAPI enum Social::GamePublishSetting getXBLBroadcastIntent() const;
    MCAPI bool hasAchievementsDisabled() const;
    MCAPI bool hasBonusChestEnabled() const;
    MCAPI bool hasCommandsEnabled() const;
    MCAPI bool hasConfirmedPlatformLockedContent() const;
    MCAPI bool hasLockedBehaviorPack() const;
    MCAPI bool hasLockedResourcePack() const;
    MCAPI bool hasStartWithMapEnabled() const;
    MCAPI bool isFromLockedTemplate() const;
    MCAPI bool isFromWorldTemplate() const;
    MCAPI bool isTexturepacksRequired() const;
    MCAPI bool isWorldTemplateOptionLocked() const;
    MCAPI class LevelSettings & operator=(class LevelSettings &&);
    MCAPI void overrideSavedSettings(class LevelData &) const;
    MCAPI class LevelSettings & setBaseGameVersion(class BaseGameVersion const &);
    MCAPI class LevelSettings & setCommandsEnabled(bool);
    MCAPI class LevelSettings & setDefaultAbilities(class Abilities);
    MCAPI class LevelSettings & setDifficulty(enum Difficulty);
    MCAPI class LevelSettings & setEduSharedUriResource(struct EduSharedUriResource const &);
    MCAPI class LevelSettings & setEducationFeaturesEnabled(bool);
    MCAPI class LevelSettings & setEducationProductID(std::string);
    MCAPI class LevelSettings & setForceGameType(bool);
    MCAPI class LevelSettings & setGameRules(class GameRules);
    MCAPI class LevelSettings & setGameType(enum GameType);
    MCAPI class LevelSettings & setGeneratorType(enum GeneratorType);
    MCAPI void setOnlySpawnV1Villagers(bool);
    MCAPI class LevelSettings & setOverrideSavedSettings(bool);
    MCAPI class LevelSettings & setPlatformBroadcastIntent(enum Social::GamePublishSetting);
    MCAPI class LevelSettings & setRandomSeed(class LevelSeed64);
    MCAPI class LevelSettings & setServerChunkTickRange(unsigned int);
    MCAPI class LevelSettings & setSpawnSettings(struct SpawnSettings);
    MCAPI class LevelSettings & setTexturePackRequired(bool);
    MCAPI class LevelSettings & setUseMsaGamertagsOnly(bool);
    MCAPI class LevelSettings & setXblBroadcastIntent(enum Social::GamePublishSetting);
    MCAPI bool shouldOverrideSavedSettings() const;
    MCAPI bool useMsaGamertagsOnly() const;
    MCAPI ~LevelSettings();
    MCAPI static class std::optional<class LevelSeed64> parseSeedString(std::string const &);



};