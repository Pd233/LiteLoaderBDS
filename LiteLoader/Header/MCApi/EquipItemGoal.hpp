// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
class EquipItemGoal {
public:
    virtual ~EquipItemGoal();
    virtual bool canUse();
    virtual void unk_vfn_2();
    virtual void unk_vfn_3();
    virtual void unk_vfn_4();
    virtual void unk_vfn_5();
    virtual void tick();
    virtual void appendDebugInfo(std::string&);
    virtual void unk_vfn_8();
    virtual void unk_vfn_9();

private:
    MCAPI void _dropItem(class ItemStack const&) const;
};