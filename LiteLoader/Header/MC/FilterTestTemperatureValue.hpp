// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "FilterTest.hpp"
#include "Json.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class FilterTestTemperatureValue : public FilterTest {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_FILTERTESTTEMPERATUREVALUE
public:
    class FilterTestTemperatureValue& operator=(class FilterTestTemperatureValue const &) = delete;
    FilterTestTemperatureValue(class FilterTestTemperatureValue const &) = delete;
    FilterTestTemperatureValue() = delete;
#endif

public:
    /*0*/ virtual ~FilterTestTemperatureValue();
    /*2*/ virtual bool evaluate(struct FilterContext const &) const;
    /*4*/ virtual class gsl::basic_string_span<char const, -1> getName() const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_FILTERTESTTEMPERATUREVALUE
public:
#endif



};