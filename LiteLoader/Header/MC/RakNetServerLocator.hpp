// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "RakNet.hpp"
#include "RakPeerHelper.hpp"
#include "Bedrock.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class RakNetServerLocator {

#define AFTER_EXTRA
// Add Member There
public:
struct AnnounceServerData {
    AnnounceServerData() = delete;
    AnnounceServerData(AnnounceServerData const&) = delete;
    AnnounceServerData(AnnounceServerData const&&) = delete;
};

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_RAKNETSERVERLOCATOR
public:
    class RakNetServerLocator& operator=(class RakNetServerLocator const &) = delete;
    RakNetServerLocator(class RakNetServerLocator const &) = delete;
    RakNetServerLocator() = delete;
#endif

public:
    /*0*/ virtual ~RakNetServerLocator();
    /*1*/ virtual void _onDisable();
    /*2*/ virtual void _onEnable();
    /*3*/ virtual void startAnnouncingServer(std::string const &, std::string const &, enum GameType, int, int, bool);
    /*4*/ virtual void stopAnnouncingServer();
    /*5*/ virtual void startServerDiscovery(struct PortPair);
    /*6*/ virtual void stopServerDiscovery();
    /*7*/ virtual void addCustomServer(class AsynchronousIPResolver const &, int);
    /*8*/ virtual void addCustomServer(std::string const &, int);
    /*9*/ virtual std::vector<struct PingedCompatibleServer> getServerList() const;
    /*10*/ virtual void clearServerList();
    /*11*/ virtual void update();
    /*12*/ virtual bool isIPv4Supported() const;
    /*13*/ virtual bool isIPv6Supported() const;
    /*14*/ virtual void setGetHostGUIDFn(class std::function<struct RakNet::RakNetGUID (void)> const &);
    /*15*/ virtual float getPingTimeForGUID(std::string const &);
    /*16*/ virtual void checkCanConnectToCustomServerAsync(std::string, int, class std::function<void (bool)>);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_RAKNETSERVERLOCATOR
public:
#endif
    MCAPI RakNetServerLocator(class RakNetInstance &, class RakPeerHelper::IPSupportInterface &, std::vector<std::string>, bool, enum PermissionLAN, enum PermissionIPv6, class Bedrock::NonOwnerPointer<class AppPlatform> const &, class std::function<class std::unique_ptr<class RakNet::RakPeerInterface, void ( *)(class RakNet::RakPeerInterface *)> (void)>);
    MCAPI static bool parseUnconnectedPongPacketData(std::string const &, std::vector<std::string> &);


//private:
    MCAPI void _activate();
    MCAPI void _addCustomServerFromIpResolver(class AsynchronousIPResolver const &, int);
    MCAPI bool _addCustomServerV4(class AsynchronousIPResolver const &, int);
    MCAPI bool _addCustomServerV6(class AsynchronousIPResolver const &, int);
    MCAPI void _announceServer(struct RakNetServerLocator::AnnounceServerData const &);
    MCAPI void _enqueueStateChangeRequest(enum LocatorStateChangeRequest, struct RakNetServerLocator::AnnounceServerData, struct PortPair);
    MCAPI std::string _getHostGuid(std::string const &, int);
    MCAPI void _getServerOriginalAddress(std::string &, std::string const &);
    MCAPI bool _handleUnconnectedPong(std::string const &, struct RakNet::Packet const *, bool, unsigned __int64);
    MCAPI void _initializeBroadcastAddresses();
    MCAPI bool _onPongReceive(float &, struct RakNet::RakNetGUID const &, unsigned int const &, int);
    MCAPI bool _pingServerV4(std::string const &, int);
    MCAPI bool _pingServerV6(std::string const &, int);
    MCAPI void _punchHoles();
    MCAPI void _startAnnouncingServer(struct RakNetServerLocator::AnnounceServerData const &);
    MCAPI void _startServerDiscovery(struct PortPair const &);
    MCAPI void _stopAnnouncingServer();
    MCAPI void _stopServerDiscovery();
    MCAPI void _updateNetwork();
    MCAPI bool _updateQueuedPings();

};