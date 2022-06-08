// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class Scheduler {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SCHEDULER
public:
    class Scheduler& operator=(class Scheduler const &) = delete;
    Scheduler(class Scheduler const &) = delete;
    Scheduler() = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_SCHEDULER
public:
#endif
    MCAPI Scheduler(std::string, unsigned int);
    MCAPI void changeThread(class std::thread::id);
    MCAPI class WorkerPool & getCoroutinePool();
    MCAPI void processCoroutines(class std::chrono::duration<__int64, struct std::ratio<1, 1000000000>>, class std::chrono::duration<__int64, struct std::ratio<1, 1000000000>>);
    MCAPI void queueCallback(class std::shared_ptr<class BackgroundTaskBase>);
    MCAPI void setTargetFPS(unsigned int);
    MCAPI static float const AVERAGE_TASK_TOLERANCE;



};