// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
class PathFinder {

public:
    MCAPI std::unique_ptr<class Path> findPath(class Actor&, class Actor&, float);
    MCAPI std::unique_ptr<class Path> findPath(class Actor&, int, int, int, float);
    MCAPI enum NodeType isFree(class Actor&, class BlockPos const&, class BlockPos const&, class BlockPos const&, enum CanJumpIntoNode, enum CanClimbIntoNode);

private:
    MCAPI void _addNeighbor(class PathfinderNode*, class PathfinderNode const&, unsigned int, unsigned __int64&);
    MCAPI bool _checkBlockAndNeighborsProperty(class Actor&, class BlockPos const&, class Block const&, enum BlockProperty, int, class BreakBlocksComponent const*, class std::function<bool(class Block const&, class BlockPos const&)>);
    MCAPI bool _checkForDamagingBlock(class Actor&, class BlockPos const&, class Block const&, int, class BreakBlocksComponent const*);
    MCAPI enum NodeType _classifyDoorNode(class Actor&, class Block const&, class BlockPos const&, class BlockPos const&);
    MCAPI enum NodeType _classifyNode(class Actor&, class BlockPos const&, class Block const&, class BlockPos const&, enum CanJumpIntoNode, enum CanClimbIntoNode);
    MCAPI bool _findNearestPathableNeighbor(class BlockPos&, class Actor&, class BlockPos const&);
    MCAPI std::unique_ptr<class Path> _findPath(class Actor&, float, float, float, float);
    MCAPI std::unique_ptr<class Path> _findPath(class Actor&, class PathfinderNode*, class PathfinderNode*, class PathfinderNode const&, float);
    MCAPI float _getHeightAboveBlock(class BlockPos const&, float);
    MCAPI float _getHeightBelowBlock(class BlockPos const&, float);
    MCAPI struct std::pair<float, float> _getMinAndMaxHeightAroundBlock(class BlockPos const&, float);
    MCAPI int _getNeighbors(class Actor&, class PathfinderNode&, class PathfinderNode const&, class PathfinderNode const&, unsigned int);
    MCAPI class PathfinderNode* _getNode(class Actor&, class BlockPos const&, class BlockPos const&, class PathfinderNode const&, int, enum CanClimbIntoNode);
    MCAPI class PathfinderNode* _getNode(class BlockPos const&, enum NodeType);
    MCAPI class std::optional<enum NodeType> _getPartialBlockNodeType(class BlockPos const&, class BlockPos const&, class Actor&);
    MCAPI float _getPathfindingMalus(class Actor&, enum NodeType, class BlockPos const&);
    MCAPI class PathfinderNode* _getWaterNode(class Actor&, class BlockPos const&, class BlockPos const&);
    MCAPI enum NodeType _isFreeWaterNode(class Actor&, class BlockPos const&, class BlockPos const&);
    MCAPI std::unique_ptr<class Path> _reconstructPath(class PathfinderNode*, enum PathCompletionType, struct ActorUniqueID);
};