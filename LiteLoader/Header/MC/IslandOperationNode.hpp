// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class IslandOperationNode {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ISLANDOPERATIONNODE
public:
    class IslandOperationNode& operator=(class IslandOperationNode const &) = delete;
    IslandOperationNode(class IslandOperationNode const &) = delete;
    IslandOperationNode() = delete;
#endif

public:
    /*0*/ virtual ~IslandOperationNode();
    /*1*/ virtual void __unk_vfn_1();
    /*2*/ virtual void __unk_vfn_2();
    /*3*/ virtual void _fillArea(class OperationNodeDetails::WorkingData<enum OperationNodeValues::Terrain, char> &, class Pos2d const &, class Pos2d const &) const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_ISLANDOPERATIONNODE
#endif

protected:

private:

};