// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
class PlayerUIContainer : public SimpleContainer {
public:
    virtual ~PlayerUIContainer();
    virtual void init();
    virtual void unk_vfn_14();
    virtual int getMaxStackSize();
    virtual void startOpen(class Player&);
    virtual void stopOpen(class Player&);
    virtual void unk_vfn_22();
    virtual void unk_vfn_23();
    virtual void unk_vfn_31();

public:
    MCAPI void load(class ListTag const&, class SemVersion const&);
    MCAPI std::unique_ptr<class ListTag> save();
};