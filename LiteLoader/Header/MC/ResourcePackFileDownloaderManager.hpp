// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class ResourcePackFileDownloaderManager {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_RESOURCEPACKFILEDOWNLOADERMANAGER
public:
    class ResourcePackFileDownloaderManager& operator=(class ResourcePackFileDownloaderManager const &) = delete;
    ResourcePackFileDownloaderManager(class ResourcePackFileDownloaderManager const &) = delete;
    ResourcePackFileDownloaderManager() = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_RESOURCEPACKFILEDOWNLOADERMANAGER
public:
#endif
    MCAPI void cleanup();
    MCAPI void update();


//private:
    MCAPI static int const MAX_CHUNK_ATTEMPTS;

};