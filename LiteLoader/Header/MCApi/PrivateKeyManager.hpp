// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
class PrivateKeyManager {
public:
    virtual ~PrivateKeyManager();
    virtual bool isValid();

public:
    MCAPI std::string computeSecret(class KeyManager const&) const;
};