// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class BreakDoorAnnotationSystem {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BREAKDOORANNOTATIONSYSTEM
public:
    class BreakDoorAnnotationSystem& operator=(class BreakDoorAnnotationSystem const &) = delete;
    BreakDoorAnnotationSystem(class BreakDoorAnnotationSystem const &) = delete;
    BreakDoorAnnotationSystem() = delete;
#endif

public:
    /*0*/ virtual ~BreakDoorAnnotationSystem();
    /*1*/ virtual void __unk_vfn_1();
    /*2*/ virtual void tick(class EntityRegistry &);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_BREAKDOORANNOTATIONSYSTEM
#endif

protected:

private:

};