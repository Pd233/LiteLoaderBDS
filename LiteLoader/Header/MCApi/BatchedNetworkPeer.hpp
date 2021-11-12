// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
class BatchedNetworkPeer {
public:
    virtual ~BatchedNetworkPeer();
    virtual void sendPacket(std::string const&, int /*enum NetworkPeer::Reliability*/, int, unsigned short, int /*enum Compressibility*/);
    virtual int /*enum NetworkPeer::DataStatus*/ receivePacket(std::string&, class std::shared_ptr<class std::chrono::time_point<struct std::chrono::steady_clock, class std::chrono::duration<__int64, struct std::ratio<1, 1000000000>>>> const&);
    virtual void unk_vfn_3();
    virtual void update();
    virtual void flush(class std::function<void(void)>&&);

private:
    MCAPI void _startSendTask();
};