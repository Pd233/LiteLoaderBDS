// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class ConsoleGameTestListener {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CONSOLEGAMETESTLISTENER
public:
    class ConsoleGameTestListener& operator=(class ConsoleGameTestListener const &) = delete;
    ConsoleGameTestListener(class ConsoleGameTestListener const &) = delete;
    ConsoleGameTestListener() = delete;
#endif

public:
    /*0*/ virtual ~ConsoleGameTestListener();
    /*1*/ virtual void onTestStructureLoaded(class gametest::BaseGameTestInstance &);
    /*2*/ virtual void onTestPassed(class gametest::BaseGameTestInstance &);
    /*3*/ virtual void onTestFailed(class gametest::BaseGameTestInstance &);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_CONSOLEGAMETESTLISTENER
#endif

protected:

private:

};