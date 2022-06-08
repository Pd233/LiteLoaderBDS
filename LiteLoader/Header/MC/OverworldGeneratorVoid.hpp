// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class OverworldGeneratorVoid {

#define AFTER_EXTRA

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_OVERWORLDGENERATORVOID
public:
    class OverworldGeneratorVoid& operator=(class OverworldGeneratorVoid const &) = delete;
    OverworldGeneratorVoid(class OverworldGeneratorVoid const &) = delete;
    OverworldGeneratorVoid() = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_OVERWORLDGENERATORVOID
    MCVAPI void _prepareHeights(class BlockVolume &, class ChunkPos const &, class WorldGenCache const &, class Aquifer *, class std::function<void (class BlockPos const &, class Block const &, int)> &&, bool, std::vector<short> *, int);
    MCVAPI void decorateWorldGenPostProcess(class Biome &, class LevelChunk &, class BlockSource &, class Random &) const;
    MCVAPI class BlockPos findSpawnPosition() const;
    MCVAPI class Util::MultidimensionalArray<float, 5, 5, 41> generateDensityCellsForChunk(class ChunkPos const &) const;
    MCVAPI class BiomeSource const & getBiomeSource() const;
    MCVAPI int getLevelGenHeight() const;
    MCVAPI std::unique_ptr<class PerlinSimplexNoise> const & getMaterialAdjNoise() const;
    MCVAPI class PerlinSimplexNoise const & getSurfaceNoise();
    MCVAPI class std::optional<class XoroshiroPositionalRandomFactory> getXoroshiroPositionalRandomFactory() const;
    MCVAPI void loadChunk(class LevelChunk &, bool);
#endif
    MCAPI OverworldGeneratorVoid(class Dimension &, unsigned int);

protected:

private:

};