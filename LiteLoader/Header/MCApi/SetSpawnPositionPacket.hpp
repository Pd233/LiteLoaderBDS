// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
class SetSpawnPositionPacket : public Packet {
public:
    virtual ~SetSpawnPositionPacket();
    virtual int /*enum MinecraftPacketIds*/ getId();
    virtual std::string getName();
    virtual void write(class BinaryStream&);
    virtual void unk_vfn_5();
    virtual int /*enum StreamReadResult*/ _read(class ReadOnlyBinaryStream&);
};