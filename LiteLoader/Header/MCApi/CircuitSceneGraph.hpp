// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
class CircuitSceneGraph {

public:
    MCAPI void add(class BlockPos const&, std::unique_ptr<class BaseCircuitComponent>);
    MCAPI class BaseCircuitComponent* addIfPoweredBlockAt(class BlockSource&, class BlockPos const&);
    MCAPI class BaseCircuitComponent* getBaseComponent(class BlockPos const&);
    MCAPI class BaseCircuitComponent* getComponent(class BlockPos const&, enum CircuitComponentType);
    MCAPI class BaseCircuitComponent* getFromPendingAdd(class BlockPos const&);
    MCAPI class BaseCircuitComponent* getFromPendingAdd(class BlockPos const&, enum CircuitComponentType);
    MCAPI void invalidatePos(class BlockPos const&);
    MCAPI void preSetupPoweredBlocks(class ChunkPos const&);
    MCAPI void update(class BlockSource*);

private:
    MCAPI void findRelationships(class BlockPos const&, class BaseCircuitComponent*, class BlockSource*);
    MCAPI void processPendingAdds();
    MCAPI void removeComponent(class BlockPos const&);
    MCAPI void removeStaleRelationships();
    MCAPI void scheduleRelationshipUpdate(class BlockPos const&, class BaseCircuitComponent*);
};