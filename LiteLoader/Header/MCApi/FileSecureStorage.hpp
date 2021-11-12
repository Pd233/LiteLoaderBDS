// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
class FileSecureStorage {
public:
    virtual ~FileSecureStorage();
    virtual bool add(std::string const&, std::string const&);
    virtual bool addOrUpdate(std::string const&, std::string const&);
    virtual bool remove(std::string const&);
    virtual bool get(std::string const&, std::string&);

private:
    MCAPI std::string _contentKeyObfuscator(std::string const&, std::string const&);
    MCAPI class SecureStorageKey _getSecureStorageKey() const;
    MCAPI void _initalizeSymmetricEncyrption(std::string&, bool);
    MCAPI void _rebuildSecureStorageFile();

protected:
    MCAPI bool _init(bool);
};