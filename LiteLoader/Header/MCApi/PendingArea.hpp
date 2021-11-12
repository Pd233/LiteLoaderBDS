// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
class PendingArea {

public:
    MCAPI bool isEntityOwned() const;
    MCAPI struct PendingArea& operator=(struct PendingArea&&);
    MCAPI class CompoundTag serialize(class AutomaticID<class Dimension, int>) const;

    MCAPI static struct PendingArea createEntityTickingArea(class mce::UUID, struct ActorUniqueID, struct Bounds const&, bool, float);
    MCAPI static struct PendingArea createTickingArea(class mce::UUID, std::string const&, struct Bounds const&, bool);
    MCAPI static struct PendingArea load(std::string const&, class CompoundTag const&);
    MCAPI static bool validTag(class CompoundTag const&);
};