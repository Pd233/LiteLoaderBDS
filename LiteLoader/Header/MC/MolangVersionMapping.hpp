// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class MolangVersionMapping {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_MOLANGVERSIONMAPPING
public:
    class MolangVersionMapping& operator=(class MolangVersionMapping const &) = delete;
    MolangVersionMapping(class MolangVersionMapping const &) = delete;
    MolangVersionMapping() = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_MOLANGVERSIONMAPPING
public:
#endif
    MCAPI static enum MolangVersion const getVersion(class SemVersion const &);



};