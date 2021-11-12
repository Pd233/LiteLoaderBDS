// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
class WeepingVinesClusterFeature : public Feature {
public:
    virtual ~WeepingVinesClusterFeature();
    virtual void unk_vfn_2();
    virtual bool place(class BlockSource&, class BlockPos const&, class Random&);

private:
    MCAPI bool _isInvalidPlacementLocation(class BlockSource&, class BlockPos const&) const;
    MCAPI void _placeRoofNetherWart(class BlockSource&, class BlockPos const&, class Random&) const;
    MCAPI void _placeRoofWeepingVines(class BlockSource&, class BlockPos const&, class Random&) const;
};