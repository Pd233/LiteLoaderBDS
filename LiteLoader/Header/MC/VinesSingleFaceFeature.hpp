// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART
#include "Extra/VinesSingleFaceFeatureAPI.hpp"
#undef EXTRA_INCLUDE_PART
class VinesSingleFaceFeature {
#include "Extra/VinesSingleFaceFeatureAPI.hpp"
public:
    virtual ~VinesSingleFaceFeature();
    virtual class std::optional<class BlockPos> place(class IBlockWorldGenAPI&, class BlockPos const&, class Random&, class RenderParams&);
    virtual void unk_vfn_2();
};