// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
class TickWorldDescription {
public:
    virtual char const* getJsonName();
    virtual ~TickWorldDescription();
    virtual void deserializeData(struct DeserializeDataParams);
    virtual void serializeData(class Json::Value&);
};