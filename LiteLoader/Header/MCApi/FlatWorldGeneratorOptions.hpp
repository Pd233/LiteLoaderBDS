// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
class FlatWorldGeneratorOptions {

public:
    MCAPI static class Json::Value getLayers(enum WorldVersion, class LevelData const&);

protected:
    MCAPI bool _load(class Json::Value const&, class BlockPalette const&, class LevelData const&);
};