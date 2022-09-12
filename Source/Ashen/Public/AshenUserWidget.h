#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "EPlayState.h"
#include "EAshenUserWidgetMode.h"
#include "EUIWidgetUnlockFX.h"
#include "EUIOnOffSetting.h"
#include "EInputUIEventTypes.h"
#include "EInputPressType.h"
#include "UObject/NoExportTypes.h"
#include "InputCoreTypes.h"
#include "AshenUserWidget.generated.h"

class UWidget;
class AHero;
class UAshenUserWidget;
class AAshenBaseState;
class UAshenEventData;
class UPaperSprite;
class AAshenHUD;

UCLASS(Blueprintable, EditInlineNew)
class ASHEN_API UAshenUserWidget : public UUserWidget {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FAshenWidgetClosedDelegate, UAshenUserWidget*, Source);
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AAshenBaseState* GameState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bListensToInput;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bListensToMouseInput;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool HasMouseOver;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPlayState PlayStateOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAshenUserWidgetMode WidgetMode;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAshenWidgetClosedDelegate OnAshenUserWidgetClosed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PopupWidgetLockTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PopupWidgetPriorityLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool CanRemoveForHigherPriorityWidgets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsDisplayLocked;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EUIWidgetUnlockFX LockReleaseFX;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHandlePreviewInput;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsPaused;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UWidget* FocusOnWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ScrollbarTargetMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHasMenuTabFocus;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool InputEnabled;
    
    UAshenUserWidget();
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool WidgetIsEnabled();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Unpause();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UIOnOffSettingChanged(EUIOnOffSetting Setting, bool Value);
    
    UFUNCTION(BlueprintCallable)
    void SetLockReleaseFx(EUIWidgetUnlockFX FX);
    
    UFUNCTION(BlueprintCallable)
    void RecieveInteractionInputTab(const AHero* Hero, EInputUIEventTypes PressEvent, EInputPressType PressType);
    
    UFUNCTION(BlueprintCallable)
    void RecieveControlInputTab(const FVector2D& Input);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Pause();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Open(UUserWidget* Previous);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnRecieveInteractionInput(const AHero* Hero, EInputUIEventTypes PressEvent, EInputPressType PressType);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnRecieveControlInput(const FVector2D& Input);
    
    UFUNCTION(BlueprintCallable)
    void OnOffUIEvent(UAshenEventData* EventData);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnGiveWayToHigherPriorityWidgetEvent();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnDisplayLockReleasedEvent();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void MouseExit();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void MouseEnter();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void KeyPreviewResult(FKey KeyValue);
    
    UFUNCTION(BlueprintCallable)
    FVector2D GetSpriteDimensions(UPaperSprite* Sprite, FVector2D& OwnerSize, FVector2D& PositionUVOwner);
    
    UFUNCTION(BlueprintCallable)
    EUIWidgetUnlockFX GetLockReleaseFx();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AAshenHUD* GetAshenHUD();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Close(UUserWidget* Next);
    
};

