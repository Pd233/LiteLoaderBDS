// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
class BlockDisplayNameDescription {
public:
    virtual ~BlockDisplayNameDescription();
    virtual std::string const& getName();
    virtual void initializeComponent(class EntityContext&);
    virtual void unk_vfn_3();
    virtual void unk_vfn_4();
    virtual void unk_vfn_5();
    virtual void unk_vfn_6();

public:
    MCAPI static std::string const NameID;
    MCAPI static void bindType();
};