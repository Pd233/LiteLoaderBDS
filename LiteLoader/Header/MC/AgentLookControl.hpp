// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class AgentLookControl {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_AGENTLOOKCONTROL
public:
    class AgentLookControl& operator=(class AgentLookControl const &) = delete;
    AgentLookControl(class AgentLookControl const &) = delete;
#endif

public:
    /*0*/ virtual ~AgentLookControl();
    /*1*/ virtual void initializeInternal(class Mob &);
    /*2*/ virtual void tick(class Mob &);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_AGENTLOOKCONTROL
public:
#endif
    MCAPI AgentLookControl();
    MCAPI static float sBaseYMax;



};