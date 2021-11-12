// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
class PropertyGroup {

public:
    MCAPI class CompoundTag getPropertyDescriptionsAsCompound(bool) const;
    MCAPI void initPropertiesOnComponent(class PropertyComponent&) const;
    MCAPI void registerProperty(class std::shared_ptr<struct CustomPropertyDescription>);

    MCAPI static int const MAX_ENUM_SIZE;
    MCAPI static bool loadPropertiesFromJson(std::vector<class std::shared_ptr<struct CustomPropertyDescription>>&, class Json::Value const&);
    MCAPI static bool loadPropertyFromJson(struct CustomPropertyDescription&, std::string const&, class Json::Value const&);
};