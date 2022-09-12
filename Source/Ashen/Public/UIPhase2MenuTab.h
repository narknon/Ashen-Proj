#pragma once
#include "CoreMinimal.h"
#include "AshenUserWidget.h"
#include "OverlayTabStartedClosingDelegateDelegate.h"
#include "UITutorialData.h"
#include "OverlayTabClosedDelegateDelegate.h"
#include "EInputUIEventTypes.h"
#include "Styling/SlateTypes.h"
#include "UObject/NoExportTypes.h"
#include "EUITutorialName.h"
#include "Components/SlateWrapperTypes.h"
#include "ECompassDirs.h"
#include "UIPhase2MenuTab.generated.h"

class UUIMenuTutorial;
class UUIPhase2Menu;
class UCanvasPanel;
class UCurveFloat;
class UAshenEventData;
class UUIPhase2MenuTab;

UCLASS(Blueprintable, EditInlineNew)
class ASHEN_API UUIPhase2MenuTab : public UAshenUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UUIPhase2Menu* Owner;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsThisTabInFocus;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TabWidth;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRightHandScreenFocus;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FadeSpeedModifier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FadeSpeedModifierExit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FadeDistanceModifier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIgnorePauseFadeins;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOverlayTabClosedDelegate OverlayClosedDelegate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOverlayTabStartedClosingDelegate OverlayStartClosingDelegate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOverlayTabStartedClosingDelegate OverlayStartClosingDelegate2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EInputUIEventTypes LastButtonPressed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float cStartLerpAlpha;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float cFinalLerpAlpha;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float cCurrentLerpAlpha;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D LocalRenderOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UCanvasPanel* TutorialPanel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UCanvasPanel* TutorialPanel2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TArray<UUIMenuTutorial*> TutorialRefrences;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EUITutorialName> ReliventTutorialArray;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bStationaryWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bMapCustomFading;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool FreshConstruct;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bTempFadeOutDissabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHasCustomFocusLogic;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FButtonStyle> STDButtonStyles;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FButtonStyle> OverlapButtonStyles;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bLerpingPosition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D cStartLerpPosition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D cFinalLerpPosition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D cCurrentLerpPosition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float cLerpPositionTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float cLerpPositionTimer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* PositionBlendCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bLerpingAlpha;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool SetVisOnEnd;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Fade_IsIn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESlateVisibility VisibilityWhenFinished;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float cLerpAlphaTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float cLerpAlphaTimer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* AlphaBlendCurve;
    
public:
    UUIPhase2MenuTab();
    UFUNCTION(BlueprintCallable)
    void UpdateFunc(float DeltaTime);
    
    UFUNCTION(BlueprintCallable)
    void TransferCloseDelegatesToNewTab(UUIPhase2MenuTab* NewTabRef);
    
    UFUNCTION(BlueprintCallable)
    void StandardGiveFocus_Internal();
    
    UFUNCTION(BlueprintCallable)
    void StandardGiveFocus();
    
    UFUNCTION(BlueprintCallable)
    void SetupTutorials();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetupThisTabBlueprintLogic(UUIPhase2Menu* OwnerRef, bool StationaryWidget, bool DisableTempFading);
    
    UFUNCTION(BlueprintCallable)
    void SetupThisTab_Internal(UUIPhase2Menu* OwnerRefrence, bool StationaryWidget, bool DissableTempFading);
    
    UFUNCTION(BlueprintCallable)
    void SetupThisTab(UUIPhase2Menu* OwnerRef, bool StationaryWidget, bool DisableTempFading);
    
    UFUNCTION(BlueprintCallable)
    void SetupFunc(UUIPhase2Menu* OwnerRefrence, bool StationaryWidget, bool DissableTempFading);
    
    UFUNCTION(BlueprintCallable)
    void SetTempFadeoutDissabled(bool Dissabled);
    
    UFUNCTION(BlueprintCallable)
    void SetStationaryTab(bool Stationary);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetCraftingTabOpen(bool Value);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OpenTabCallMade();
    
    UFUNCTION(BlueprintCallable)
    void OnTutorialEvent(UAshenEventData* Data);
    
    UFUNCTION(BlueprintCallable)
    void OnSelectableSlotFocused(UAshenEventData* EventData);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnLoseFocus();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnGivenFocus();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnFadeOutFinished();
    
    UFUNCTION(BlueprintCallable)
    bool IsStationaryTab();
    
    UFUNCTION(BlueprintCallable)
    bool GetTempFadeoutDissabled();
    
    UFUNCTION(BlueprintCallable)
    FVector2D GetCurrentPosition();
    
    UFUNCTION(BlueprintCallable)
    float GetCurrentAlpha();
    
    UFUNCTION(BlueprintCallable)
    void FocusOnThisTab(bool FocusIfTrue);
    
    UFUNCTION(BlueprintCallable)
    void FadeOutTab2Close(ECompassDirs Dir);
    
    UFUNCTION(BlueprintCallable)
    void FadeInTabFromClose(ECompassDirs Dir);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CustomFocusOnThisTab(bool FocusIfTrue);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CloseTabCallMade();
    
    UFUNCTION(BlueprintCallable)
    void BackOneTabPressed();
    
    UFUNCTION(BlueprintCallable)
    UUIMenuTutorial* AddTutorialWidget(FUITutorialData TutorialData, bool Setup);
    
};

