// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Json.hpp"
#include "BehaviorDefinition.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class CompositeDefinition : public BehaviorDefinition {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_COMPOSITEDEFINITION
public:
    class CompositeDefinition& operator=(class CompositeDefinition const &) = delete;
    CompositeDefinition(class CompositeDefinition const &) = delete;
#endif

public:
    /*0*/ virtual ~CompositeDefinition();
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_COMPOSITEDEFINITION
public:
#endif
    MCAPI CompositeDefinition();
    MCAPI class BehaviorDefinition const * get(unsigned __int64) const;
    MCAPI unsigned __int64 getCount() const;

//protected:
    MCAPI static void _compositeLoadChildrenBehaviors(class Json::Value, std::vector<std::unique_ptr<class BehaviorDefinition>> &, class BehaviorFactory const &, class BehaviorTreeDefinitionPtr);


};