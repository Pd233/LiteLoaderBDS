// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
class DBStorageEnvironmentChain {

public:
    MCAPI class Core::Result isChainValid(bool) const;

private:
    MCAPI static std::unique_ptr<class FlushableEnv> createFlushableEnv(class leveldb::Env*, class std::shared_ptr<class Core::FileStorageArea>, class Core::Path const&);
};