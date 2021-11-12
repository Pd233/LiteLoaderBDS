// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
class FullPlayerInventoryWrapper {

public:
    MCAPI int clearAllItems();
    MCAPI int getItemCount(class std::function<bool(class ItemStack const&)>);
    MCAPI int removeResource(class ItemStack const&, class std::function<bool(class ItemStack const&)>, bool, int);

private:
    MCAPI int _clearSimpleContainerItem(class SimpleContainer&, enum ContainerID, int);
    MCAPI int _getSimpleContainerItemCount(class SimpleContainer&, int, class std::function<bool(class ItemStack const&)>);
    MCAPI int _removeCursorItem(class ItemStack const&, bool, int);
    MCAPI int _removeSimpleContainerItem(class SimpleContainer&, enum ContainerID, int, class ItemStack const&, bool, int);
    MCAPI void _sendCursorSlotPacket() const;
};