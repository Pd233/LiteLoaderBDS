// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Packet.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class ChangeMobPropertyPacket : public Packet {

#define AFTER_EXTRA
public:
    ActorUniqueID mUid;
    string mProperty;
    bool mBool;
	string mString;
	int mInt;
	float mFloat;
	
#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CHANGEMOBPROPERTYPACKET
public:
    class ChangeMobPropertyPacket& operator=(class ChangeMobPropertyPacket const &) = delete;
    ChangeMobPropertyPacket(class ChangeMobPropertyPacket const &) = delete;
#endif

public:
    /*0*/ virtual ~ChangeMobPropertyPacket();
    /*1*/ virtual enum MinecraftPacketIds getId() const;
    /*2*/ virtual std::string getName() const;
    /*3*/ virtual void write(class BinaryStream &) const;
    /*6*/ virtual enum StreamReadResult _read(class ReadOnlyBinaryStream &);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_CHANGEMOBPROPERTYPACKET
public:
#endif
    MCAPI ChangeMobPropertyPacket();



};