// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#include "Packet.hpp"
#define EXTRA_INCLUDE_PART
#include "Extra/SimpleEventPacketAPI.hpp"
#undef EXTRA_INCLUDE_PART
class SimpleEventPacket : public Packet {
#include "Extra/SimpleEventPacketAPI.hpp"
public:
    virtual ~SimpleEventPacket();
    virtual int /*enum MinecraftPacketIds*/ getId();
    virtual std::string getName();
    virtual void write(class BinaryStream&);
    virtual void unk_vfn_5();
    virtual int /*enum StreamReadResult*/ _read(class ReadOnlyBinaryStream&);

public:
    MCAPI SimpleEventPacket();
    MCAPI SimpleEventPacket(enum SimpleEventPacket::Subtype const&);
    MCAPI enum SimpleEventPacket::Subtype const& getSubtype() const;
};