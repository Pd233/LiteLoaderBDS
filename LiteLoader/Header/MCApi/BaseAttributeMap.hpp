// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
class BaseAttributeMap {

public:
    MCAPI class std::_List_iterator<class std::_List_val<struct std::_List_simple_types<struct std::pair<unsigned int const, class AttributeInstance>>>> begin();
    MCAPI void clearDirtyAttributes();
    MCAPI class std::_List_iterator<class std::_List_val<struct std::_List_simple_types<struct std::pair<unsigned int const, class AttributeInstance>>>> end();
    MCAPI std::vector<class AttributeInstanceHandle> const& getDirtyAttributes();
    MCAPI class AttributeInstance const& getInstance(class Attribute const&) const;
    MCAPI class AttributeInstance const& getInstance(unsigned int) const;
    MCAPI class AttributeInstance* getMutableInstance(class Attribute const&);
    MCAPI class AttributeInstance* getMutableInstance(class HashedString const&);
    MCAPI class AttributeInstance* getMutableInstance(unsigned int);
    MCAPI std::vector<class AttributeInstanceHandle> getSyncableAttributes() const;
    MCAPI void onAttributeModified(class AttributeInstance const&);
    MCAPI class AttributeInstance& registerAttribute(class Attribute const&);

private:
    MCAPI static class AttributeInstance mInvalidInstance;
};