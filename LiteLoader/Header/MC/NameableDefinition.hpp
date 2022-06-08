// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "JsonUtil.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class NameableDefinition {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_NAMEABLEDEFINITION
public:
    class NameableDefinition& operator=(class NameableDefinition const &) = delete;
    NameableDefinition(class NameableDefinition const &) = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_NAMEABLEDEFINITION
#endif
    MCAPI NameableDefinition();
    MCAPI void addNameAction(struct NameAction const &);
    MCAPI void initialize(class EntityContext &, class NameableComponent &) const;
    MCAPI ~NameableDefinition();
    MCAPI static void buildSchema(class std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, class NameableDefinition>> &);

protected:

private:

};