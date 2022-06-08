// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Packet.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here
#include <MC/ComplexInventoryTransaction.hpp>

#undef BEFORE_EXTRA

class InventoryTransactionPacket : public Packet {

#define AFTER_EXTRA
// Add Member There
public:
    TypedClientNetId<struct ItemStackRequestIdTag, int, 0> requestId;            //48
    std::vector<std::pair<ContainerEnumName, std::vector<unsigned char>>> slots; //64
    std::unique_ptr<ComplexInventoryTransaction> transaction;                    //88
    bool isClientSide;                                                           //96

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_INVENTORYTRANSACTIONPACKET
public:
    class InventoryTransactionPacket& operator=(class InventoryTransactionPacket const &) = delete;
    InventoryTransactionPacket(class InventoryTransactionPacket const &) = delete;
#endif

public:
    /*0*/ virtual ~InventoryTransactionPacket();
    /*1*/ virtual enum MinecraftPacketIds getId() const;
    /*2*/ virtual std::string getName() const;
    /*3*/ virtual void write(class BinaryStream &) const;
    /*6*/ virtual enum StreamReadResult _read(class ReadOnlyBinaryStream &);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_INVENTORYTRANSACTIONPACKET
public:
#endif
    MCAPI InventoryTransactionPacket(std::unique_ptr<class ComplexInventoryTransaction>, bool);
    MCAPI InventoryTransactionPacket();
    MCAPI void postLoadItems(class BlockPalette &, bool) const;



};