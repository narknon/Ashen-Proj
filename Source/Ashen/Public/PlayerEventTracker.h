#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "ETrackedPlayerState.h"
#include "PlayerEventsAndStateQuery.h"
#include "ETrackedPlayerEvent.h"
#include "EActionState.h"
#include "RaidenData.h"
#include "AshenDamage.h"
#include "PlayerEventTracker.generated.h"

class UAshenStateSave;
class AAshenBaseGameState;
class UAshenEventData;
class AHero;
class AAction;
class UItemBase;
class UItemEquipment;
class ACreature;
class UItemTable;

UCLASS(Blueprintable)
class ASHEN_API UPlayerEventTracker : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AAshenBaseGameState* GameState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AHero* LocalHero;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAshenStateSave* SaveData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ETrackedPlayerEvent, int32> StoredPlayerEvents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ETrackedPlayerEvent, int32> StoredPlayerEventsOnLastReset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FPlayerEventsAndStateQuery> FireEventsOnQueryValid;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ETrackedPlayerState, bool> StoredPlayerStates;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> PreviousGeneratedNames;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, int32> QuerySuccesses;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, int32> QuerySuccesses_Unsaved;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> CurrentlyActiveQueries;
    
public:
    UPlayerEventTracker();
private:
    UFUNCTION(BlueprintCallable)
    void UpdateSprintTimers(float DeltaTime);
    
    UFUNCTION(BlueprintCallable)
    void UpdateLockon();
    
public:
    UFUNCTION(BlueprintCallable)
    bool UnsavedEventType(ETrackedPlayerEvent Event);
    
    UFUNCTION(BlueprintCallable)
    void TrackState(ETrackedPlayerState StateType, bool StateDesired);
    
    UFUNCTION(BlueprintCallable)
    void TrackQuerySuccesses(FName QueryName, int32 CountRequiredForBroadcast);
    
    UFUNCTION(BlueprintCallable)
    void TrackEvent(ETrackedPlayerEvent EventType, int32 CountRequiredForBroadcast, bool ResetsIncluded);
    
    UFUNCTION(BlueprintCallable)
    FName TrackAQuery(FPlayerEventsAndStateQuery QueryType);
    
    UFUNCTION(BlueprintCallable)
    void StopTrackingAQuery(FName QueryName);
    
    UFUNCTION(BlueprintCallable)
    void SetWeaponDrawnStates();
    
    UFUNCTION(BlueprintCallable)
    void SetupInitualStates();
    
    UFUNCTION(BlueprintCallable)
    void SetPlayerState(ETrackedPlayerState StateType, bool Value);
    
private:
    UFUNCTION(BlueprintCallable)
    void SetCheckedHealthValue(float Value);
    
public:
    UFUNCTION(BlueprintCallable)
    void SaveStoredValue(ETrackedPlayerEvent Event, int32 Count);
    
    UFUNCTION(BlueprintCallable)
    void SaveQuerySuccesses(FName Query, int32 Amount);
    
    UFUNCTION(BlueprintCallable)
    void SaveLastStoredValues();
    
    UFUNCTION(BlueprintCallable)
    void ResetEventOccurances(ETrackedPlayerEvent EventType);
    
    UFUNCTION(BlueprintCallable)
    void ResetAllCounters();
    
    UFUNCTION(BlueprintCallable)
    int32 PlayerEventOccurances(ETrackedPlayerEvent EventType, bool ResetsIncluded);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnSpearAim();
    
public:
    UFUNCTION(BlueprintCallable)
    void OnQuestStateChanged(UAshenEventData* EventData);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnPlayerUseBeltItem(UItemBase* Item);
    
    UFUNCTION(BlueprintCallable)
    void OnPlayerSwitchBeltItem();
    
    UFUNCTION(BlueprintCallable)
    void OnPlayerSprint();
    
    UFUNCTION(BlueprintCallable)
    void OnPlayerEquipRight(UItemEquipment* Item, bool UserDriven);
    
    UFUNCTION(BlueprintCallable)
    void OnPlayerEquipLeft(UItemEquipment* Item, bool UserDriven);
    
    UFUNCTION(BlueprintCallable)
    void OnPlayerDodge();
    
    UFUNCTION(BlueprintCallable)
    void OnPlayerChangeTarget(ACreature* NewTarget);
    
    UFUNCTION(BlueprintCallable)
    void OnPlayerActionChange(const AAction* Action, EActionState Current, EActionState Previous);
    
    UFUNCTION(BlueprintCallable)
    void OnMultiplayerFinialised(UAshenEventData* AshenEventData);
    
    UFUNCTION(BlueprintCallable)
    void OnMultiplayerDisconected(UAshenEventData* AshenEventData);
    
    UFUNCTION(BlueprintCallable)
    void OnMultiplayerAISpawn(UAshenEventData* AshenEventData);
    
    UFUNCTION(BlueprintCallable)
    void OnMultiplayerAIDeSpawn(UAshenEventData* AshenEventData);
    
    UFUNCTION(BlueprintCallable)
    void OnLightingChanged(const FRaidenData& NewData);
    
    UFUNCTION(BlueprintCallable)
    void OnLightAttack();
    
    UFUNCTION(BlueprintCallable)
    void OnItemRemoved(UItemTable* Source, UItemBase* Item);
    
    UFUNCTION(BlueprintCallable)
    void OnItemChanged(UItemTable* Source, UItemBase* Item);
    
    UFUNCTION(BlueprintCallable)
    void OnItemAdded(UItemTable* Source, UItemBase* Item);
    
    UFUNCTION(BlueprintCallable)
    void OnHeroEquipmentStateChange(UItemEquipment* Item);
    
    UFUNCTION(BlueprintCallable)
    void OnHeavyAttack();
    
    UFUNCTION(BlueprintCallable)
    void OnDamageTaken(const FAshenDamage& DamageRef);
    
    UFUNCTION(BlueprintCallable)
    void OnCreatureDeath(UAshenEventData* AshenEventData);
    
public:
    UFUNCTION(BlueprintCallable)
    bool IsPlayerAtState(ETrackedPlayerState StateType);
    
    UFUNCTION(BlueprintCallable)
    TMap<FName, int32> GetTrackedQueriesWCounts();
    
    UFUNCTION(BlueprintCallable)
    TMap<ETrackedPlayerState, bool> GetStatesWValues();
    
    UFUNCTION(BlueprintCallable)
    int32 GetQuerySuccesses(FName Query);
    
    UFUNCTION(BlueprintCallable)
    TMap<ETrackedPlayerEvent, int32> GetEventsWCounts(bool ResetsIncluded);
    
    UFUNCTION(BlueprintCallable)
    void ClearQuerySuccesses();
    
    UFUNCTION(BlueprintCallable)
    void ClearQuerySuccessCategory(FName Query);
    
    UFUNCTION(BlueprintCallable)
    bool CheckTrackedQueryValidity(FName QueryName);
    
    UFUNCTION(BlueprintCallable)
    bool CheckQueryValidity(FPlayerEventsAndStateQuery Query);
    
    UFUNCTION(BlueprintCallable)
    bool CapEventCountAt1(ETrackedPlayerEvent Event);
    
    UFUNCTION(BlueprintCallable)
    void BumpQuerySuccesses(FName Query, bool SavedType);
    
    UFUNCTION(BlueprintCallable)
    void BumpPlayerEventOccurance(ETrackedPlayerEvent EventType);
    
};

