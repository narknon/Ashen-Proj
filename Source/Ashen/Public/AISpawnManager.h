#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "UObject/Object.h"
#include "QuestStateTagCondition.h"
#include "AISoftRespawnRules.h"
#include "ENetworkCreation.h"
#include "AIFollowerWeaponChoice.h"
#include "AIFollowerAssetWrapper.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "AISpawnerNetworkStatePack.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "GameplayTagContainer.h"
#include "AISpawnManager.generated.h"

class UCurveFloat;
class ACreature;
class UAICreaturePoolManager;
class AAIClamberNavLink;
class AAIHeroFollower;
class AAIJumpClamberNavLink;
class AAISpawnBase;
class AAIJumpNavLink;
class AWorldTravelPoint;
class AHero;
class AWaterPool;
class AAIFollowerMarker;
class ULevel;
class AAIFollowerBeacon;

UCLASS(Blueprintable)
class ASHEN_API UAISpawnManager : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SyncMinHeroDist;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SyncDeathOwnerDist;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxTransientClamberLinks;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxTransientJumpLinks;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxTransientJumpClamberLinks;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAISoftRespawnRules SoftRespawnRules;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FQuestStateTagCondition MinFollowerQuestState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAIFollowerAssetWrapper> AIFollowers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAIFollowerWeaponChoice> AIFollowerWeaponPool;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FollowerSpawnDeathCooldown;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FollowerSpawnMinTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FollowerMinLifeTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FollowerSaveStoneActivateSpawnTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FollowerRetryRollSpawnTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* FollowerSaveStoneSpawnRoll;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FollowerSaveStoneZMod;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D FollowerSpawnOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FollowerDespawnDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FollowerTeleportDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FollowerDespawnAtDistanceTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnableDeferCreatureUnload;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DeferCreatureUnloadTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UAICreaturePoolManager> PoolManagerClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDisablePoolForEditor;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UAICreaturePoolManager* AICreaturePoolManagerInstance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AAIHeroFollower* ActiveAIFollower;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FSoftObjectPath> AssetsLoading;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<TSoftClassPtr<UObject>> AssetsToLoad;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<AAISpawnBase*> ChunkNoSyncCompleted;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<AAISpawnBase*> ChunkSyncCompleted;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FGuid, AAISpawnBase*> ChunkSyncPending;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<AAISpawnBase*> ChunkSpawnCompleted;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<AAISpawnBase*> ChunkSpawnPending;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<AAISpawnBase*> WaitList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<AAISpawnBase*> RespawnList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FGuid, AAISpawnBase*> PendingResolvePostSyncWaitList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FGuid, AAISpawnBase*> UnresolvedPostSyncWaitList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<AAISpawnBase*> DebugDynamicSpawners;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FGuid, AAISpawnBase*> ActiveSpawners;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FGuid> RemoteSyncPending;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FAISpawnerNetworkStatePack> PostSyncClientStatePacks;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<AAIClamberNavLink*> ClamberNavLinks;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<AAIClamberNavLink*> TransientClamberNavLinks;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<AAIJumpNavLink*> JumpNavLinks;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<AAIJumpNavLink*> TransientJumpNavLinks;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<AAIJumpClamberNavLink*> JumpClamberNavLinks;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<AAIJumpClamberNavLink*> TransientJumpClamberNavLinks;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<AWorldTravelPoint*> SavePoints;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<AWaterPool*> WaterPools;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<AAIFollowerMarker*> FollowerMarkers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<ACreature*> DeferedDestructionList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<ACreature*> WokenCreatureList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<AAIHeroFollower> PreloadingFollowerAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TSubclassOf<AAIHeroFollower> PreloadedFollowerAsset;
    
public:
    UAISpawnManager();
    UFUNCTION(BlueprintCallable)
    AAIHeroFollower* SpawnAIFollower(const FVector& AtLocation, const FRotator& AtRotation, TSoftClassPtr<AAIHeroFollower> FollowerClass, AAIFollowerBeacon* FromBeacon, int32 ForceWeaponIndex, bool bForceCopyPlayerRelic);
    
    UFUNCTION(BlueprintCallable)
    void RegisterSpawner(AAISpawnBase* Spawner);
    
    UFUNCTION(BlueprintCallable)
    void PlayerLeftPuzzleTrigger(AHero* Player);
    
    UFUNCTION(BlueprintCallable)
    void PlayerEnteredPuzzleTrigger(AHero* Player);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnAssetsLoaded();
    
public:
    UFUNCTION(BlueprintCallable)
    void DeSpawnAIFollower();
    
    UFUNCTION(BlueprintCallable)
    AAISpawnBase* DebugCreateAISpawner(TSubclassOf<AAISpawnBase> SpawnerClass, FVector Location, FRotator Rotation);
    
protected:
    UFUNCTION(BlueprintCallable)
    void CreateAIActor(UClass* ActorClass, ULevel* Outer, AAISpawnBase* Spawner, FVector Location, FRotator Rotation, ENetworkCreation NetworkCreationOverride, FGuid GuidOverride, FGameplayTag TagOverride, ACreature*& Creature, bool& ConstructionComplete);
    
};

