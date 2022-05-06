// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class TemporalAttributeBuff {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_TEMPORALATTRIBUTEBUFF
public:
    class TemporalAttributeBuff& operator=(class TemporalAttributeBuff const &) = delete;
    TemporalAttributeBuff() = delete;
#endif

public:
    /*0*/ virtual ~TemporalAttributeBuff();
    /*1*/ virtual void __unk_vfn_1();
    /*2*/ virtual bool isSerializable() const;
    /*3*/ virtual void setDurationAmplifier(class std::shared_ptr<class Amplifier>);
    /*4*/ virtual bool shouldBuff() const;
    /*5*/ virtual bool isComplete() const;
    /*
    inline bool isInstantaneous() const{
        bool (TemporalAttributeBuff::*rv)() const;
        *((void**)&rv) = dlsym("?isInstantaneous@TemporalAttributeBuff@@UEBA_NXZ");
        return (this->*rv)();
    }
    inline  ~TemporalAttributeBuff(){
         (TemporalAttributeBuff::*rv)();
        *((void**)&rv) = dlsym("??1TemporalAttributeBuff@@UEAA@XZ");
        return (this->*rv)();
    }
    */
    MCAPI TemporalAttributeBuff(class TemporalAttributeBuff const &);
    MCAPI TemporalAttributeBuff(float, int, enum AttributeBuffType, bool, std::string const &);
    MCAPI float getBaseAmount() const;
    MCAPI int getDuration() const;
    MCAPI int getLifeTimer() const;
    MCAPI void serializationSetLifeTime(int);
    MCAPI void tick();

protected:

private:

};