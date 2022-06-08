// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "ConsumerComponent.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class PistonConsumer : public ConsumerComponent {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_PISTONCONSUMER
public:
    class PistonConsumer& operator=(class PistonConsumer const &) = delete;
    PistonConsumer(class PistonConsumer const &) = delete;
#endif

public:
    /*0*/ virtual ~PistonConsumer();
    /*6*/ virtual bool canConsumePowerAnyDirection() const;
    /*11*/ virtual bool addSource(class CircuitSceneGraph &, class CircuitTrackingInfo const &, int &, bool &);
    /*12*/ virtual bool allowConnection(class CircuitSceneGraph &, class CircuitTrackingInfo const &, bool &);
    /*17*/ virtual void __unk_vfn_17();
    /*20*/ virtual void __unk_vfn_20();
    /*22*/ virtual enum CircuitComponentType getCircuitComponentType() const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_PISTONCONSUMER
public:
#endif
    MCAPI PistonConsumer();
    MCAPI void setBlockPowerFace(unsigned char);



};