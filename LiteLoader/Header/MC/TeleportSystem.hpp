// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class TeleportSystem {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_TELEPORTSYSTEM
public:
    class TeleportSystem& operator=(class TeleportSystem const &) = delete;
    TeleportSystem(class TeleportSystem const &) = delete;
    TeleportSystem() = delete;
#endif

public:
    /*0*/ virtual ~TeleportSystem();
    /*1*/ virtual void __unk_vfn_1();
    /*2*/ virtual void tick(class EntityRegistry &);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_TELEPORTSYSTEM
#endif

protected:

private:

};