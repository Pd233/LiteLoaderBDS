// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
namespace BlockSerializationUtils {

MCAPI void clearNBTToBlockCache();
MCAPI struct std::pair<enum BlockSerializationUtils::NBTState, class Block const*> tryGetBlockFromNBT(class CompoundTag const&, struct BlockSerializationUtils::NbtToBlockCache*);

} // namespace BlockSerializationUtils