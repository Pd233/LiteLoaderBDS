// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class ScriptMovementAmphibiousComponentFactory {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SCRIPTMOVEMENTAMPHIBIOUSCOMPONENTFACTORY
public:
    class ScriptMovementAmphibiousComponentFactory& operator=(class ScriptMovementAmphibiousComponentFactory const &) = delete;
    ScriptMovementAmphibiousComponentFactory(class ScriptMovementAmphibiousComponentFactory const &) = delete;
    ScriptMovementAmphibiousComponentFactory() = delete;
#endif

public:
    /*0*/ virtual ~ScriptMovementAmphibiousComponentFactory();
    /*1*/ virtual class Scripting::StrongTypedObjectHandle<class ScriptActorComponent> createComponent(class WeakEntityRef, class Scripting::WeakLifetimeScope const &, std::string const &);
    /*2*/ virtual bool hasComponent(class WeakEntityRef) const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_SCRIPTMOVEMENTAMPHIBIOUSCOMPONENTFACTORY
public:
#endif



};