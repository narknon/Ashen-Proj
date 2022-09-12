#include "LootBoxComponent.h"
#include "Templates/SubclassOf.h"

class UItemBase;
class UAshenUserWidget;
class ACreature;
class UItemTable;

void ULootBoxComponent::PopulateFromJSON() {
}

void ULootBoxComponent::Populate() {
}

void ULootBoxComponent::OpenLootBox(TSubclassOf<UAshenUserWidget> LootWidget, ACreature* Source) {
}


void ULootBoxComponent::LootAllQuestItems(TArray<UItemTable*> Tables) {
}

TArray<UItemTable*> ULootBoxComponent::FindNearbyLootBoxes(bool bIncludeSelf) {
    return TArray<UItemTable*>();
}

void ULootBoxComponent::ExpireLootBox() {
}

void ULootBoxComponent::ExitLootBox() {
}

TArray<EQuestItem> ULootBoxComponent::ContainedQuestItems() {
    return TArray<EQuestItem>();
}

void ULootBoxComponent::CheckIsEmpty(bool& bIsEmpty, bool ExpireIfEmpty) {
}

void ULootBoxComponent::AddToBox(UItemBase* ItemToAdd, bool& bWasAdded, bool& addedToExistingItem) {
}

ULootBoxComponent::ULootBoxComponent() {
    this->LootTable = NULL;
    this->bLimitDropCount = false;
    this->MaxNumDrops = 0;
    this->CombineSearchRadius = 200.00f;
    this->bActiveOnStart = false;
    this->InstancedWidget = NULL;
    this->bPlayerCanStore = false;
    this->bHasBeenPopulated = false;
    this->bLootHasExpired = false;
    this->bPlayerStorageBox = false;
    this->LootBoxDefualtSlots = 4;
    this->LootBoxUser = NULL;
    this->bHasBeenOpened = false;
    this->bInterpToChest = false;
    this->InterpOffset = 0.00f;
    this->NpcAcquiredOpenedAmount = 1.00f;
}

