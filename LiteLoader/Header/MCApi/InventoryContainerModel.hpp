// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
class InventoryContainerModel : public ContainerModel {
public:
    virtual void containerContentChanged(int);
    virtual ~InventoryContainerModel();
    virtual void postInit();
    virtual void releaseResources();
    virtual void unk_vfn_6();
    virtual class ContainerWeakRef getContainerWeakRef();
    virtual void unk_vfn_9();
    virtual void unk_vfn_11();
    virtual void unk_vfn_12();
    virtual bool isValid();
    virtual void unk_vfn_15();
    virtual void unk_vfn_16();
    virtual void unk_vfn_17();
    virtual void unk_vfn_18();
    virtual void unk_vfn_19();
    virtual class Container* _getContainer();
    virtual int _getContainerOffset();
    virtual void _onItemChanged(int, class ItemStack const&, class ItemStack const&);

private:
    MCAPI void _refreshSlot(int);
};