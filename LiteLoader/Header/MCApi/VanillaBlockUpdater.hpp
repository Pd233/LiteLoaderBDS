// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
class VanillaBlockUpdater {

public:
    MCAPI static void destroy();
    MCAPI static class CompoundTagUpdaterContext& get();
    MCAPI static void initialize();

private:
    MCAPI static void addBaseUpdater(class CompoundTagUpdaterContext&);
    MCAPI static void addRailUpdater_1_14_0(std::string const&, class CompoundTagUpdaterContext&);
    MCAPI static void addUpdaters_1_10_0(class CompoundTagUpdaterContext&);
    MCAPI static void addUpdaters_1_12_0(class CompoundTagUpdaterContext&);
    MCAPI static void addUpdaters_1_13_0(class CompoundTagUpdaterContext&);
    MCAPI static void addUpdaters_1_14_0(class CompoundTagUpdaterContext&);
    MCAPI static void addUpdaters_1_15_0(class CompoundTagUpdaterContext&);
    MCAPI static void addUpdaters_1_16_0(class CompoundTagUpdaterContext&);
    MCAPI static void addUpdaters_1_16_210(class CompoundTagUpdaterContext&);
    MCAPI static std::unique_ptr<class CompoundTagUpdaterContext> mContext;
};