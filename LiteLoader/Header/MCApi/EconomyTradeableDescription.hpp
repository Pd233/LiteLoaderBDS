// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
class EconomyTradeableDescription {
public:
    virtual char const* getJsonName();
    virtual ~EconomyTradeableDescription();
    virtual void deserializeData(struct DeserializeDataParams);
    virtual void serializeData(class Json::Value&);
};