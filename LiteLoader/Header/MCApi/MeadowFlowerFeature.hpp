// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
class MeadowFlowerFeature : public Feature {
public:
    virtual ~MeadowFlowerFeature();
    virtual void unk_vfn_2();
    virtual bool place(class BlockSource&, class BlockPos const&, class Random&);

private:
    MCAPI int getRandomArrayIndex(class BlockPos const&, unsigned __int64, float) const;
};