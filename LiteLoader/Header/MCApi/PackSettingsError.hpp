// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
class PackSettingsError {
public:
    virtual ~PackSettingsError();
    virtual std::string getLocErrorMessage();
    virtual class std::unordered_map<int, std::string, struct std::hash<int>, struct std::equal_to<int>, class std::allocator<struct std::pair<int const, std::string>>> const& getLocErrorMessageMap();
    virtual class std::unordered_map<int, std::string, struct std::hash<int>, struct std::equal_to<int>, class std::allocator<struct std::pair<int const, std::string>>> const& getEventErrorMessageMap();
};