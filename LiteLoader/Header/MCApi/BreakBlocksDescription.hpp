// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
class BreakBlocksDescription {
public:
    virtual char const* getJsonName();
    virtual ~BreakBlocksDescription();
    virtual void deserializeData(struct DeserializeDataParams);
    virtual void serializeData(class Json::Value&);
};