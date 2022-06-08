// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class ContainerValidationBase {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CONTAINERVALIDATIONBASE
public:
    class ContainerValidationBase& operator=(class ContainerValidationBase const &) = delete;
    ContainerValidationBase(class ContainerValidationBase const &) = delete;
    ContainerValidationBase() = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_CONTAINERVALIDATIONBASE
public:
    MCVAPI bool canDestroy(class ContainerScreenContext const &) const;
    MCVAPI bool canItemMoveToContainer(class ItemStackBase const &) const;
    MCVAPI int getAvailableSetCount(int, class ItemStackBase const &) const;
    MCVAPI int getContainerOffset(class ContainerScreenContext const &) const;
    MCVAPI int getContainerSize(class ContainerScreenContext const &, class Container const &) const;
    MCVAPI bool isItemAllowedInSlot(class ContainerScreenContext const &, int, class ItemStackBase const &, int) const;
    MCVAPI bool isItemAllowedToAdd(class ItemStack const &) const;
    MCVAPI bool isItemAllowedToRemove(class ContainerScreenContext const &, class ItemStackBase const &) const;
    MCVAPI bool isValidSlotForContainer(class ContainerScreenContext const &, class Container const &, int) const;
#endif



};