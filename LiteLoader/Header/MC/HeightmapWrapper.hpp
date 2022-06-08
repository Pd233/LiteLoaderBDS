// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class HeightmapWrapper {

#define AFTER_EXTRA

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_HEIGHTMAPWRAPPER
public:
    class HeightmapWrapper& operator=(class HeightmapWrapper const &) = delete;
    HeightmapWrapper(class HeightmapWrapper const &) = delete;
    HeightmapWrapper() = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_HEIGHTMAPWRAPPER
public:
#endif
    MCAPI bool empty() const;
    MCAPI short getHeightAt(class Pos const &) const;
    MCAPI static class HeightmapWrapper create(std::vector<short> const *, short);



};