// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Packet.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class SetCommandsEnabledPacket : public Packet {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SETCOMMANDSENABLEDPACKET
public:
    class SetCommandsEnabledPacket& operator=(class SetCommandsEnabledPacket const &) = delete;
    SetCommandsEnabledPacket(class SetCommandsEnabledPacket const &) = delete;
#endif

public:
    /*0*/ virtual ~SetCommandsEnabledPacket();
    /*1*/ virtual enum MinecraftPacketIds getId() const;
    /*2*/ virtual std::string getName() const;
    /*3*/ virtual void write(class BinaryStream &) const;
    /*6*/ virtual enum StreamReadResult _read(class ReadOnlyBinaryStream &);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_SETCOMMANDSENABLEDPACKET
#endif
    MCAPI SetCommandsEnabledPacket();
    MCAPI SetCommandsEnabledPacket(bool);

protected:

private:

};