// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
class BasaltColumnsFeature : public Feature {
public:
    virtual ~BasaltColumnsFeature();
    virtual void unk_vfn_2();
    virtual bool place(class BlockSource&, class BlockPos const&, class Random&);

private:
    MCAPI bool _placeColumnCluster(class BlockSource&, class BlockPos, int, int) const;
};