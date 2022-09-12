#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "AshenBasePlayerController.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "InputCoreTypes.h"
#include "EFeedbackInput.h"
#include "ERewardType.h"
#include "AshenPlayerController.generated.h"

class UForceFeedbackEffect;
class UCurveVector;
class AHero;
class UAshenUserWidget;
class UUIRewardQueue;
class UUIPhase2OverlayMenu;
class UInteractiveQueueComponent;
class AAshenBaseGameState;
class ACreature;
class UItemBase;

UCLASS(Blueprintable)
class ASHEN_API AAshenPlayerController : public AAshenBasePlayerController {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FCameraInputDelegate, float, PitchInput, float, YawInput);
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UUIPhase2OverlayMenu* PlayerHudUi;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UUIRewardQueue* QuestRewardQueue;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SoftLockOnMaxTargetDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SoftLockOnMaxStrafeDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SoftLockOnStrafeRotationSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SoftLockOnInterpSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SoftLockOnMaxScreenPercentage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SoftLockOnIntervalTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSoftLockOnEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AdventureCamInterpSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AdventureCamForwardDeadZoneAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AdventureCamBackwardDeadZoneAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRotator AdventureCamRelativeRotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AdventureCamRunTimeThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AdventureCamZoomSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AdventureCamTargetArmLength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnableAdventureCamZoom;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnableSprintAdventureCam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnableRunAdventureCam;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool UICancelHappenedThisFrame;
    
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCameraInputDelegate OnCameraInput;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BaseTurnRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BaseLookUpRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UAshenUserWidget* InteractiveMessageWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UAshenUserWidget* BossBar;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UInteractiveQueueComponent* InteractiveQueueReference;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UForceFeedbackEffect*> ForceFeedbackEffects;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bTitleCardVisible;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDisableForceFeedback;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UAshenUserWidget> InventoryClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UAshenUserWidget> InteractMenuClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UAshenUserWidget> BossBarClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UAshenUserWidget> OptionsMenuClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UAshenUserWidget> TransitionInClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UAshenUserWidget> DeathCardClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UAshenUserWidget> EmoteRadialMenuClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinimumCameraShakeEffectSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FeedbackCameraShakeAmount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector FeedbackCameraShakeVector;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LockOnBreakDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinLockOnDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LockOnCameraDistanceBias;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LockOnCatchDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LockOnMaximumFacingAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LockOnCameraZOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LockOnCameraSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LockOnCameraRotationSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinLockOnCameraPitchClamp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxLockOnCameraPitchClamp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinLockOnCameraPitchDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxLockOnCameraPitchDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LockOnChangeTargetInputThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LockOnChangeTargetDeadzoneThreshold_Keyboard;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsLockedOn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float JumpDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RollDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SprintDrainDelay;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float EmoteDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxEmoteCharges;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float EmoteRechargeRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float EmoteWaveExpirationTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CinematicSkippingTimeThreshold;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ControlDirectionAverageTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float KeyboardMovementFlipAccetableLimit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CamYawInput;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CamPitchInput;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bBlockingPressed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float QueuedInputBufferTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AHero* ControlledHero;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AAshenBaseGameState* GameState;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float IdleTimeSitDownThreshold;
    
public:
    AAshenPlayerController();
    UFUNCTION(BlueprintCallable)
    void UpdateDoublePressInputs(float DeltaTime);
    
    UFUNCTION(BlueprintCallable)
    void UI_DisplayTravelMap(const FKey Key);
    
    UFUNCTION(BlueprintCallable)
    void UI_DisplayOptions(const FKey Key);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void TickInteractiveWidget(float DeltaTime);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SwitchConsumablePrevious_BP();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SwitchConsumable_BP();
    
public:
    UFUNCTION(BlueprintCallable)
    void ShowStoredBossDefeatedText();
    
    UFUNCTION(BlueprintCallable)
    void ShowQuestStartedNotification(FText QuestName);
    
    UFUNCTION(BlueprintCallable)
    void ShowQuestCompleteNotification(FText QuestName);
    
    UFUNCTION(BlueprintCallable)
    void ShowBossDefeatedText(float DelayTime);
    
    UFUNCTION(BlueprintCallable)
    void ShowBossBar(ACreature* Boss);
    
    UFUNCTION(BlueprintCallable)
    void SetupDoublePressArrays();
    
    UFUNCTION(BlueprintCallable)
    void SetSoftLockOnEnabled(bool bEnabled);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetBossBarVisibility(bool Visible);
    
    UFUNCTION(BlueprintCallable)
    void SendFeedbackImpulseRanged(EFeedbackInput Input, FVector SenderLocation, float DistanceThreshold);
    
    UFUNCTION(BlueprintCallable)
    void SendFeedbackImpulse(EFeedbackInput Input);
    
    UFUNCTION(BlueprintCallable)
    void RefreshInventoryUI();
    
    UFUNCTION(BlueprintCallable)
    void PopInteractive();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayerDeathEvent();
    
    UFUNCTION(BlueprintCallable)
    void OnPlayerDeath();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSoftLockOnEnabled() const;
    
    UFUNCTION(BlueprintCallable)
    bool IsCreatureAllowedInput();
    
    UFUNCTION(BlueprintCallable)
    FText GetCurrentBossDisplayName();
    
    UFUNCTION(BlueprintCallable)
    void FeedbackShakePlayerCamera(UCurveVector* ShakeVector);
    
    UFUNCTION(BlueprintCallable)
    bool DoublePressMade(bool FowardDir, float AxisValue);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void DelayedUiQuestReward(ERewardType Type, int32 Amount, float Time, UItemBase* Item, TSubclassOf<UItemBase> CraftUnlockClass);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CycleWeapon_BP();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CycleOffHand_BP();
    
public:
    UFUNCTION(BlueprintCallable)
    void ClientLog(const FString& Message);
    
    UFUNCTION(BlueprintCallable)
    void ApplyForceFeedbackFromAsset(UForceFeedbackEffect* Effect);
    
    UFUNCTION(BlueprintCallable)
    void AddUiQuestReward(ERewardType RewardType, int32 RewardAmount, UItemBase* ItemReward, TSubclassOf<UItemBase> CraftUnlockClass);
    
};

