#include "Inventory.h"
#include "Templates/SubclassOf.h"

class UItemTable;
class UItemBase;
class UItemWeaponBase;
class UItemEquipment;

void UInventory::UpdateSave(UItemTable* Source, UItemBase* Item) {
}

bool UInventory::UnEquipTalisman(UItemBase* Item) {
    return false;
}

bool UInventory::UnEquipItem(UItemBase* Item, UItemTable* AddToTable, bool UIFanFare) {
    return false;
}

bool UInventory::UnequipEquipment(UItemBase* Item, UItemTable* AddToTable) {
    return false;
}

bool UInventory::UnequipBelt(int32 BeltIndex, UItemTable* AddToTable) {
    return false;
}

UItemBase* UInventory::UnequipArmour(UItemBase* Item, UItemTable* AddToTable) {
    return NULL;
}

void UInventory::ToggleEquipped() {
}

void UInventory::SwitchToSpecificBeltItem(UItemBase* BeltItem) {
}

void UInventory::SwitchCurrentBeltItem(bool Reverse) {
}

void UInventory::SwitchBeltItem(int32 ItemIndex, UItemBase* Item, EEquipmentSlot EquipmentSlot) {
}

void UInventory::SetStatesInTable(EEquipmentState EquipmentState, UItemTable* ItemTable) {
}

void UInventory::ResetSavedEquipment() {
}

bool UInventory::RemoveItemOfClassFromLocation(TSubclassOf<UItemBase> ItemClass, EItemLocation Location, int32 NumStacks) {
    return false;
}

bool UInventory::RemoveItemOfClass(TSubclassOf<UItemBase> ItemClass, int32 NumStacks) {
    return false;
}

void UInventory::RemoveAllOfClassFromLocation(UClass* ItemClass, EItemLocation Location) {
}

void UInventory::PackExtraSlotsForSwap(bool Pack) {
}

void UInventory::OnDebugItemsLoaded() {
}

bool UInventory::IsBeltEmpty() {
    return false;
}

void UInventory::InituilizeDebugItems() {
}

bool UInventory::HeroObtainedItem(TSubclassOf<UItemBase> ItemClass) {
    return false;
}

bool UInventory::HeroHasItemType(EItemType ItemType) {
    return false;
}

UItemWeaponBase* UInventory::GetRightHand() {
    return NULL;
}

UItemWeaponBase* UInventory::GetNextRightHand() {
    return NULL;
}

UItemEquipment* UInventory::GetNextLeftHand() {
    return NULL;
}

UItemEquipment* UInventory::GetLeftHand() {
    return NULL;
}

void UInventory::GetCurrentAndNextBeltItems(UItemBase*& CurrentItem, UItemBase*& NextItem, bool& bShowNextBeltItem) {
}

bool UInventory::EquipTalismanIndexed(UItemBase* Item, int32 Index) {
    return false;
}

bool UInventory::EquipTalisman(UItemBase* Item) {
    return false;
}

bool UInventory::EquipItem(UItemBase* Item, EEquipmentSlot Slot, EItemLocation CurrentDiscardLocation, bool UIFanFare) {
    return false;
}

bool UInventory::EquipEquipment(UItemBase* Item, EItemLocation CurrentDiscardTable) {
    return false;
}

bool UInventory::EquipBeltItem(UItemBase* Item, EEquipmentSlot EquipmentSlot, EItemLocation CurrentDiscardTable) {
    return false;
}

UItemBase* UInventory::EquipArmour(UItemBase* Item, EItemLocation CurrentDiscardTable) {
    return NULL;
}

float UInventory::CalculateEquipmentWeight() {
    return 0.0f;
}

UInventory::UInventory() {
    this->AshenGameInstance = NULL;
    this->bIsForNonPlayerCharacter = false;
    this->bUserDrivenChange = false;
    this->DEBUG_ALLITEMTable = NULL;
    this->EquipmentTable = NULL;
    this->BeltTable = NULL;
    this->BackpackTable = NULL;
    this->CraftingTable = NULL;
    this->CurrencyTable = NULL;
    this->QuestTable = NULL;
    this->TalismanTable = NULL;
    this->TalismanPrimaryTable = NULL;
    this->PersonalLootboxTable = NULL;
    this->DebugItemsAsyncLoadInProgress = false;
    this->SavedLeftHand = NULL;
    this->SavedRightHand = NULL;
    this->TalismanAddedAudioEvent = NULL;
    this->TalismanRemovedAudioEvent = NULL;
    this->Humanoid = NULL;
}

