// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
class MegaTreeCanopy {
public:
    virtual ~MegaTreeCanopy();
    virtual class std::optional<class BlockPos> placeCanopy(class IBlockWorldGenAPI&, class BlockPos const&, class Random&, class RenderParams&, struct TreeHelper::TreeParams const&, std::vector<class BlockPos> const&);
};