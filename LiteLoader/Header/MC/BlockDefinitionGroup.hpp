// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "JsonUtil.hpp"
#include "Json.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class BlockDefinitionGroup {

#define AFTER_EXTRA
// Add Member There
public:
struct BlockResource {
    BlockResource() = delete;
    BlockResource(BlockResource const&) = delete;
    BlockResource(BlockResource const&&) = delete;
};

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BLOCKDEFINITIONGROUP
public:
    class BlockDefinitionGroup& operator=(class BlockDefinitionGroup const &) = delete;
    BlockDefinitionGroup(class BlockDefinitionGroup const &) = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_BLOCKDEFINITIONGROUP
public:
#endif
    MCAPI BlockDefinitionGroup();
    MCAPI void buildBlockSchema(class BlockComponentFactory const &);
    MCAPI void digestServerBlockProperties(std::vector<struct std::pair<std::string, class CompoundTag>> const &, class BlockComponentFactory const &);
    MCAPI std::unique_ptr<struct BlockDefinition> generateBlockDefinition(struct BlockDefinitionGroup::BlockResource const &, class Experiments const &);
    MCAPI std::vector<struct std::pair<std::string, class CompoundTag>> generateServerBlockProperties() const;
    MCAPI std::vector<struct BlockDefinition const *> getBlockDefinitions() const;
    MCAPI void initializeBlockFromDefinition(struct BlockDefinition const &, class EntityRegistry &, class Level &);
    MCAPI void initializeBlocks(class EntityRegistry &, class Level &);
    MCAPI void loadResources(class ResourcePackManager &, class BlockComponentFactory const &, class Experiments const &);
    MCAPI void registerBlockDefinition(std::unique_ptr<struct BlockDefinition>);
    MCAPI void registerBlockFromDefinition(struct BlockDefinition const &, bool);
    MCAPI void registerBlocks();
    MCAPI ~BlockDefinitionGroup();


//private:
    MCAPI void _buildBlockComponentsSchema(class std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, struct BlockComponentGroupDescription>> &, class BlockComponentFactory const &);
    MCAPI void _buildBlockDescriptionSchema(class std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, struct BlockDescription>> &);
    MCAPI bool _loadBlockDescription(class Json::Value const &, struct BlockDescription &);
    MCAPI bool _loadComponents(class Json::Value const &, struct BlockDefinition &, class Experiments const &);
    MCAPI bool _loadEvents(class Json::Value const &, struct BlockDefinition &);
    MCAPI bool _parseComponents(class Json::Value const &, struct BlockComponentGroupDescription &, std::string const &, class SemVersion const &, class Experiments const &);

};