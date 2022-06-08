// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Json.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class AllowList {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ALLOWLIST
public:
    class AllowList& operator=(class AllowList const &) = delete;
    AllowList(class AllowList const &) = delete;
    AllowList() = delete;
#endif

public:
    /*0*/ virtual ~AllowList();
    /*1*/ virtual void serialize(class Json::Value &);
    /*2*/ virtual void deserialize(class Json::Value &);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_ALLOWLIST
public:
#endif
    MCAPI AllowList(class std::function<void (void)>);
    MCAPI bool addEntry(class AllowListEntry const &);
    MCAPI std::vector<class AllowListEntry> const & getEntries() const;
    MCAPI bool isAllowed(class mce::UUID const &, std::string const &) const;
    MCAPI bool isIgnoringPlayerLimit(class mce::UUID const &, std::string const &) const;
    MCAPI bool removeByName(std::string const &);
    MCAPI void tryUpdateEntries(class mce::UUID const &, std::string const &, std::string const &);



};