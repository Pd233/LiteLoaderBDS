// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART
#include "Extra/RotationDescriptionAPI.hpp"
#undef EXTRA_INCLUDE_PART
class RotationDescription {
#include "Extra/RotationDescriptionAPI.hpp"
public:
    virtual char const* getJsonName();
    virtual ~RotationDescription();
    virtual void deserializeData(struct DeserializeDataParams);
    virtual void serializeData(class Json::Value&);
};