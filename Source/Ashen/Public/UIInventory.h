#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "UIStatus.h"
#include "EItemType.h"
#include "EItemState.h"
#include "UIInventory.generated.h"

class UUIStatusLootBox;
class UTextBlock;
class UCanvasPanel;
class UWidget;
class UAshenUserWidget;
class UItemTable;
class UButton;
class UInventory;
class UUIItemGridSlot;

UCLASS(Blueprintable, EditInlineNew)
class ASHEN_API UUIInventory : public UUIStatus {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bInEquipmentMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UTextBlock* TitleWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bInterfaceIsLocked;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UCanvasPanel* ConfirmButtonCanvas;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UAshenUserWidget> EquipmentWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TArray<UWidget*> HideOnEquipmentMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UUIStatusLootBox* ConnectedPersonalLootBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUsePersonalLootBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText CurrentTitle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EItemType> CurrentItemFilters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UItemTable*> CurrentTables;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UButton* WidgetCategoryConsumables;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UButton* WidgetCategoryCrafting;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UButton* WidgetCategoryGear;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UButton* WidgetCategoryQuest;
    
    UUIInventory();
    UFUNCTION(BlueprintCallable)
    void UseWithPersonalLootBox(UUIStatusLootBox* PersonalLootBox);
    
    UFUNCTION(BlueprintCallable)
    void SetInterfaceLocked(bool bSetTo);
    
    UFUNCTION(BlueprintCallable)
    void SetHeader(FText SetText);
    
    UFUNCTION(BlueprintCallable)
    void SetConfirmTriggerable(bool bEnabled);
    
    UFUNCTION(BlueprintCallable)
    void SetCategoryButtonsOnStart();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReturnToEquipment();
    
    UFUNCTION(BlueprintCallable)
    void PrepareElements(UInventory* PlayerInventory, TArray<EItemType> ItemFilters);
    
    UFUNCTION(BlueprintCallable)
    void PopulateSlots(TArray<UItemTable*> Tables, TArray<EItemType> ItemFilters, bool bSetFocus);
    
    UFUNCTION(BlueprintCallable)
    void PopulateInventory(TArray<EItemType> ItemFilters, FText SetTitle, bool bSetFocus);
    
    UFUNCTION(BlueprintCallable)
    void ConfigureWidgetsInventory(UTextBlock* Title, UCanvasPanel* ConfirmButton, UButton* CategoryConsumables, UButton* CategoryCrafting, UButton* CategoryGear, UButton* CategoryQuest);
    
    UFUNCTION(BlueprintCallable)
    void CheckCategoryHover(bool& bIsValid, uint8& SelectedCategory);
    
    UFUNCTION(BlueprintCallable)
    void ActionGridSlotEquipment(UUIItemGridSlot* SlotData, bool bActionSlot, FText& ActionMessage, EItemState ItemState);
    
    UFUNCTION(BlueprintCallable)
    void ActionGridSlotBelt(UUIItemGridSlot* SlotData, bool bActionSlot, FText& ActionMessage, EItemState ItemState, int32 BeltIndex);
    
    UFUNCTION(BlueprintCallable)
    void ActionGridSlotArmour(UUIItemGridSlot* SlotData, bool bActionSlot, FText& ActionMessage, EItemState ItemState);
    
};

