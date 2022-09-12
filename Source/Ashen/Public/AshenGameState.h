#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "AshenBaseGameState.h"
#include "OnNpcAquisitionPointsGainedDelegate.h"
#include "CooperativeInteractionDescription.h"
#include "ENpcType.h"
#include "QuestConditionalLevel.h"
#include "Engine/DataTable.h"
#include "OnAttemptMultiplayerActionDelegate.h"
#include "ECooperativeInteractionType.h"
#include "ECreatureEventType.h"
#include "AshenGameState.generated.h"

class AHero;
class AAshenGameMode;
class ACorpseRunLoot;
class ACreature;
class UAshenEventData;

UCLASS(Blueprintable)
class ASHEN_API AAshenGameState : public AAshenBaseGameState {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AHero* RemoteHero;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AHero* ExtraHero;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AAshenGameMode* AshenGameMode;
    
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MatchmakingRetryFrequency;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DisconnectDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float UnmetDisconnectDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DisconnectDistanceTimeLimit;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FQuestConditionalLevel> QuestConditionalLevels;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ProgressToUnlockNPCInMap;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle TownDiscoveryRow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ENpcType FallbackMultiplayerNpc;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ENpcType CurrentMultiplayerNpc;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ENpcType MultiplayerNpcOverride;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnAttemptMultiplayerAction AttemptMultiplayerActionBypass;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnNpcAquisitionPointsGained OnNpcAquisitionPointsGained;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsNpcAcquisitionEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float NpcAcquiredThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float NpcAcquiredRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float NpcAcquiredWalkingRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float NpcAcquiredWalkingSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TravelingDistanceThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float NpcAcquiredTravelingAmount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float NpcAcquiredMeetingUpDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float NpcAcquiredMeetingUpAmount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float NpcAcquiredCoopDoorOpenAmount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float NpcAcquiredTownAmount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float NpcAcquiredSavedHeroAmount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float NpcAcquiredSharedWaterAmount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float NpcAcquiredSavedHealthPercentage;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ECooperativeInteractionType, FCooperativeInteractionDescription> CooperativeInteractionsMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ACorpseRunLoot> CorpseRunClass;
    
public:
    AAshenGameState();
private:
    UFUNCTION(BlueprintCallable)
    void ResetNpcAcquiredProgress(bool HasRemoteHero);
    
public:
    UFUNCTION(BlueprintCallable)
    void OnNetworkMessage(AAshenGameMode* Source, const FString& Message);
    
    UFUNCTION(BlueprintCallable)
    void OnCreatureCoopEvent(ACreature* Creature, ECreatureEventType Event);
    
    UFUNCTION(BlueprintCallable)
    void OnCooperativeInteraction(ECooperativeInteractionType InteractionType, ACreature* Creature);
    
    UFUNCTION(BlueprintCallable)
    void OnAshenEvent(UAshenEventData* EventData);
    
    UFUNCTION(BlueprintCallable)
    float GetNpcAcquiredProgressAsPercentage(ENpcType NPCTypeName);
    
    UFUNCTION(BlueprintCallable)
    AHero* GetCreatureAsHero(ACreature* Creature);
    
    UFUNCTION(BlueprintCallable)
    void DebugAddNpcAcquiredProgress(ENpcType Type, float Amount);
    
    UFUNCTION(BlueprintCallable)
    void DebugAcquireNpc(ENpcType NPC);
    
    UFUNCTION(BlueprintCallable, Exec)
    void AshenToggleVillagerAcqusitionDebug();
    
    UFUNCTION(BlueprintCallable, Exec)
    void AshenToggleMultiplayerTriggerDebug();
    
    UFUNCTION(BlueprintCallable, Exec)
    void AshenToggleLevelStreamingDebug();
    
    UFUNCTION(BlueprintCallable, Exec)
    void AshenToggleCombatEngagementDebug();
    
    UFUNCTION(BlueprintCallable)
    bool AddNpcAcquiredProgressIfInRange(float Amount, float Range, const FString& SourceDebugMessage);
    
    UFUNCTION(BlueprintCallable)
    void AddNpcAcquiredProgress(float Amount, const FString& SourceDebugMessage, bool ForceAdd);
    
};

