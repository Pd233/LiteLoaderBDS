// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
class CommandOutput {

public:
    MCAPI void addToResultList(std::string const&, std::string const&);
    MCAPI void addToResultList(std::string const&, class Actor const&);
    MCAPI bool empty() const;
    MCAPI void error(std::string const&, std::vector<class CommandOutputParameter> const&);
    MCAPI void forceOutput(std::string const&, std::vector<class CommandOutputParameter> const&);
    MCAPI class CommandPropertyBag const& getData() const;
    MCAPI std::vector<class CommandOutputMessage> const& getMessages() const;
    MCAPI int getSuccessCount() const;
    MCAPI enum CommandOutputType getType() const;
    MCAPI void setHasPlayerText();
    MCAPI void success(std::string const&, std::vector<class CommandOutputParameter> const&);
    MCAPI void success();
    MCAPI bool wantsData() const;
};