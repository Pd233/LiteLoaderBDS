// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
class ScriptDebuggerTransport {
public:
    virtual ~ScriptDebuggerTransport();
    virtual bool listen(unsigned short);
    virtual bool connect(std::string const&, unsigned short);
    virtual bool selectClient();
    virtual bool connected();
    virtual bool lostConnection();
    virtual bool readyClose();
    virtual void close();
    virtual bool peek();
    virtual bool receive(char*, unsigned __int64);
    virtual void send(char const*, unsigned __int64);
};