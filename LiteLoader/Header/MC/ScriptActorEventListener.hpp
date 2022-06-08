// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class ScriptActorEventListener {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SCRIPTACTOREVENTLISTENER
public:
    class ScriptActorEventListener& operator=(class ScriptActorEventListener const &) = delete;
    ScriptActorEventListener(class ScriptActorEventListener const &) = delete;
    ScriptActorEventListener() = delete;
#endif

public:
    /*0*/ virtual ~ScriptActorEventListener();
    /*1*/ virtual enum EventResult onEvent(struct ActorNotificationEvent const &);
    /*2*/ virtual void __unk_vfn_2();
    /*3*/ virtual void __unk_vfn_3();
    /*4*/ virtual void __unk_vfn_4();
    /*5*/ virtual void __unk_vfn_5();
    /*6*/ virtual void __unk_vfn_6();
    /*7*/ virtual void __unk_vfn_7();
    /*8*/ virtual void __unk_vfn_8();
    /*9*/ virtual void __unk_vfn_9();
    /*10*/ virtual void __unk_vfn_10();
    /*11*/ virtual enum EventResult onActorCreated(class Actor &);
    /*12*/ virtual void __unk_vfn_12();
    /*13*/ virtual void __unk_vfn_13();
    /*14*/ virtual void __unk_vfn_14();
    /*15*/ virtual void __unk_vfn_15();
    /*16*/ virtual void __unk_vfn_16();
    /*17*/ virtual void __unk_vfn_17();
    /*18*/ virtual void __unk_vfn_18();
    /*19*/ virtual void __unk_vfn_19();
    /*20*/ virtual void __unk_vfn_20();
    /*21*/ virtual void __unk_vfn_21();
    /*22*/ virtual void __unk_vfn_22();
    /*23*/ virtual void __unk_vfn_23();
    /*24*/ virtual void __unk_vfn_24();
    /*25*/ virtual void __unk_vfn_25();
    /*26*/ virtual enum EventResult onEvent(struct ActorRemovedEvent const &);
    /*27*/ virtual enum EventResult onEvent(struct ActorRemoveEffectEvent const &);
    /*28*/ virtual void __unk_vfn_28();
    /*29*/ virtual enum EventResult onEvent(struct ActorDefinitionEndedEvent const &);
    /*30*/ virtual enum EventResult onEvent(struct ActorHurtEvent const &);
    /*31*/ virtual void __unk_vfn_31();
    /*32*/ virtual enum EventResult onEvent(struct ActorAttackEvent const &);
    /*33*/ virtual void __unk_vfn_33();
    /*34*/ virtual enum EventResult onEvent(struct ActorAddEffectEvent const &);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_SCRIPTACTOREVENTLISTENER
#endif
    MCAPI ScriptActorEventListener(class Scripting::WeakLifetimeScope const &, struct Scripting::TypedObjectHandle<class ScriptWorldEvents>);

protected:

private:

};