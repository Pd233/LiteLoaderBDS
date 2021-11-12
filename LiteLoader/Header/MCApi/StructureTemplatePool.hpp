// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
class StructureTemplatePool {

public:
    MCAPI std::string const& getFallback() const;
    MCAPI class StructurePoolElement const* getRandomTemplate(class Random&) const;
    MCAPI std::vector<unsigned __int64> getShuffledTemplateIndexes(class Random&) const;
    MCAPI class StructurePoolElement const* getTemplate(unsigned __int64) const;
    MCAPI bool isValid() const;
};