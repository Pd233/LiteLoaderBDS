// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class CompoundTagUpdaterBuilder {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_COMPOUNDTAGUPDATERBUILDER
public:
    class CompoundTagUpdaterBuilder& operator=(class CompoundTagUpdaterBuilder const &) = delete;
    CompoundTagUpdaterBuilder(class CompoundTagUpdaterBuilder const &) = delete;
    CompoundTagUpdaterBuilder() = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_COMPOUNDTAGUPDATERBUILDER
#endif
    MCAPI class CompoundTagUpdaterBuilder & edit(std::string const &, class std::function<void (class CompoundTagEditHelper &)> &&);
    MCAPI class CompoundTagUpdaterBuilder & match(std::string const &, std::string);
    MCAPI class CompoundTagUpdaterBuilder & matchLiteral(std::string const &, std::string);
    MCAPI class CompoundTagUpdaterBuilder & popVisit();
    MCAPI class CompoundTagUpdaterBuilder & remove(std::string const &);
    MCAPI class CompoundTagUpdaterBuilder & rename(std::string const &, std::string const &);
    MCAPI class CompoundTagUpdaterBuilder & tryEdit(std::string const &, class std::function<void (class CompoundTagEditHelper &)> &&);
    MCAPI class CompoundTagUpdaterBuilder & visit(std::string const &);

protected:

private:

};