// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class LabTableReactionComponent {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_LABTABLEREACTIONCOMPONENT
public:
    class LabTableReactionComponent& operator=(class LabTableReactionComponent const &) = delete;
    LabTableReactionComponent(class LabTableReactionComponent const &) = delete;
    LabTableReactionComponent() = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_LABTABLEREACTIONCOMPONENT
    MCVAPI void _onEnd(class LabTableReaction &, class BlockSource &);
    MCVAPI void _onStart(class LabTableReaction &, class BlockSource &);
    MCVAPI void _onTick(class LabTableReaction &, class BlockSource &);
#endif

protected:

private:

};