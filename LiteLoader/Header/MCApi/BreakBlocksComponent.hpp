// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
class BreakBlocksComponent {

public:
    MCAPI void breakNearbyBlocks(class Actor&);
    MCAPI void initFromDefinition(class Actor&);
    MCAPI bool isBreakable(class Actor&, class BlockLegacy const&) const;
};