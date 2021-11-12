// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
class ClientToServerHandshakePacket : public Packet {
public:
    virtual ~ClientToServerHandshakePacket();
    virtual int /*enum MinecraftPacketIds*/ getId();
    virtual std::string getName();
    virtual void write(class BinaryStream&);
    virtual void unk_vfn_5();
    virtual int /*enum StreamReadResult*/ _read(class ReadOnlyBinaryStream&);
};