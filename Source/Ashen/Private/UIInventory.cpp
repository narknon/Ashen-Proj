#include "UIInventory.h"

class UUIItemGridSlot;
class UUIStatusLootBox;
class UInventory;
class UTextBlock;
class UItemTable;
class UCanvasPanel;
class UButton;

void UUIInventory::UseWithPersonalLootBox(UUIStatusLootBox* PersonalLootBox) {
}

void UUIInventory::SetInterfaceLocked(bool bSetTo) {
}

void UUIInventory::SetHeader(FText SetText) {
}

void UUIInventory::SetConfirmTriggerable(bool bEnabled) {
}

void UUIInventory::SetCategoryButtonsOnStart() {
}


void UUIInventory::PrepareElements(UInventory* PlayerInventory, TArray<EItemType> ItemFilters) {
}

void UUIInventory::PopulateSlots(TArray<UItemTable*> Tables, TArray<EItemType> ItemFilters, bool bSetFocus) {
}

void UUIInventory::PopulateInventory(TArray<EItemType> ItemFilters, FText SetTitle, bool bSetFocus) {
}

void UUIInventory::ConfigureWidgetsInventory(UTextBlock* Title, UCanvasPanel* ConfirmButton, UButton* CategoryConsumables, UButton* CategoryCrafting, UButton* CategoryGear, UButton* CategoryQuest) {
}

void UUIInventory::CheckCategoryHover(bool& bIsValid, uint8& SelectedCategory) {
}

void UUIInventory::ActionGridSlotEquipment(UUIItemGridSlot* SlotData, bool bActionSlot, FText& ActionMessage, EItemState ItemState) {
}

void UUIInventory::ActionGridSlotBelt(UUIItemGridSlot* SlotData, bool bActionSlot, FText& ActionMessage, EItemState ItemState, int32 BeltIndex) {
}

void UUIInventory::ActionGridSlotArmour(UUIItemGridSlot* SlotData, bool bActionSlot, FText& ActionMessage, EItemState ItemState) {
}

UUIInventory::UUIInventory() {
    this->bInEquipmentMode = false;
    this->TitleWidget = NULL;
    this->bInterfaceIsLocked = false;
    this->ConfirmButtonCanvas = NULL;
    this->EquipmentWidget = NULL;
    this->ConnectedPersonalLootBox = NULL;
    this->bUsePersonalLootBox = false;
    this->WidgetCategoryConsumables = NULL;
    this->WidgetCategoryCrafting = NULL;
    this->WidgetCategoryGear = NULL;
    this->WidgetCategoryQuest = NULL;
}

