// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
class TameableDefinition {

public:
    MCAPI void addTamingItemByName(std::string const&);
    MCAPI void initialize(class EntityContext&, class TameableComponent&) const;

    MCAPI static void buildSchema(class std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, class TameableDefinition>>&);
};