// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
class DespawnComponent {

public:
    MCAPI void onDespawn(class Actor&);
    MCAPI void tick(class Actor&);

private:
    MCAPI bool _tryStandardDespawnRules(class Actor&) const;
    MCAPI class DespawnDefinition const& getDefinition(class Actor&) const;
};