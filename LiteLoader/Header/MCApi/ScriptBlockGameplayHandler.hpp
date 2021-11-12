// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
class ScriptBlockGameplayHandler {
public:
    virtual ~ScriptBlockGameplayHandler();
    virtual void unk_vfn_1();
    virtual void unk_vfn_2();
    virtual void unk_vfn_3();
    virtual void unk_vfn_4();
    virtual void unk_vfn_5();
    virtual void unk_vfn_6();
    virtual struct GameplayHandlerResult<int /*enum CoordinatorResult*/> handlePistonActionEvent(struct PistonActionEvent const&);
    virtual struct GameplayHandlerResult<int /*enum CoordinatorResult*/> handleExplosionStartedEvent(struct ExplosionStartedEvent&);

private:
    MCAPI bool _handleExplosionStartedEvent(struct ExplosionStartedEvent&, class Scripting::WeakLifetimeScope const&, struct Scripting::TypedObjectHandle<class ScriptWorldEvents>) const;
    MCAPI bool _handlePistonActionEvent(struct PistonActionEvent const&, class Scripting::WeakLifetimeScope const&, struct Scripting::TypedObjectHandle<class ScriptWorldEvents>) const;
};