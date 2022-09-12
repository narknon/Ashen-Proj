#include "ItemBase.h"

class UWorld;
class APhysicalItem;
class UItemBase;
class ACreature;
class UItemTable;
class UPaperSprite;

bool UItemBase::UseItem() {
    return false;
}

bool UItemBase::StoreInNearestSack(UWorld* World, const FVector& SackLocation, bool& addedToExistingItem) {
    return false;
}

void UItemBase::SplitStackSingle(UItemBase*& NewItemStack, bool& SplitSuccessful) {
}

void UItemBase::SplitStack(UItemBase*& NewItemStack, bool& SplitSuccessful) {
}

void UItemBase::SetVisualIndex_Saved(int32 NewIndex) {
}

void UItemBase::SetStacks(int32 NewStackAmount) {
}

void UItemBase::SetOwnerLocation(ACreature* NewOwner, UItemTable* NewLocation, int32 NewIndex) {
}

void UItemBase::SetLastStackDelta(int32 Delta) {
}

void UItemBase::SetItemQuality_Level(EItemQuality QualityNew, int32 ItemLevelNew) {
}

void UItemBase::SaveItem() {
}

void UItemBase::RemoveFromOwnerAndDestory() {
}


bool UItemBase::OnUseItem() {
    return false;
}

APhysicalItem* UItemBase::MakePhysicalItem() {
    return NULL;
}

void UItemBase::ItemUpdated(UItemBase* Item) {
}

void UItemBase::IsTheSameDataType(const UItemBase* Other, bool& SameDataType) const {
}

void UItemBase::IsStackable(bool& CanStack) const {
}

bool UItemBase::IsQuestItem() {
    return false;
}

bool UItemBase::IsMovmentLocked() {
    return false;
}

bool UItemBase::IsItemUsable() {
    return false;
}

bool UItemBase::IsInactiveQuestItem() {
    return false;
}

void UItemBase::IsFullItem(bool& IsFull) const {
}

void UItemBase::IsEmptyItem(bool& IsEmpty) const {
}

bool UItemBase::IsDropLocked() const {
    return false;
}

FString UItemBase::GetWeaponQualityName(bool bForNextTier) {
    return TEXT("");
}

int32 UItemBase::GetUIStackAmountInternal() {
    return 0;
}

int32 UItemBase::GetUIStackAmount() {
    return 0;
}

FString UItemBase::GetTierFullName(bool bForNextTier) {
    return TEXT("");
}

int32 UItemBase::GetStacks() const {
    return 0;
}

FRecipe UItemBase::GetRecipe() {
    return FRecipe{};
}

int32 UItemBase::GetLocationIndex() const {
    return 0;
}

UItemTable* UItemBase::GetLocation() const {
    return NULL;
}

int32 UItemBase::GetLastStackDelta() const {
    return 0;
}

TArray<FUIStatBarData> UItemBase::GetItemUIStatBars(bool SkipCustomization) {
    return TArray<FUIStatBarData>();
}

UPaperSprite* UItemBase::GetIcon() {
    return NULL;
}



ACreature* UItemBase::GetCreatureOwner() const {
    return NULL;
}


bool UItemBase::DropItemInWorld(ACreature* CreatureResponsible, bool& addedToExistingItem, bool& DestroyInstead) {
    return false;
}

bool UItemBase::DestroyWhenEmpty() {
    return false;
}

void UItemBase::CustomizeItemStatBars(TArray<FUIStatBarData>& StatBars) {
}

UItemBase* UItemBase::Clone() {
    return NULL;
}

void UItemBase::CanSplit(bool& NewCanSplit) const {
}

void UItemBase::ApplyStackDelta(int32 StackDeltaAmount) {
}

void UItemBase::AddToStack(UItemBase* SourceItemStack, bool& SourceWasUsedUp) {
}

UItemBase::UItemBase() {
    this->PhysicalItem = NULL;
    this->bDebugTableItem = false;
    this->bClassAsHealingItemForTutorial = false;
    this->PhysicalItemType = NULL;
    this->bTieredNamingEnabled = false;
    this->PluralType = EItemPluralityPreface::none;
    this->Quality = EItemQuality::Tier1;
    this->bTieredVisualsEnabled = false;
    this->ItemLevel = 0;
    this->Ideal = EItemIdeal::None;
    this->Type = EItemType::None;
    this->Behaviour = EItemBehaviour::Undefined;
    this->BaseWeight = 0.00f;
    this->StackLimit = 0;
    this->Icon = NULL;
    this->UI_Fanfare = EItemFanfare::OnAdd;
    this->InspectionMesh = NULL;
    this->InspectionScale = 0.00f;
    this->QuestItemID = EQuestItem::Undefined;
    this->HasCustomStackingLogic = false;
    this->DisableFanfare = false;
    this->Stacks = 1;
    this->LastStackDelta = 0;
    this->CreatureOwner = NULL;
    this->OldOwner = NULL;
    this->CharacterSkeletalMesh = NULL;
    this->Location = NULL;
    this->Index = 0;
    this->VisualIndex = -1;
    this->NewItem = true;
    this->ItemSackCombinationRange = 300.00f;
}

