#include "UIStatusLootBox.h"

class UUniformGridPanel;
class UItemTalismanBase;
class UUIItemGridSlot;
class UItemTable;
class UInventory;

void UUIStatusLootBox::UnlockTalisman(UItemTalismanBase* TalismanToUnlock) {
}

void UUIStatusLootBox::PopulateSlots(TArray<UUIItemGridSlot*> Icons, TArray<UItemTable*> Tables, TArray<EItemType> ItemFilters, bool bSetFocus) {
}

void UUIStatusLootBox::LootAllPossible(UUniformGridPanel* Panel, UInventory* PlayerInventory) {
}

void UUIStatusLootBox::LootAll(UUniformGridPanel* Panel, UInventory* PlayerInventory) {
}

bool UUIStatusLootBox::IsLootEmpty() {
    return false;
}

void UUIStatusLootBox::EndLootBox() {
}

void UUIStatusLootBox::ActionGridSlot(UUIItemGridSlot* SlotData, bool bActionSlot, FText& ActionMessage, bool& Added, bool& Stacked) {
}

UUIStatusLootBox::UUIStatusLootBox() {
    this->PrimaryLootComponent = NULL;
    this->bIsPersonalLootBox = false;
}

