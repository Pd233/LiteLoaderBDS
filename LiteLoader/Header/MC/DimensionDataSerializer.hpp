// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class DimensionDataSerializer {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_DIMENSIONDATASERIALIZER
public:
    class DimensionDataSerializer& operator=(class DimensionDataSerializer const &) = delete;
    DimensionDataSerializer(class DimensionDataSerializer const &) = delete;
    DimensionDataSerializer() = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_DIMENSIONDATASERIALIZER
#endif
    MCAPI std::string createSaveID(std::string const &, std::string const &);
    MCAPI void deleteDataWithID(std::string const &, class LevelStorage &);
    MCAPI void forEachKeyWithDimensionPrefix(std::string const &, std::string const &, class LevelStorage &, class std::function<void (std::string const &, class CompoundTag const &)> const &);
    MCAPI void saveDataWithID(std::string const &, class CompoundTag const &, class LevelStorage &);

protected:
    MCAPI std::string _createLevelStorageID(std::string const &, std::string const &, std::string const &);

private:

};