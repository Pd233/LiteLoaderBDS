// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
class DebugAssertException {
public:
    virtual ~DebugAssertException();
    virtual char const* what();
    virtual void unk_vfn_2();
    virtual void unk_vfn_3();
    virtual();
    virtual void unk_vfn_5();
    virtual void unk_vfn_6();
    virtual void unk_vfn_7();
    virtual void unk_vfn_8();

public:
    MCAPI static bool isEnabled();

private:
    MCAPI static char const* const WHAT;
};