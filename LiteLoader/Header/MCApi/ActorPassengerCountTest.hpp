// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
class ActorPassengerCountTest : public FilterTest {
public:
    virtual ~ActorPassengerCountTest();
    virtual bool evaluate(struct FilterContext const&);
    virtual void finalizeParsedValue(class IWorldRegistriesProvider&);
    virtual class gsl::basic_string_span<char const, -1> getName();
    virtual class Json::Value _serializeValue();
};