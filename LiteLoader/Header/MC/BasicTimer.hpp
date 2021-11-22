// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART
#include "Extra/BasicTimerAPI.hpp"
#undef EXTRA_INCLUDE_PART
class BasicTimer {
#include "Extra/BasicTimerAPI.hpp"

public:
    MCAPI BasicTimer(double, class std::function<double(void)>);
    MCAPI bool isFinished() const;
    MCAPI void resetTime();
    MCAPI ~BasicTimer();
};