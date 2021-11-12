// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
namespace JsonHelpers {

MCAPI void addObjectArrayField(class Json::Value&, std::string const&, std::vector<class Json::Value> const&);
MCAPI void addObjectField(class Json::Value&, std::string const&, class Json::Value const&);
MCAPI void addStringField(class Json::Value&, std::string const&, std::string const&);
MCAPI void addUint32Field(class Json::Value&, std::string const&, unsigned int const&);
MCAPI bool parseJson(std::string const&, class Json::Value&);
MCAPI std::string serialize(class Json::Value const&);

} // namespace JsonHelpers