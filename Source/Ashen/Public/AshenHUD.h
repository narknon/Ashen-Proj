#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "GameFramework/HUD.h"
#include "EUITutorialName.h"
#include "EEquipmentSlot.h"
#include "EInputPressType.h"
#include "UITutorialData.h"
#include "EInputUIEventTypes.h"
#include "UObject/NoExportTypes.h"
#include "EItemType.h"
#include "AshenHUD.generated.h"

class UUiSystemMessage;
class UUIItemGridSlot;
class UTutorialChecker;
class UAshenUserWidget;
class AHero;

UCLASS(Blueprintable, NonTransient)
class ASHEN_API AAshenHUD : public AHUD {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UUiSystemMessage* SystemMessageInstance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UUIItemGridSlot* DragSlot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TArray<UUIItemGridSlot*> MouseOverSlots;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool WaitingOnDragEventFinish;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TimeSinceUpNavigationEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TimeSinceSidewaysNavigationEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool LastNavigationViaMouse;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EEquipmentSlot CurrentEquipmentSlot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InputUpAxis;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InputRightAxis;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool DisplayTravelMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool DisplayOptions;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FUITutorialData> RequestedUITutorials;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTutorialChecker* LastTutorial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EUITutorialName LastTutorialName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<bool> InputHeldEvents;
    
public:
    AAshenHUD();
    UFUNCTION(BlueprintCallable)
    void TellUIAboutInput(const AHero* Hero, EInputUIEventTypes PressEvent, EInputPressType PressType, bool ShouldSentToUIWidgets);
    
    UFUNCTION(BlueprintCallable)
    void TellUIAboutDragEvent(const AHero* Hero, EInputPressType DragType);
    
    UFUNCTION(BlueprintCallable)
    void TellUIAboutAxisInput(const FVector2D& Input);
    
    UFUNCTION(BlueprintCallable)
    void SummonInventory(TSubclassOf<UAshenUserWidget> AshenWidgetClass, UAshenUserWidget*& AshenWidgetInstance, EItemType ItemFilter, UAshenUserWidget* ReplaceWidget);
    
    UFUNCTION(BlueprintCallable)
    void StartDragEvent(UUIItemGridSlot* DragSlotRef);
    
    UFUNCTION(BlueprintCallable)
    void SetUIInputEventHeld(EInputUIEventTypes InputEventType, bool Held);
    
private:
    UFUNCTION(BlueprintCallable)
    void RemoveUITutorial(EUITutorialName NameToRemove);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void Remove(UAshenUserWidget*& AshenWidget);
    
    UFUNCTION(BlueprintCallable)
    void PushSystemMessage(FText Message, TSubclassOf<UAshenUserWidget> MessageWidget);
    
    UFUNCTION(BlueprintCallable)
    void PushReplace(TSubclassOf<UAshenUserWidget> AshenWidgetClass, UAshenUserWidget* AshenWidgetToReplace, UAshenUserWidget*& AshenWidgetInstance);
    
    UFUNCTION(BlueprintCallable)
    void Push(TSubclassOf<UAshenUserWidget> AshenWidgetClass, UAshenUserWidget*& AshenWidgetInstance);
    
    UFUNCTION(BlueprintCallable)
    void PopSystemMessage();
    
    UFUNCTION(BlueprintCallable)
    void PopSpecific(UAshenUserWidget* Widget, bool bIgnorePlaystateOverride);
    
    UFUNCTION(BlueprintCallable)
    void PopAll();
    
    UFUNCTION(BlueprintCallable)
    void Pop();
    
    UFUNCTION(BlueprintCallable)
    bool IsUIInputHeld(EInputUIEventTypes InputEventType);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsOnConsole() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInShipping() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInEditor() const;
    
    UFUNCTION(BlueprintCallable)
    FUITutorialData GetUITutorialIfActive(EUITutorialName Name, bool& Active);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetTopInput(UAshenUserWidget*& AshenWidget);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TSubclassOf<UAshenUserWidget> GetTopClass();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UAshenUserWidget* GetTop();
    
    UFUNCTION(BlueprintCallable)
    EItemType ConsumeItemFilter();
    
    UFUNCTION(BlueprintCallable)
    void ClearSystemMessage();
    
    UFUNCTION(BlueprintCallable)
    void CancelDragEvent(bool CallbackSuccessCheckInput);
    
private:
    UFUNCTION(BlueprintCallable)
    void AddUITutorial(FUITutorialData TutorialData);
    
};

