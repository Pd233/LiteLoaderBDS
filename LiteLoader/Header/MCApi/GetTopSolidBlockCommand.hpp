// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
class GetTopSolidBlockCommand {
public:
    virtual ~GetTopSolidBlockCommand();
    virtual void execute(class CommandOrigin const&, class CommandOutput&);

public:
    MCAPI static void setup(class CommandRegistry&);
};