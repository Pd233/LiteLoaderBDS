// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Packet.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class ItemStackRequestPacket : public Packet {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ITEMSTACKREQUESTPACKET
public:
    class ItemStackRequestPacket& operator=(class ItemStackRequestPacket const &) = delete;
    ItemStackRequestPacket(class ItemStackRequestPacket const &) = delete;
#endif

public:
    /*0*/ virtual ~ItemStackRequestPacket();
    /*1*/ virtual enum MinecraftPacketIds getId() const;
    /*2*/ virtual std::string getName() const;
    /*3*/ virtual void write(class BinaryStream &) const;
    /*6*/ virtual enum StreamReadResult _read(class ReadOnlyBinaryStream &);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_ITEMSTACKREQUESTPACKET
#endif
    MCAPI ItemStackRequestPacket();
    MCAPI class ItemStackRequestBatch const & getRequestBatch() const;

protected:

private:

};