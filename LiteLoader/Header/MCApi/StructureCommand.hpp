// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
class StructureCommand {
public:
    virtual ~StructureCommand();
    virtual void execute(class CommandOrigin const&, class CommandOutput&);

public:
    MCAPI static void setup(class CommandRegistry&);

private:
    MCAPI void _delete(class CommandOrigin const&, class CommandOutput&) const;
    MCAPI std::string _getFullName() const;
    MCAPI bool _isValidSize(class BlockPos const&, class CommandOutput&) const;
    MCAPI void _load(class CommandOrigin const&, class CommandOutput&) const;
    MCAPI void _save(class CommandOrigin const&, class CommandOutput&) const;
};