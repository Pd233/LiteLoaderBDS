// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
class PermissionsFile {

public:
    MCAPI void applyPlayerPermissionsFromDisk(class Player&, class UserEntityIdentifierComponent const&, enum CommandPermissionLevel);
    MCAPI bool isPermissionsSet(std::string const&, enum PlayerPermissionLevel) const;
    MCAPI void persistPlayerPermissionsToDisk(std::string const&, enum PlayerPermissionLevel);
    MCAPI void persistPlayerPermissionsToDisk(class UserEntityIdentifierComponent const&, enum PlayerPermissionLevel);
    MCAPI enum FileReadResult reload();

private:
    MCAPI class std::tuple<enum FileReadResult, class Json::Value> readPermissionFile();
    MCAPI void setDefaultPlayerPermission(class Player&, enum CommandPermissionLevel);
};