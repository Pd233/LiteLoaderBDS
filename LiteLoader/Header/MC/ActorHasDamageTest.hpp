// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#include "FilterTest.hpp"
#define EXTRA_INCLUDE_PART
#include "Extra/ActorHasDamageTestAPI.hpp"
#undef EXTRA_INCLUDE_PART
class ActorHasDamageTest : public FilterTest {
#include "Extra/ActorHasDamageTestAPI.hpp"
public:
    virtual ~ActorHasDamageTest();
    virtual bool evaluate(struct FilterContext const&);
    virtual void finalizeParsedValue(class IWorldRegistriesProvider&);
    virtual class gsl::basic_string_span<char const, -1> getName();
    virtual class Json::Value _serializeValue();
};