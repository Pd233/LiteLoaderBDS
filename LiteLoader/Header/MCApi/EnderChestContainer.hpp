// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
class EnderChestContainer : public FillingContainer {
public:
    virtual ~EnderChestContainer();
    virtual void init();
    virtual void serverInitItemStackIds(int, int, class std::function<void(int, class ItemStack const&)>);
    virtual void setItem(int, class ItemStack const&);
    virtual void unk_vfn_14();
    virtual void startOpen(class Player&);
    virtual void stopOpen(class Player&);
    virtual void unk_vfn_22();
    virtual void unk_vfn_23();
    virtual void unk_vfn_31();

public:
    MCAPI static int const ITEMS_SIZE;
};