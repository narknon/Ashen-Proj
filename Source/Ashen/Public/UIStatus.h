#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "UIInventoryMenuTab.h"
#include "EItemLocation.h"
#include "EStatusMenuType.h"
#include "EItemType.h"
#include "UIStatus.generated.h"

class UItemTable;
class UButton;
class UInventory;
class UUIItemGridSlot;
class AHumanoid;
class UWidget;
class UUniformGridPanel;
class UImage;
class UTextBlock;
class UAshenUserWidget;
class UCanvasPanel;
class UScrollBox;
class UUIPhase2Menu;
class UItemBase;

UCLASS(Blueprintable, EditInlineNew)
class ASHEN_API UUIStatus : public UUIInventoryMenuTab {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UItemTable* ReadTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EItemLocation ForceItemLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText CurrentItemActionMessage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UInventory* CurrentInventory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EStatusMenuType MenuType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UUIItemGridSlot* CurrentGridSlot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TArray<UButton*> StackModifierDisableButtons;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AHumanoid* Humanoid;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHasNoInfoBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UWidget* OwningWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 UseBoundsX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UItemTable*> UseAllTables;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TArray<UUIItemGridSlot*> UseIcons;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseCanStub;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EItemType> UseItemFilters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CurrentSelectedIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UImage* WidgetInfoIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UTextBlock* WidgetInfoTitle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UTextBlock* WidgetInfoDesc;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UAshenUserWidget> ItemGridSlotWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UUniformGridPanel* UniformGridPanel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TArray<UUIItemGridSlot*> Phase2Buttons;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UCanvasPanel* InfoCanvas;
    
    UUIStatus();
    UFUNCTION(BlueprintCallable)
    void UpdateScrollbar(UScrollBox* ScrollbarWidget, float SlotSize);
    
    UFUNCTION(BlueprintCallable)
    void UpdateFunc(float DeltaTime);
    
    UFUNCTION(BlueprintCallable)
    void ToggleInfoBoxVisiblity();
    
    UFUNCTION(BlueprintCallable)
    void ShutdownUI();
    
    UFUNCTION(BlueprintCallable)
    void SetupTutorials();
    
    UFUNCTION(BlueprintCallable)
    void SetupFunc(UUIPhase2Menu* OwnerRef, bool StationaryWidget, bool DissableTempFading);
    
    UFUNCTION(BlueprintCallable)
    void SetHumanoid(AHumanoid* NewSetHumanoid);
    
    UFUNCTION(BlueprintCallable)
    void SetEnabledOnAllButtonsPhase2(bool bSetTo);
    
    UFUNCTION(BlueprintCallable)
    void SetEnabledOnAllButtons(bool bSetTo);
    
    UFUNCTION(BlueprintCallable)
    void SelectFocusWidget();
    
    UFUNCTION(BlueprintCallable)
    void RepopulatePhase2(bool bIgnoreFocus);
    
    UFUNCTION(BlueprintCallable)
    void Repopulate(bool bIgnoreFocus);
    
    UFUNCTION(BlueprintCallable)
    void PopulateInfoBox(UItemBase* ItemInfo);
    
    UFUNCTION(BlueprintCallable)
    void PopulateGridSlotsPhase2(TArray<UUIItemGridSlot*> Icons, TArray<UItemTable*> AllTables, bool bCanStub, TArray<EItemType> ItemFilters, bool bSetFocus);
    
    UFUNCTION(BlueprintCallable)
    void PopulateGridSlots(int32 BoundsX, TArray<UItemTable*> AllTables, bool bCanStub, TArray<EItemType> ItemFilters, bool bSetFocus);
    
    UFUNCTION(BlueprintCallable)
    void PopGridChildren();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnUpdateTotalWeight();
    
    UFUNCTION(BlueprintCallable)
    void ConfigureWidgets(UImage* InfoIcon, UTextBlock* InfoTitle, UTextBlock* InfoDesc, UUniformGridPanel* UniformGrid, UCanvasPanel* InfoPanel);
    
    UFUNCTION(BlueprintCallable)
    void ClearInfoBox();
    
    UFUNCTION(BlueprintCallable)
    void CheckInfoBoxVisible();
    
    UFUNCTION(BlueprintCallable)
    void CalculateTotalWeight(int32& TotalWeight);
    
};

