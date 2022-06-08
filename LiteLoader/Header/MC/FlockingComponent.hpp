// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class FlockingComponent {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_FLOCKINGCOMPONENT
public:
    class FlockingComponent& operator=(class FlockingComponent const &) = delete;
    FlockingComponent(class FlockingComponent const &) = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_FLOCKINGCOMPONENT
#endif
    MCAPI FlockingComponent(class FlockingComponent &&);
    MCAPI FlockingComponent();
    MCAPI void addFlockMember(struct ActorUniqueID);
    MCAPI void breakFlock(class Actor const &);
    MCAPI void calculateFlockVector(class Actor const &);
    MCAPI void calculateGoalHeading(class Mob &);
    MCAPI bool canJoinFlock(class Actor &) const;
    MCAPI void joinFlock(class Actor &);
    MCAPI void manageNeighborhood(class Actor &);
    MCAPI void mergeNeighborhoods(class Actor &);
    MCAPI class FlockingComponent & operator=(class FlockingComponent &&);
    MCAPI void updateNeighborhoodData(class Actor const &);
    MCAPI bool validateVariantEntityTypes(class Actor const &, class Actor const &) const;

protected:

private:

};