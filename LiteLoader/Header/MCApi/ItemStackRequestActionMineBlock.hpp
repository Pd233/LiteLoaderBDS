// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
class ItemStackRequestActionMineBlock {
public:
    virtual ~ItemStackRequestActionMineBlock();
    virtual void unk_vfn_1();
    virtual void unk_vfn_2();
    virtual void unk_vfn_3();
    virtual void _write(class BinaryStream&);
    virtual bool _read(class ReadOnlyBinaryStream&);

public:
    MCAPI enum ItemStackRequestActionMineBlock::PreValidationStatus getPreValidationStatus() const;
    MCAPI int getPredictedDurability() const;
    MCAPI struct ItemStackRequestSlotInfo getSrc() const;
    MCAPI void setPreValidationStatus(enum ItemStackRequestActionMineBlock::PreValidationStatus) const;
};