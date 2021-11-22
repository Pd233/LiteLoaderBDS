// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART
#include "Extra/EnchantCommandAPI.hpp"
#undef EXTRA_INCLUDE_PART
class EnchantCommand {
#include "Extra/EnchantCommandAPI.hpp"
public:
    virtual ~EnchantCommand();
    virtual void execute(class CommandOrigin const&, class CommandOutput&);

public:
    MCAPI static void setup(class CommandRegistry&);
};