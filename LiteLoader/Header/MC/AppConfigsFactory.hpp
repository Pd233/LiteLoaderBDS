// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class AppConfigsFactory {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_APPCONFIGSFACTORY
public:
    class AppConfigsFactory& operator=(class AppConfigsFactory const &) = delete;
    AppConfigsFactory(class AppConfigsFactory const &) = delete;
    AppConfigsFactory() = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_APPCONFIGSFACTORY
#endif
    MCAPI static std::unique_ptr<class AppConfigs> createAppConfigs();

protected:

private:

};