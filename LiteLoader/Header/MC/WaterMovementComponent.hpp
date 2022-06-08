// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class WaterMovementComponent {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_WATERMOVEMENTCOMPONENT
public:
    class WaterMovementComponent& operator=(class WaterMovementComponent const &) = delete;
    WaterMovementComponent(class WaterMovementComponent const &) = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_WATERMOVEMENTCOMPONENT
public:
#endif
    MCAPI WaterMovementComponent();
    MCAPI float getDragFactor() const;
    MCAPI void initFromDefinition(class Actor &);
    MCAPI static float getDefaultDragFactor();



};