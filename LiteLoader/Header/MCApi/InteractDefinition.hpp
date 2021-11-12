// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
class InteractDefinition {

public:
    MCAPI void addInteraction(struct Interaction const&);
    MCAPI void deserializeData(class Json::Value&, class SemVersion const&);
    MCAPI void initialize(class EntityContext&, class InteractComponent&) const;
    MCAPI void serializeData(class Json::Value&) const;

    MCAPI static void buildSchema(class std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, class InteractDefinition>>&);

private:
    MCAPI void deserializeInteraction(class Json::Value&, class SemVersion const&);
    MCAPI void serializeInteraction(struct Interaction const&, class Json::Value&) const;
};