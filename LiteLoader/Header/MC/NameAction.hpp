// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART
#include "Extra/NameActionAPI.hpp"
#undef EXTRA_INCLUDE_PART
class NameAction {
#include "Extra/NameActionAPI.hpp"

public:
    MCAPI NameAction(struct NameAction const&);
    MCAPI void addNameFilterByName(std::string const&);
    MCAPI ~NameAction();
};