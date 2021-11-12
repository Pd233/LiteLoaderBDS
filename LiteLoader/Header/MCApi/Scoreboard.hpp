// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
class Scoreboard {
public:
    virtual ~Scoreboard();
    virtual class DisplayObjective const* setDisplayObjective(std::string const&, class Objective const&, int /*enum ObjectiveSortOrder*/);
    virtual class Objective* clearDisplayObjective(std::string const&);
    virtual void unk_vfn_3();
    virtual void unk_vfn_4();
    virtual void unk_vfn_5();
    virtual void unk_vfn_6();
    virtual void onObjectiveRemoved(class Objective&);
    virtual void onScoreChanged(struct ScoreboardId const&, class Objective const&);
    virtual void unk_vfn_9();
    virtual void unk_vfn_10();
    virtual void unk_vfn_11();
    virtual void unk_vfn_12();
    virtual void unk_vfn_13();
    virtual void unk_vfn_14();
    virtual void unk_vfn_15();

public:
    MCAPI class Objective* addObjective(std::string const&, std::string const&, class ObjectiveCriteria const&);
    MCAPI void addScoreListener(class Player&, std::string const&);
    MCAPI int applyPlayerOperation(bool&, std::vector<struct ScoreboardId>&, struct ScoreboardId const&, class Objective&, std::vector<struct ScoreboardId>&, class Objective&, enum CommandOperator);
    MCAPI class ObjectiveCriteria* getCriteria(std::string const&) const;
    MCAPI std::vector<std::string> getCriteriaNames() const;
    MCAPI std::vector<struct PlayerScore> getDisplayInfoFiltered(std::string const&) const;
    MCAPI class DisplayObjective const* getDisplayObjective(std::string const&) const;
    MCAPI std::vector<struct ScoreInfo> getIdScores(struct ScoreboardId const&) const;
    MCAPI class Objective* getObjective(std::string const&) const;
    MCAPI std::vector<std::string> getObjectiveNames() const;
    MCAPI std::vector<class Objective const*> getObjectives() const;
    MCAPI struct ScoreboardId const& getScoreboardId(std::string const&) const;
    MCAPI struct ScoreboardId const& getScoreboardId(class Actor const&) const;
    MCAPI struct ScoreboardId const& getScoreboardId(class Player const&) const;
    MCAPI class ScoreboardIdentityRef* getScoreboardIdentityRef(struct ScoreboardId const&);
    MCAPI std::vector<class ScoreboardIdentityRef> getScoreboardIdentityRefs() const;
    MCAPI std::vector<struct ScoreboardId> getTrackedIds() const;
    MCAPI bool hasIdentityFor(struct ScoreboardId const&) const;
    MCAPI int modifyPlayerScore(bool&, struct ScoreboardId const&, class Objective&, int, enum PlayerScoreSetFunction);
    MCAPI class ScoreboardIdentityRef const& registerScoreboardIdentity(struct ScoreboardId const&, struct ActorUniqueID const&);
    MCAPI class ScoreboardIdentityRef const& registerScoreboardIdentity(struct ScoreboardId const&, struct PlayerScoreboardId const&);
    MCAPI class ScoreboardIdentityRef const& registerScoreboardIdentity(struct ScoreboardId const&, std::string const&);
    MCAPI class ScoreboardIdentityRef const& registerScoreboardIdentity(class CompoundTag const&);
    MCAPI bool removeObjective(class Objective*);
    MCAPI void removeScoreListener(class Player&);
    MCAPI void removeScoreListener(class Player&, std::string const&);
    MCAPI void resetPlayerScore(struct ScoreboardId const&);
    MCAPI void resetPlayerScore(struct ScoreboardId const&, class Objective&);

    MCAPI static std::string const DEFAULT_CRITERIA;
    MCAPI static std::string const DISPLAY_SLOT_BELOWNAME;
    MCAPI static std::string const DISPLAY_SLOT_LIST;
    MCAPI static std::string const DISPLAY_SLOT_SIDEBAR;
    MCAPI static char const* OBJECTIVES_ENUM;
    MCAPI static bool shouldClearScoresOnDeath(class Actor const&);

private:
    MCAPI struct ScoreboardId const& _getOrCreatePlayerId(class Player&);
    MCAPI void _init();
};