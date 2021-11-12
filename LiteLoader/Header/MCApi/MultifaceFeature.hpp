// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
class MultifaceFeature {
public:
    virtual ~MultifaceFeature();
    virtual class std::optional<class BlockPos> place(class IBlockWorldGenAPI&, class BlockPos const&, class Random&, class RenderParams&);
    virtual void unk_vfn_2();

private:
    MCAPI class std::optional<class BlockPos> _placeBlockIfPossible(class BlockSource&, class BlockPos const&, class Random&, std::vector<unsigned char> const&) const;

    MCAPI static std::vector<unsigned char> _getShuffledDirections(std::vector<unsigned char>);
    MCAPI static std::vector<unsigned char> _getShuffledDirectionsExcept(unsigned char, std::vector<unsigned char> const&);
};