// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Core.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class LevelDbSequentialFile {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_LEVELDBSEQUENTIALFILE
public:
    class LevelDbSequentialFile& operator=(class LevelDbSequentialFile const &) = delete;
    LevelDbSequentialFile(class LevelDbSequentialFile const &) = delete;
    LevelDbSequentialFile() = delete;
#endif

public:
    /*0*/ virtual ~LevelDbSequentialFile();
    /*1*/ virtual class leveldb::Status Read(unsigned __int64, class leveldb::Slice *, char *);
    /*2*/ virtual class leveldb::Status Skip(unsigned __int64);
    MCAPI LevelDbSequentialFile(class Core::File &&);

protected:

private:

};