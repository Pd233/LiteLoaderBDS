// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
class OreFeature {
public:
    virtual ~OreFeature();
    virtual class std::optional<class BlockPos> place(class IBlockWorldGenAPI&, class BlockPos const&, class Random&, class RenderParams&);
    virtual void unk_vfn_2();

private:
    MCAPI class std::optional<class BlockPos> _legacyPlace(class IBlockWorldGenAPI&, class BlockPos const&, class Random&) const;
    MCAPI class std::optional<class BlockPos> _place(class IBlockWorldGenAPI&, class BlockPos const&, class Random&) const;
};