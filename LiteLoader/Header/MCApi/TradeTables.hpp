// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
class TradeTables {

public:
    MCAPI struct TradeTable* fetchTable(std::string const&);
    MCAPI void reload(class Level&);

private:
    MCAPI void _parseAndStoreTradeTable(class ResourcePackManager*, class Core::Path const&);
};