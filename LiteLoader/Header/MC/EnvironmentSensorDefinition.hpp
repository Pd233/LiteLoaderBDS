// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "JsonUtil.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class EnvironmentSensorDefinition {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ENVIRONMENTSENSORDEFINITION
public:
    class EnvironmentSensorDefinition& operator=(class EnvironmentSensorDefinition const &) = delete;
    EnvironmentSensorDefinition(class EnvironmentSensorDefinition const &) = delete;
    EnvironmentSensorDefinition() = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_ENVIRONMENTSENSORDEFINITION
public:
#endif
    MCAPI void addEnvironmentTrigger(class DefinitionTrigger const &);
    MCAPI static void buildSchema(class std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, class EnvironmentSensorDefinition>> &);



};