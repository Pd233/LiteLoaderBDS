// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
class JournaledFile {

public:
    MCAPI class Core::Result open(class Core::Path, class Core::FileOpenMode, enum Core::FileBufferingMode);
    MCAPI class Core::Result write(void const*, unsigned __int64);

    MCAPI static class Core::PathBuffer<std::string> findBackupPath(class Core::Path);
    MCAPI static class Core::PathBuffer<std::string> findReadPath(class Core::Path);
    MCAPI static bool isOldFile(class Core::Path);
    MCAPI static class Core::Result replaceHeadFileWithBackup(class Core::Path);

private:
    MCAPI void _flushFiles();
};