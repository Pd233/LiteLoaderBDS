// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class JigsawStructureBlockRulesRegistry {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_JIGSAWSTRUCTUREBLOCKRULESREGISTRY
public:
    class JigsawStructureBlockRulesRegistry& operator=(class JigsawStructureBlockRulesRegistry const &) = delete;
    JigsawStructureBlockRulesRegistry(class JigsawStructureBlockRulesRegistry const &) = delete;
    JigsawStructureBlockRulesRegistry() = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_JIGSAWSTRUCTUREBLOCKRULESREGISTRY
#endif
    MCAPI void clear();
    MCAPI std::vector<std::unique_ptr<class StructurePoolBlockRule>> const * lookupByName(std::string) const;
    MCAPI void registerBlockRules(std::string, std::unique_ptr<std::vector<class std::unique_ptr<class StructurePoolBlockRule, struct std::default_delete<class StructurePoolBlockRule>>>> &&);
    MCAPI ~JigsawStructureBlockRulesRegistry();

protected:

private:

};