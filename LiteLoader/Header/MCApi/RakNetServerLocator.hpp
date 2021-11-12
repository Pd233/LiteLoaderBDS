// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
class RakNetServerLocator {
public:
    virtual ~RakNetServerLocator();
    virtual void _onDisable();
    virtual void _onEnable();
    virtual void startAnnouncingServer(std::string const&, std::string const&, int /*enum GameType*/, int, int, bool);
    virtual void stopAnnouncingServer();
    virtual void startServerDiscovery(struct PortPair);
    virtual void stopServerDiscovery();
    virtual void addCustomServer(std::string const&, int);
    virtual void addCustomServer(class AsynchronousIPResolver const&, int);
    virtual std::vector<struct PingedCompatibleServer> getServerList();
    virtual void clearServerList();
    virtual void update();
    virtual bool isIPv4Supported();
    virtual bool isIPv6Supported();
    virtual void setHostGUID(class std::function<struct RakNet::RakNetGUID(void)>);
    virtual float getPingTimeForGUID(std::string const&);
    virtual void checkCanConnectToCustomServerAsync(std::string, int, class std::function<void(bool)>);

private:
    MCAPI void _activate();
    MCAPI void _addCustomServerFromIpResolver(class AsynchronousIPResolver const&, int);
    MCAPI bool _addCustomServerV4(class AsynchronousIPResolver const&, int);
    MCAPI bool _addCustomServerV6(class AsynchronousIPResolver const&, int);
    MCAPI void _announceServer(struct RakNetServerLocator::AnnounceServerData const&);
    MCAPI void _enqueueStateChangeRequest(enum LocatorStateChangeRequest, struct RakNetServerLocator::AnnounceServerData, struct PortPair);
    MCAPI std::string _getHostGuid(std::string const&, int);
    MCAPI void _getServerOriginalAddress(std::string&, std::string const&);
    MCAPI bool _handleUnconnectedPong(std::string const&, struct RakNet::Packet const*, bool, unsigned __int64);
    MCAPI void _initializeBroadcastAddresses();
    MCAPI bool _onPongReceive(float&, struct RakNet::RakNetGUID const&, unsigned int const&, int);
    MCAPI void _punchHoles();
    MCAPI void _startAnnouncingServer(struct RakNetServerLocator::AnnounceServerData const&);
    MCAPI void _startServerDiscovery(struct PortPair const&);
    MCAPI void _stopAnnouncingServer();
    MCAPI void _stopServerDiscovery();
    MCAPI void _updateNetwork();
    MCAPI bool _updateQueuedPings();
};