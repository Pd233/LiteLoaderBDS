// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class ServerLocator {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SERVERLOCATOR
public:
    class ServerLocator& operator=(class ServerLocator const &) = delete;
    ServerLocator(class ServerLocator const &) = delete;
    ServerLocator() = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_SERVERLOCATOR
    MCVAPI void _onDisable();
    MCVAPI void _onEnable();
#endif

protected:

private:

};