// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
class RideableDefinition {

public:
    MCAPI void addFamilyTypeByName(std::string const&);
    MCAPI void initialize(class EntityContext&, class RideableComponent&);

    MCAPI static void buildSchema(class std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, class RideableDefinition>>&);
};