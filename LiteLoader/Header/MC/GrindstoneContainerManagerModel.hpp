// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "ContainerManagerModel.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class GrindstoneContainerManagerModel : public ContainerManagerModel {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_GRINDSTONECONTAINERMANAGERMODEL
public:
    class GrindstoneContainerManagerModel& operator=(class GrindstoneContainerManagerModel const &) = delete;
    GrindstoneContainerManagerModel(class GrindstoneContainerManagerModel const &) = delete;
    GrindstoneContainerManagerModel() = delete;
#endif

public:
    /*0*/ virtual ~GrindstoneContainerManagerModel();
    /*6*/ virtual std::vector<class ItemStack> getItemCopies() const;
    /*7*/ virtual void setSlot(int, class ItemStack const &, bool);
    /*8*/ virtual class ItemStack const & getSlot(int) const;
    /*9*/ virtual void setData(int, int);
    /*10*/ virtual void broadcastChanges();
    /*15*/ virtual bool isValid(float);
    /*16*/ virtual class ContainerScreenContext _postInit();
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_GRINDSTONECONTAINERMANAGERMODEL
public:
#endif
    MCAPI GrindstoneContainerManagerModel(enum ContainerID, class Player &, class BlockPos const &);
    MCAPI static int const ADDITIONAL_SLOT;
    MCAPI static int const INPUT_SLOT;
    MCAPI static int const RESULT_SLOT;



};