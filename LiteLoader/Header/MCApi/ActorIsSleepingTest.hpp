// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
class ActorIsSleepingTest : public FilterTest {
public:
    virtual ~ActorIsSleepingTest();
    virtual bool evaluate(struct FilterContext const&);
    virtual void finalizeParsedValue(class IWorldRegistriesProvider&);
    virtual class gsl::basic_string_span<char const, -1> getName();
};