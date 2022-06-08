// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Packet.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here
#include "PlayerListEntry.hpp"

enum class PlayerListPacketType
{
    Add,
    Remove
};

#undef BEFORE_EXTRA

class PlayerListPacket : public Packet {

#define AFTER_EXTRA
// Add Member There
public:
public:
    std::vector<class PlayerListEntry> entries;
    enum PlayerListPacketType type;

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_PLAYERLISTPACKET
public:
    class PlayerListPacket& operator=(class PlayerListPacket const &) = delete;
    PlayerListPacket(class PlayerListPacket const &) = delete;
#endif

public:
    /*0*/ virtual ~PlayerListPacket();
    /*1*/ virtual enum MinecraftPacketIds getId() const;
    /*2*/ virtual std::string getName() const;
    /*3*/ virtual void write(class BinaryStream &) const;
    /*4*/ virtual struct ExtendedStreamReadResult readExtended(class ReadOnlyBinaryStream &);
    /*6*/ virtual enum StreamReadResult _read(class ReadOnlyBinaryStream &);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_PLAYERLISTPACKET
public:
#endif
    MCAPI PlayerListPacket(class mce::UUID const &);
    MCAPI PlayerListPacket();
    MCAPI void emplace(class PlayerListEntry &&);



};