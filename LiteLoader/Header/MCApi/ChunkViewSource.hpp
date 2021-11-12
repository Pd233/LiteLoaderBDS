// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
class ChunkViewSource : public ChunkSource {
public:
    virtual ~ChunkViewSource();
    virtual class std::shared_ptr<class LevelChunk> getExistingChunk(class ChunkPos const&);
    virtual class std::shared_ptr<class LevelChunk> getRandomChunk(class Random&);
    virtual class std::shared_ptr<class LevelChunk> createNewChunk(class ChunkPos const&, int /*enum ChunkSource::LoadMode*/, bool);
    virtual bool postProcess(class ChunkViewSource&);
    virtual void checkAndReplaceChunk(class ChunkViewSource&, class LevelChunk&);
    virtual void acquireDiscarded(class std::unique_ptr<class LevelChunk, struct LevelChunkFinalDeleter>);
    virtual bool isWithinWorldLimit(class ChunkPos const&);
    virtual void unk_vfn_19();
    virtual void clearDeletedEntities();
    virtual void unk_vfn_22();

public:
    MCAPI void clear();
    MCAPI std::vector<class LevelChunkBlockActorAccessToken> enableBlockEntityAccess();
    MCAPI class GridArea<class std::shared_ptr<class LevelChunk>>& getArea();
    MCAPI void move(struct Bounds const&, bool, class std::function<void(class buffer_span_mut<class std::shared_ptr<class LevelChunk>>, class buffer_span<unsigned int>)>);
    MCAPI void move(class BlockPos const&, class BlockPos const&, bool, class std::function<void(class buffer_span_mut<class std::shared_ptr<class LevelChunk>>, class buffer_span<unsigned int>)>);
    MCAPI void move(class BlockPos const&, int, bool, class std::function<void(class buffer_span_mut<class std::shared_ptr<class LevelChunk>>, class buffer_span<unsigned int>)>);
    MCAPI void rebuildSpecificArea(struct Bounds const&, bool, class std::function<void(class buffer_span_mut<class std::shared_ptr<class LevelChunk>>, class buffer_span<unsigned int>)>);
};