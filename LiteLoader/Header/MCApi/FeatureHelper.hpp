// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
namespace FeatureHelper {

MCAPI bool isEmptyBlock(class IBlockWorldGenAPI const&, class BlockPos const&);
MCAPI class RenderParams makeFeatureRenderParams(class BlockSource&, class BlockPos const&, class MolangVariableMap&);
MCAPI bool passesAllowList(class Block const&, std::vector<class BlockDescriptor> const&);
MCAPI bool passesAllowList(class IBlockWorldGenAPI const&, class BlockPos const&, std::vector<class BlockDescriptor> const&);
MCAPI class std::optional<class BlockPos> placeBlock(class IBlockWorldGenAPI&, class BlockPos const&, class Block const&);

} // namespace FeatureHelper