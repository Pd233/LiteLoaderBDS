// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART
#include "Extra/LevelStorageWriteBatchAPI.hpp"
#undef EXTRA_INCLUDE_PART
class LevelStorageWriteBatch {
#include "Extra/LevelStorageWriteBatchAPI.hpp"
public:
    virtual ~LevelStorageWriteBatch();
    virtual void putKey(std::string const&, class std::shared_ptr<std::string>, int /*enum DBHelpers::Category*/);
    virtual void putKey(std::string const&, std::string&&, int /*enum DBHelpers::Category*/);
    virtual void putKey(std::string const&, std::string const&, int /*enum DBHelpers::Category*/);
    virtual void putKey(std::string const&, class gsl::basic_string_span<char const, -1>, int /*enum DBHelpers::Category*/);
    virtual void deleteKey(std::string const&, int /*enum DBHelpers::Category*/);
    virtual void flush(class LevelStorage&);

public:
    MCAPI LevelStorageWriteBatch();
    MCAPI void addFlushCallback(class std::function<void(void)>);
    MCAPI void clear();
};