// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
class AttackDamageMobEffect : public MobEffect {
public:
    virtual ~AttackDamageMobEffect();
    virtual void unk_vfn_4();
    virtual float getAttributeModifierValue(int, class AttributeModifier const&);

public:
    MCAPI static int getDamageAfterDamageBoost(int, int);
    MCAPI static int getDamageAfterWeakness(int, int);
};