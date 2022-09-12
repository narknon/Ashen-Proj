#include "ItemTable.h"
#include "Templates/SubclassOf.h"

class UItemBase;
class ACreature;
class UItemTable;

void UItemTable::Stack(UItemBase* InDestination, UItemBase* InSource, UItemBase*& OutDestination, UItemBase*& OutSource, bool& WasStacked) {
}

void UItemTable::Split(UItemBase* InA, UItemBase*& OutA, UItemBase*& OutB, bool& WasSplit) {
}

void UItemTable::SetCreatureOwner(ACreature* NewOwner) {
}

void UItemTable::RemoveItemStacks(int32 Index, int32 StacksToRemove) {
}

bool UItemTable::RemoveItemByRef(UItemBase* Item) {
    return false;
}

void UItemTable::RemoveItem(int32 Index) {
}

void UItemTable::RemoveFirstItemOfClass(TSubclassOf<UItemBase> Class, bool UI_Fanfare, bool StackReductionIsEnough, bool& Removed) {
}

void UItemTable::QueryItemVerbs(const bool MouseMode, const UItemBase* Item, bool& CanBeStacked, bool& CanBeSplit, bool& CanBeMoved) const {
}

void UItemTable::PackExtraSlotForSwap(bool Pack) {
}

UItemBase* UItemTable::MoveItem(UItemBase* ItemToMove, UItemTable* TargetTable, bool& Successful, bool& Stacked) {
    return NULL;
}

bool UItemTable::IsFull() const {
    return false;
}

void UItemTable::HasItemsOfType(EItemType ItemType, bool& NewHasItemsOfType) const {
}

void UItemTable::GetSize(int32& ItemCount, int32& EmptyCount, int32& TotalCount) const {
}

int32 UItemTable::GetNumberOfItems() const {
    return 0;
}

EItemType UItemTable::GetItemTypeByIndex(const int32 Index) const {
    return EItemType::None;
}

void UItemTable::GetItem(UItemBase*& Item, const int32& Index) const {
}

ACreature* UItemTable::GetCreatureOwner() const {
    return NULL;
}

int32 UItemTable::FreeSpaceForType(EItemType TypeToSearch) {
    return 0;
}

int32 UItemTable::FindNumberOfType(EItemType ItemType, bool SumStackTotals) {
    return 0;
}

int32 UItemTable::FindNumberOfClass(TSubclassOf<UItemBase> ItemClass, bool SumStackTotals) {
    return 0;
}

TArray<UItemBase*> UItemTable::FindItemsOfType(EItemType ItemType) const {
    return TArray<UItemBase*>();
}

void UItemTable::FindItem(const UItemBase* Item, bool& Found, int32& Index) const {
}

UItemBase* UItemTable::FindFirstItemOfTypeWithIndex(EItemType ItemType, int32& Index) const {
    return NULL;
}

UItemBase* UItemTable::FindFirstItemOfType(EItemType ItemType) const {
    return NULL;
}

UItemBase* UItemTable::FindFirstItemOfClassWithIndex(TSubclassOf<UItemBase> ItemClass, int32& Index) {
    return NULL;
}

UItemBase* UItemTable::FindFirstItemOfClass(TSubclassOf<UItemBase> ItemClass) {
    return NULL;
}

void UItemTable::Exchange(const UItemBase* InA, const UItemBase* InB, UItemBase*& OutA, UItemBase*& OutB, bool& Exchanged) {
}

void UItemTable::ClearPreferedVisualIndexs() {
}

void UItemTable::ClearNewItemsTag() {
}

void UItemTable::CanStack(const UItemBase* A, const UItemBase* B, bool& NewCanStack) {
}

void UItemTable::CanExchange(const UItemBase* A, const UItemBase* B, bool& NewCanExchange) {
}

bool UItemTable::AreTypeCompatible(EItemType ItemType, EItemType SlotType) {
    return false;
}

int32 UItemTable::AddToExistingStack(UItemBase* Item, bool& WasStacked, bool& MovedAllOfStack) {
    return 0;
}

UItemBase* UItemTable::AddItemAnywhere(UItemBase* Item, int32& Index, bool& Added) {
    return NULL;
}

UItemBase* UItemTable::AddItem(UItemBase* Item, int32 Index, bool& Added) {
    return NULL;
}

UItemTable::UItemTable() {
    this->Type = EItemLocation::Undefined;
    this->bIsFixedSize = false;
    this->MinimumSize = 0;
    this->ActorOwner = NULL;
    this->bContainsNewItems = false;
    this->CreatureOwner = NULL;
}

