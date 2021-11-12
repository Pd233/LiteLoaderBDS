// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
class FunctionManager {
public:
    virtual ~FunctionManager();

public:
    MCAPI int execute(class FunctionEntry&, class CommandOrigin const&);
    MCAPI class FunctionEntry* getFunction(std::string const&);
    MCAPI void load(class ResourcePackManager&, class CommandRegistry&);
    MCAPI void tick();

private:
    MCAPI class CommandOrigin const& _addOriginReference(class CommandOrigin const&, unsigned int);
    MCAPI void _removeOriginReference(class CommandOrigin const&, unsigned int);

protected:
    MCAPI void _addTickFunctionsFromJson(class Json::Value const&);
};