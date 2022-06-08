// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Json.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class WorldPacksHistoryFile {

#define AFTER_EXTRA
// Add Member There
public:
enum ParseResult;

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_WORLDPACKSHISTORYFILE
public:
    class WorldPacksHistoryFile& operator=(class WorldPacksHistoryFile const &) = delete;
    WorldPacksHistoryFile(class WorldPacksHistoryFile const &) = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_WORLDPACKSHISTORYFILE
#endif
    MCAPI WorldPacksHistoryFile();
    MCAPI std::vector<class WorldPackHistory> const & getPacks() const;
    MCAPI enum WorldPacksHistoryFile::ParseResult initializeFromJson(class Json::Value const &);
    MCAPI ~WorldPacksHistoryFile();

protected:

private:

};