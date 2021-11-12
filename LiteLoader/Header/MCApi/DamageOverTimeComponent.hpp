// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
class DamageOverTimeComponent {

public:
    MCAPI void addAdditionalSaveData(class CompoundTag&) const;
    MCAPI int getDamageTime() const;
    MCAPI int getDamageTimeInterval() const;
    MCAPI int getHurtValue() const;
    MCAPI void readAdditionalSaveData(class Actor&, class CompoundTag const&, class DataLoadHelper&);
    MCAPI void setDamageTime(int);
};