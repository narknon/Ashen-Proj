#include "AISpawnManager.h"
#include "Templates/SubclassOf.h"

class ULevel;
class AAISpawnBase;
class AAIHeroFollower;
class AHero;
class AAIFollowerBeacon;
class ACreature;

AAIHeroFollower* UAISpawnManager::SpawnAIFollower(const FVector& AtLocation, const FRotator& AtRotation, TSoftClassPtr<AAIHeroFollower> FollowerClass, AAIFollowerBeacon* FromBeacon, int32 ForceWeaponIndex, bool bForceCopyPlayerRelic) {
    return NULL;
}

void UAISpawnManager::RegisterSpawner(AAISpawnBase* Spawner) {
}

void UAISpawnManager::PlayerLeftPuzzleTrigger(AHero* Player) {
}

void UAISpawnManager::PlayerEnteredPuzzleTrigger(AHero* Player) {
}

void UAISpawnManager::OnAssetsLoaded() {
}

void UAISpawnManager::DeSpawnAIFollower() {
}

AAISpawnBase* UAISpawnManager::DebugCreateAISpawner(TSubclassOf<AAISpawnBase> SpawnerClass, FVector Location, FRotator Rotation) {
    return NULL;
}

void UAISpawnManager::CreateAIActor(UClass* ActorClass, ULevel* Outer, AAISpawnBase* Spawner, FVector Location, FRotator Rotation, ENetworkCreation NetworkCreationOverride, FGuid GuidOverride, FGameplayTag TagOverride, ACreature*& Creature, bool& ConstructionComplete) {
}

UAISpawnManager::UAISpawnManager() {
    this->SyncMinHeroDist = 1000.00f;
    this->SyncDeathOwnerDist = 1000.00f;
    this->MaxTransientClamberLinks = 20;
    this->MaxTransientJumpLinks = 30;
    this->MaxTransientJumpClamberLinks = 30;
    this->FollowerSpawnDeathCooldown = 0.00f;
    this->FollowerSpawnMinTime = 120.00f;
    this->FollowerMinLifeTime = 180.00f;
    this->FollowerSaveStoneActivateSpawnTime = 5.00f;
    this->FollowerRetryRollSpawnTime = 30.00f;
    this->FollowerSaveStoneSpawnRoll = NULL;
    this->FollowerSaveStoneZMod = 0.50f;
    this->FollowerDespawnDistance = 6000.00f;
    this->FollowerTeleportDistance = 3000.00f;
    this->FollowerDespawnAtDistanceTime = 10.00f;
    this->bEnableDeferCreatureUnload = true;
    this->DeferCreatureUnloadTime = 0.10f;
    this->PoolManagerClass = NULL;
    this->bDisablePoolForEditor = true;
    this->AICreaturePoolManagerInstance = NULL;
    this->ActiveAIFollower = NULL;
    this->PreloadedFollowerAsset = NULL;
}

