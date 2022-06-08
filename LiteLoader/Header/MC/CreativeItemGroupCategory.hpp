// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class CreativeItemGroupCategory {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CREATIVEITEMGROUPCATEGORY
public:
    class CreativeItemGroupCategory& operator=(class CreativeItemGroupCategory const &) = delete;
    CreativeItemGroupCategory(class CreativeItemGroupCategory const &) = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_CREATIVEITEMGROUPCATEGORY
#endif
    MCAPI CreativeItemGroupCategory(class CreativeItemRegistry *, std::string const &, enum CreativeItemCategory);
    MCAPI CreativeItemGroupCategory();
    MCAPI class CreativeGroupInfo * addAnonymousGroup();
    MCAPI class CreativeGroupInfo * addChildGroup(class HashedString const &, class ItemInstance const &);
    MCAPI class CreativeGroupInfo * getChildGroup(class HashedString const &);
    MCAPI enum CreativeItemCategory getCreativeCategory();
    MCAPI class CreativeGroupInfo * getOrAddTailAnonymousGroup();

protected:

private:

};