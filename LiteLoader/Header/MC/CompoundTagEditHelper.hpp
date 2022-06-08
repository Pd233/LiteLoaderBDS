// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class CompoundTagEditHelper {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_COMPOUNDTAGEDITHELPER
public:
    class CompoundTagEditHelper& operator=(class CompoundTagEditHelper const &) = delete;
    CompoundTagEditHelper(class CompoundTagEditHelper const &) = delete;
    CompoundTagEditHelper() = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_COMPOUNDTAGEDITHELPER
public:
#endif
    MCAPI class CompoundTag const * getParent() const;
    MCAPI void replaceWith(std::string const &, std::unique_ptr<class Tag>);
    MCAPI ~CompoundTagEditHelper();


//private:
    MCAPI void pushChild(std::string const &);

};