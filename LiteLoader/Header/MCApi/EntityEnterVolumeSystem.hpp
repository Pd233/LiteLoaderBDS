// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
class EntityEnterVolumeSystem : public ITickingSystem {
public:
    virtual ~EntityEnterVolumeSystem();
    virtual void unk_vfn_1();
    virtual void tick(class EntityRegistry&);

private:
    MCAPI void _tick(class EntityContext&, class VolumeBoundsComponent&) const;
};