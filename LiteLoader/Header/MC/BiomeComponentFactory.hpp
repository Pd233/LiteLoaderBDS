// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Json.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class BiomeComponentFactory {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BIOMECOMPONENTFACTORY
public:
    class BiomeComponentFactory& operator=(class BiomeComponentFactory const &) = delete;
    BiomeComponentFactory(class BiomeComponentFactory const &) = delete;
    BiomeComponentFactory() = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_BIOMECOMPONENTFACTORY
public:
#endif
    MCAPI BiomeComponentFactory(enum BiomeComponentFactory::FactoryScope);
    MCAPI void processDataComponents(class Biome &, class IWorldRegistriesProvider &, class CompoundTag &) const;
    MCAPI void processDataComponents(class Biome &, class IWorldRegistriesProvider &, class Json::Value &, class SemVersion const &) const;
    MCAPI void registrationFinished();



};