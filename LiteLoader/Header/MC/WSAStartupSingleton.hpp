// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class WSAStartupSingleton {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_WSASTARTUPSINGLETON
public:
    class WSAStartupSingleton& operator=(class WSAStartupSingleton const &) = delete;
    WSAStartupSingleton(class WSAStartupSingleton const &) = delete;
    WSAStartupSingleton() = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_WSASTARTUPSINGLETON
public:
#endif
    MCAPI static void AddRef();
    MCAPI static void Deref();

//protected:
    MCAPI static int refCount;


};