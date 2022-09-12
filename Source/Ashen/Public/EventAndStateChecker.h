#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "ECheckerCategory.h"
#include "PlayerEventsAndStateQuery.h"
#include "ETrackedPlayerState.h"
#include "ETrackedPlayerEvent.h"
#include "EventAndStateChecker.generated.h"

class UAshenStateSave;
class AAshenBaseGameState;
class UEventAndStateChecker;
class UPlayerEventTracker;
class UAshenGameInstance;
class UPlayerQueryEvent;
class UAshenEventData;

UCLASS(Blueprintable)
class ASHEN_API UEventAndStateChecker : public UObject {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnEventStateCheckComplete, UEventAndStateChecker*, CheckerRefrence);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnEventStateCheckComplete OnCompleted;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Active;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Active_IfNotOnCoolDown;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float OnCompleteCoolDownTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ActiveChecker;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Priority;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPlayerEventsAndStateQuery CheckerActiveFor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECheckerCategory CheckerCategory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> TrackedQueries;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AAshenBaseGameState* GameStateRef;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPlayerEventTracker* PlayerEventTracker;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CleanupAfterCompletedXTimes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PriorityModifier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAshenStateSave* AshenStateSaveData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAshenGameInstance* AshenGameInstance;
    
public:
    UEventAndStateChecker();
protected:
    UFUNCTION(BlueprintCallable)
    FName TrackAQuery(FPlayerEventsAndStateQuery Query);
    
    UFUNCTION(BlueprintCallable)
    void StopTrackingAQuery(FName Query);
    
public:
    UFUNCTION(BlueprintCallable)
    void Setup(AAshenBaseGameState* BaseState, ECheckerCategory Category);
    
protected:
    UFUNCTION(BlueprintCallable)
    void SetPriorityModifier(int32 Modifier);
    
public:
    UFUNCTION(BlueprintCallable)
    void SetActive(bool _Active);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void QuerySuccessCallback(FName Query, int32 Amount, bool UnSavedType);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void QueryCallback(UPlayerQueryEvent* Data);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool PreSetActiveCheck(bool CurrentValue);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayerStateCallback(ETrackedPlayerState State, bool Value);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayerEventCallback(ETrackedPlayerEvent Event, int32 Amount);
    
public:
    UFUNCTION(BlueprintCallable)
    void OnTrackedQuerySucessCallback(UAshenEventData* Data);
    
    UFUNCTION(BlueprintCallable)
    void OnTrackedQueryCallback(UAshenEventData* Data);
    
    UFUNCTION(BlueprintCallable)
    void OnTrackedPlayerStateCallback(UAshenEventData* Data);
    
    UFUNCTION(BlueprintCallable)
    void OnTrackedPlayerEventCallback(UAshenEventData* Data);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Initialise(UPlayerEventTracker* Tracker);
    
public:
    UFUNCTION(BlueprintCallable)
    int32 GetPriority();
    
    UFUNCTION(BlueprintCallable)
    FName GetName();
    
    UFUNCTION(BlueprintCallable)
    ECheckerCategory GetCategory();
    
    UFUNCTION(BlueprintCallable)
    void CoolOffTimeCompleted();
    
    UFUNCTION(BlueprintCallable)
    void CoolOff(float CoolOffTime);
    
    UFUNCTION(BlueprintCallable)
    void Complete();
    
    UFUNCTION(BlueprintCallable)
    void CleanUp();
    
    UFUNCTION(BlueprintCallable)
    bool AssosiatedTaskIsReady();
    
};

