// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
class CommandResponse {
public:
    virtual ~CommandResponse();
    virtual std::string const& getName();
    virtual void executeAction(class RenderParams&);
    virtual void buildSchema(class std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, struct EventResponseCollection>>&, class Factory<class EventResponse> const&);

public:
    MCAPI static std::string const NameID;

private:
    MCAPI void _addCommand(std::string const&);
    MCAPI void _compileCommands(class Level&) const;
};