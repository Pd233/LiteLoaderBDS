// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
class Aquifer {

public:
    MCAPI void computeAt(class BlockPos const&);
    MCAPI float getLastBarrier() const;
    MCAPI class Block const* getLastFluidBlockType(bool) const;
    MCAPI int getLastFluidLevel() const;
    MCAPI bool isInLavaZone(int);
    MCAPI bool isInOperatingZone(int);
    MCAPI bool shouldScheduleFluidUpdate() const;

private:
    MCAPI struct Aquifer::FluidSample _getOrComputeNewFluidSample(class BlockPos const&);
};