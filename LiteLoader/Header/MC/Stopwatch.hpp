// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class Stopwatch {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_STOPWATCH
public:
    class Stopwatch& operator=(class Stopwatch const &) = delete;
    Stopwatch(class Stopwatch const &) = delete;
#endif

public:
    /*0*/ virtual ~Stopwatch();
    /*1*/ virtual double stop();
    /*2*/ virtual double stopContinue();
    /*3*/ virtual void print(std::string const &);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_STOPWATCH
#endif
    MCAPI Stopwatch();
    MCAPI void reset();
    MCAPI void start();

protected:

private:

};