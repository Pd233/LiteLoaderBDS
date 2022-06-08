// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class DelayRequest {

#define AFTER_EXTRA

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_DELAYREQUEST
public:
    class DelayRequest& operator=(class DelayRequest const &) = delete;
    DelayRequest(class DelayRequest const &) = delete;
    DelayRequest() = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_DELAYREQUEST
#endif
    MCAPI DelayRequest(std::unique_ptr<class IRequestAction>, unsigned __int64);
    MCAPI void executeAction(class ServerLevel &, class Dimension &);
    MCAPI class gsl::not_null<class IRequestAction *> getAction() const;
    MCAPI unsigned __int64 getTickToExecuteOn() const;
    MCAPI bool operator>(class DelayRequest const &) const;
    MCAPI ~DelayRequest();

protected:

private:

};