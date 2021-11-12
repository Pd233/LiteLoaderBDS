// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
class ItemStackRequestActionCraftHandler {
public:
    virtual ~ItemStackRequestActionCraftHandler();

public:
    MCAPI enum ItemStackNetResult _initCraftResults(std::vector<class ItemInstance> const&, unsigned char);
    MCAPI class ItemInstance* _initSingleCraftResult(class ItemInstance const&);
    MCAPI enum ItemStackNetResult endRequest(enum ItemStackNetResult);
    MCAPI void endRequestBatch();
    MCAPI class ItemStackRequestActionHandler const& getActionHandler() const;
    MCAPI enum ItemStackNetResult handleConsume(class ItemStackRequestActionConsume const&);
    MCAPI enum ItemStackNetResult handleCraftAction(class ItemStackRequestActionCraftBase const&);
    MCAPI enum ItemStackNetResult handleCraftResults(class ItemStackRequestActionCraftResults_DEPRECATEDASKTYLAING const&);
    MCAPI enum ItemStackNetResult handleCreate(class ItemStackRequestActionCreate const&);
    MCAPI bool isCraftRequest() const;
    MCAPI void onAllowedContainerAdded(enum ContainerEnumName, class ContainerWeakRef const&);
    MCAPI void onContainerScreenOpen(class ContainerScreenContext const&);
    MCAPI void postRequest(bool);
    MCAPI enum ItemStackNetResult preHandleAction(enum ItemStackRequestActionType);

private:
    MCAPI enum ItemStackNetResult _setCreatedItemOutputSlot(unsigned char);
};