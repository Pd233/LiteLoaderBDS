// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
class GoalDefinition {

public:
    MCAPI enum POIType _getPOITypeFromString(std::string);
    MCAPI struct GoalDefinition& operator=(struct GoalDefinition const&);
    MCAPI struct GoalDefinition& operator=(struct GoalDefinition&&);
    MCAPI bool parse(struct ConstDeserializeDataParams const&, int);

    MCAPI static std::unique_ptr<class Goal> CreateGoal(class Mob&, struct GoalDefinition const&);
    MCAPI static bool GoalExists(std::string const&);
    MCAPI static void init();
    MCAPI static void shutdown();
};