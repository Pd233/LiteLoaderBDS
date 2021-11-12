// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
class ScriptDimension : public ScriptObject {
public:
    virtual ~ScriptDimension();

public:
    MCAPI class Scripting::Result<void> createExplosion(class Vec3 const&, float, struct Scripting::TypedObjectHandle<struct ScriptExplosionOptions>) const;
    MCAPI class Scripting::StrongTypedObjectHandle<class ScriptBlock> getBlock(class Scripting::WeakLifetimeScope, class BlockPos const&);
    MCAPI class Dimension* getDimension() const;
    MCAPI bool isEmpty(class BlockPos const&) const;
    MCAPI class Scripting::Result<class Scripting::StrongTypedObjectHandle<class ScriptActor>> spawnEntity(std::string const&, class BlockPos const&) const;

    MCAPI static class Scripting::ClassBindingBuilder<class ScriptDimension> bind(struct Scripting::Version);
    MCAPI static class Scripting::StrongTypedObjectHandle<class ScriptDimension> getOrCreateHandle(class Dimension&, class Scripting::WeakLifetimeScope const&);
    MCAPI static class Scripting::StrongTypedObjectHandle<class ScriptDimension> getOrCreateHandle(class AutomaticID<class Dimension, int>, class Level&, class Scripting::WeakLifetimeScope const&);
};