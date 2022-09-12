#pragma once
#include "CoreMinimal.h"
#include "UIPhase2OverlayTab.h"
#include "Widgets/Layout/Anchors.h"
#include "UIPlayerHud.generated.h"

class UAshenUserWidget;
class UUserWidget;
class UTextBlock;
class UCurveFloat;

UCLASS(Blueprintable, EditInlineNew)
class ASHEN_API UUIPlayerHud : public UUIPhase2OverlayTab {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool TimerPaused;
    
    UPROPERTY(EditAnywhere, Export)
    TWeakObjectPtr<UAshenUserWidget> ExtendedDebugCategoriesRef;
    
    UPROPERTY(EditAnywhere, Export)
    TWeakObjectPtr<UUserWidget> ThrownWeaponReticleRef;
    
    UPROPERTY(EditAnywhere, Export)
    TWeakObjectPtr<UTextBlock> DebugClamberTextRef;
    
    UPROPERTY(EditAnywhere, Export)
    TWeakObjectPtr<UAshenUserWidget> LockonSwitchDebugRef;
    
    UPROPERTY(EditAnywhere, Export)
    TWeakObjectPtr<UUserWidget> DebugInfoViewRef;
    
    UPROPERTY(EditAnywhere, Export)
    TWeakObjectPtr<UUserWidget> LockonReticleRef;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, Transient, meta=(AllowPrivateAccess=true))
    TArray<UAshenUserWidget*> QueuedWidgetsToAdd;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, Transient, meta=(AllowPrivateAccess=true))
    UAshenUserWidget* CurrentWidgetLockOwner;
    
public:
    UUIPlayerHud();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void TriggerScreenFlash(float Duration, float IntialOpacity);
    
    UFUNCTION(BlueprintCallable)
    void ResumePopupLockTimer(float Delay);
    
    UFUNCTION(BlueprintCallable)
    bool RefreshLockTimerIfActive(UAshenUserWidget* WidgetToRegresh);
    
    UFUNCTION(BlueprintCallable)
    void QueueWidgetUpdate(UAshenUserWidget* NewWidget);
    
    UFUNCTION(BlueprintCallable)
    void QueueNullUpdate(float Time);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool PlayAlertFlash(bool ResetAnimation, float NegativeShockIntensity, bool ShowBroadGlowEffect, float PlaybackSpeed);
    
    UFUNCTION(BlueprintCallable)
    void PausePopupLockTimer();
    
    UFUNCTION(BlueprintCallable)
    FAnchors GetLockonReticleFinalScreenAnchor(float TimeSinceLastLockon, UCurveFloat* LerpCurve);
    
    UFUNCTION(BlueprintCallable)
    UAshenUserWidget* GetLockHolder();
    
    UFUNCTION(BlueprintCallable)
    UTextBlock* CreateTextWidget();
    
};

