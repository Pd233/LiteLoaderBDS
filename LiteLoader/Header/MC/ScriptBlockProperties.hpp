// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class ScriptBlockProperties {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SCRIPTBLOCKPROPERTIES
public:
    class ScriptBlockProperties& operator=(class ScriptBlockProperties const &) = delete;
    ScriptBlockProperties(class ScriptBlockProperties const &) = delete;
    ScriptBlockProperties() = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_SCRIPTBLOCKPROPERTIES
public:
#endif
    MCAPI static class Scripting::ClassBindingBuilder<class ScriptBlockProperties> bind(struct Scripting::Version);



};