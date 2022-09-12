#include "AISpawnBase.h"

class ACreature;
class AAITrigger;

void AAISpawnBase::OnGenericWakeTrigger(ACreature* Creature, AAITrigger* Trigger) {
}

AAISpawnBase::AAISpawnBase() {
    this->InstancedCreature = NULL;
    this->AIGroup = NULL;
    this->bRegisterOnBeginPlay = true;
    this->bSnapSpawnToGrounded = true;
    this->bRandomiseAnimationStartOffset = true;
    this->bDisableOnXboxOne = false;
    this->bOverrideSleepSettings = false;
    this->bResetSleepOnCinematics = true;
    this->OverrideSleepWakeZScale = 1.00f;
    this->OverrideForceSleepCheckRange = 10000.00f;
    this->NetworkCreationOverride = ENetworkCreation::SyncOrReplicateIfHost;
    this->bWhitelistRequireAll = false;
    this->bBlacklistRequireAll = false;
    this->bQuestChangeRequiresLevelReload = true;
    this->bQuestDestroyCreatureWhenSleeping = true;
    this->OverrideBehaviorTree = NULL;
    this->TimeSyncedPath = NULL;
    this->bTimeSyncedPathPreferRun = false;
    this->LeashToSpawnerDistance = 7500.00f;
    this->LeashToSpawnerUnengagedDistance = 5000.00f;
    this->LeashToSpawnerPrediction = 1.00f;
    this->LeashToSpawnerRangeChaseTime = 30.00f;
    this->LeashHostileBreakDistance = 1000.00f;
    this->LeashHostileBreakPrediction = 1.00f;
    this->LeashHostileBreakMinTime = 1.00f;
    this->LeashDisengageEndDistance = 1500.00f;
    this->LeashDisengageEndPrediction = 2.00f;
    this->bDisableGroupLeashing = false;
    this->bAllyAlertOverride = false;
    this->bAllyAlertPlayAnimations = false;
    this->bAllyAlertUnlimitedRange = false;
    this->AllyAlertDelay = 0.00f;
    this->CreatureEngageRange = 0.00f;
    this->bOverrideSoftRespawnRules = false;
    this->MinVisibleSafeSyncDistanceLocal = 2000.00f;
    this->MinVisibleSafeSyncDistanceRemote = 3000.00f;
    this->SpawnManager = NULL;
}

