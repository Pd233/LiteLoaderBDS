// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class ContextMessageLogger {

#define AFTER_EXTRA

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CONTEXTMESSAGELOGGER
public:
    class ContextMessageLogger& operator=(class ContextMessageLogger const &) = delete;
    ContextMessageLogger(class ContextMessageLogger const &) = delete;
    ContextMessageLogger() = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_CONTEXTMESSAGELOGGER
#endif
    MCAPI void log(enum LogArea, enum LogLevel, char const *);
    MCAPI bool shouldMessagePostToParentMessageLoggers();

protected:

private:

};