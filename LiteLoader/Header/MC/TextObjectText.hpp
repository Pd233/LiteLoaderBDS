// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART
#include "Extra/TextObjectTextAPI.hpp"
#undef EXTRA_INCLUDE_PART
class TextObjectText {
#include "Extra/TextObjectTextAPI.hpp"
public:
    virtual ~TextObjectText();
    virtual void unk_vfn_1();
    virtual class Json::Value asJsonValue();
    virtual void unk_vfn_3();

public:
    MCAPI TextObjectText(std::string);

    MCAPI static class Json::Value asJsonValue(std::string const&);
};