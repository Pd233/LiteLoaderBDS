// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class OwnerStorageFeature {

#define AFTER_EXTRA

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_OWNERSTORAGEFEATURE
public:
    class OwnerStorageFeature& operator=(class OwnerStorageFeature const &) = delete;
    OwnerStorageFeature(class OwnerStorageFeature const &) = delete;
    OwnerStorageFeature() = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_OWNERSTORAGEFEATURE
#endif

protected:
    MCAPI OwnerStorageFeature(class OwnerStorageFeature &&);
    MCAPI OwnerStorageFeature(enum OwnerStorageFeature::VariadicInit, class FeatureRegistry &);
    MCAPI bool _hasValue() const;
    MCAPI ~OwnerStorageFeature();

private:

};