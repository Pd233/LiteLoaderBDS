// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Bedrock.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class VanillaBastionJigsawStructures {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_VANILLABASTIONJIGSAWSTRUCTURES
public:
    class VanillaBastionJigsawStructures& operator=(class VanillaBastionJigsawStructures const &) = delete;
    VanillaBastionJigsawStructures(class VanillaBastionJigsawStructures const &) = delete;
    VanillaBastionJigsawStructures() = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_VANILLABASTIONJIGSAWSTRUCTURES
public:
#endif
    MCAPI static void initialize(class gsl::not_null<class Bedrock::NonOwnerPointer<class StructureManager>>, class FeatureRegistry &, class JigsawStructureRegistry &);



};