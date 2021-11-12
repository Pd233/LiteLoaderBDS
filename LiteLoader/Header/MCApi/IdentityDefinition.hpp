// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
class IdentityDefinition {

public:
    MCAPI struct ActorUniqueID const& getEntityId() const;
    MCAPI std::string const& getFakePlayerName() const;
    MCAPI enum IdentityDefinition::Type getIdentityType() const;
    MCAPI struct PlayerScoreboardId const& getPlayerId() const;
    MCAPI bool isEntityType() const;
    MCAPI bool isPlayerType() const;
    MCAPI bool isValid() const;

    MCAPI static class IdentityDefinition const Invalid;
};