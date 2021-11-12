// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
class FunctionAction {
public:
    virtual ~FunctionAction();
    virtual void execute(class ServerLevel&, class Dimension&);
    virtual void serialize(class CompoundTag&);
    virtual bool operator==(class IRequestAction&);

public:
    MCAPI static bool isValidTag(class CompoundTag const&);
    MCAPI static std::unique_ptr<class FunctionAction> load(class CompoundTag const&, class ICommandOriginLoader&);

private:
    MCAPI void _printOriginInvalidError(class ServerLevel&);
    MCAPI void _printOutput(class ServerLevel&, int);
};