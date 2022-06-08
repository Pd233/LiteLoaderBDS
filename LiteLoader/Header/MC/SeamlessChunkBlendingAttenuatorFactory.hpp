// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class SeamlessChunkBlendingAttenuatorFactory {

#define AFTER_EXTRA

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SEAMLESSCHUNKBLENDINGATTENUATORFACTORY
public:
    class SeamlessChunkBlendingAttenuatorFactory& operator=(class SeamlessChunkBlendingAttenuatorFactory const &) = delete;
    SeamlessChunkBlendingAttenuatorFactory(class SeamlessChunkBlendingAttenuatorFactory const &) = delete;
    SeamlessChunkBlendingAttenuatorFactory() = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_SEAMLESSCHUNKBLENDINGATTENUATORFACTORY
#endif
    MCAPI class SeamlessChunkBlendingAttenuator getOrCreateAttenuator(class ChunkPos const &);

protected:

private:
    MCAPI class SeamlessChunkBlendingAttenuator _createChunkBlendingAttenuator(class ChunkPos const &) const;
    MCAPI std::vector<class std::array<struct SeamlessChunkBlendingAttenuatorUtil::AttenuationData, 4>> _finalizeChunkAttenuationData(std::vector<class std::array<struct SeamlessChunkBlendingAttenuatorFactory::IntermediateAttenuationData, 4>> const &) const;
    MCAPI void _updateIntermediateAttenuationData(std::vector<class std::array<struct SeamlessChunkBlendingAttenuatorFactory::IntermediateAttenuationData, 4>> &, class ChunkPos const &, class ChunkPos const &, class BlendingData const &, bool) const;

};