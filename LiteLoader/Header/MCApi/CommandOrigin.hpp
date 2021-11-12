// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
class CommandOrigin {
public:
    virtual ~CommandOrigin();
    virtual std::string const& getRequestId();
    virtual std::string getName();
    virtual class BlockPos getBlockPosition();
    virtual class Vec3 getWorldPosition();
    virtual class Level* getLevel();
    virtual class Dimension* getDimension();
    virtual class Actor* getEntity();
    virtual int /*enum CommandPermissionLevel*/ getPermissionsLevel();
    virtual std::unique_ptr<class CommandOrigin> clone();
    virtual class std::optional<class BlockPos> getCursorHitBlockPos();
    virtual class std::optional<class Vec3> getCursorHitPos();
    virtual bool hasChatPerms();
    virtual bool hasTellPerms();
    virtual bool canUseAbility(int /*enum AbilitiesIndex*/);
    virtual bool isWorldBuilder();
    virtual bool canUseCommandsWithoutCheatsEnabled();
    virtual bool isSelectorExpansionAllowed();
    virtual class NetworkIdentifier const& getSourceId();
    virtual unsigned char getSourceSubId();
    virtual void unk_vfn_20();
    virtual struct CommandOriginIdentity getIdentity();
    virtual void unk_vfn_22();
    virtual struct CommandOriginData toCommandOriginData();
    virtual void unk_vfn_24();
    virtual void handleCommandOutputCallback(class Json::Value&&);
    virtual class CompoundTag serialize();
    virtual bool isValid();
    virtual void _setUUID(class mce::UUID const&);

public:
    MCAPI std::unique_ptr<class CommandArea> getAreaAt(class BlockPos const&, class BlockPos const&, bool) const;
    MCAPI std::unique_ptr<class CommandArea> getAreaAt(class BlockPos const&) const;
    MCAPI std::unique_ptr<class CommandArea> getAreaAtWithBuffer(class BlockPos const&, class BlockPos const&, bool) const;
    MCAPI std::unique_ptr<class CommandArea> getAreaAtWithBuffer(class BlockPos const&) const;

protected:
    MCAPI static class NetworkIdentifier sUnknownSource;
};