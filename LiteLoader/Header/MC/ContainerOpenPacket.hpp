// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Packet.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class ContainerOpenPacket : public Packet {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CONTAINEROPENPACKET
public:
    class ContainerOpenPacket& operator=(class ContainerOpenPacket const &) = delete;
    ContainerOpenPacket(class ContainerOpenPacket const &) = delete;
#endif

public:
    /*0*/ virtual ~ContainerOpenPacket();
    /*1*/ virtual enum MinecraftPacketIds getId() const;
    /*2*/ virtual std::string getName() const;
    /*3*/ virtual void write(class BinaryStream &) const;
    /*6*/ virtual enum StreamReadResult _read(class ReadOnlyBinaryStream &);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_CONTAINEROPENPACKET
public:
#endif
    MCAPI ContainerOpenPacket(enum ContainerID, enum ContainerType, class BlockPos const &, struct ActorUniqueID const &);
    MCAPI ContainerOpenPacket();



};