// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
class PlayerSkinPacket {
public:
    virtual ~PlayerSkinPacket();
    virtual int /*enum MinecraftPacketIds*/ getId();
    virtual std::string getName();
    virtual void write(class BinaryStream&);
    virtual struct ExtendedStreamReadResult readExtended(class ReadOnlyBinaryStream&);
    virtual void unk_vfn_5();
    virtual void unk_vfn_6();
};