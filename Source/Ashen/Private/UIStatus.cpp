#include "UIStatus.h"

class UUIPhase2Menu;
class UScrollBox;
class UUniformGridPanel;
class AHumanoid;
class UItemBase;
class UImage;
class UUIItemGridSlot;
class UItemTable;
class UTextBlock;
class UCanvasPanel;

void UUIStatus::UpdateScrollbar(UScrollBox* ScrollbarWidget, float SlotSize) {
}

void UUIStatus::UpdateFunc(float DeltaTime) {
}

void UUIStatus::ToggleInfoBoxVisiblity() {
}

void UUIStatus::ShutdownUI() {
}

void UUIStatus::SetupTutorials() {
}

void UUIStatus::SetupFunc(UUIPhase2Menu* OwnerRef, bool StationaryWidget, bool DissableTempFading) {
}

void UUIStatus::SetHumanoid(AHumanoid* NewSetHumanoid) {
}

void UUIStatus::SetEnabledOnAllButtonsPhase2(bool bSetTo) {
}

void UUIStatus::SetEnabledOnAllButtons(bool bSetTo) {
}

void UUIStatus::SelectFocusWidget() {
}

void UUIStatus::RepopulatePhase2(bool bIgnoreFocus) {
}

void UUIStatus::Repopulate(bool bIgnoreFocus) {
}

void UUIStatus::PopulateInfoBox(UItemBase* ItemInfo) {
}

void UUIStatus::PopulateGridSlotsPhase2(TArray<UUIItemGridSlot*> Icons, TArray<UItemTable*> AllTables, bool bCanStub, TArray<EItemType> ItemFilters, bool bSetFocus) {
}

void UUIStatus::PopulateGridSlots(int32 BoundsX, TArray<UItemTable*> AllTables, bool bCanStub, TArray<EItemType> ItemFilters, bool bSetFocus) {
}

void UUIStatus::PopGridChildren() {
}


void UUIStatus::ConfigureWidgets(UImage* InfoIcon, UTextBlock* InfoTitle, UTextBlock* InfoDesc, UUniformGridPanel* UniformGrid, UCanvasPanel* InfoPanel) {
}

void UUIStatus::ClearInfoBox() {
}

void UUIStatus::CheckInfoBoxVisible() {
}

void UUIStatus::CalculateTotalWeight(int32& TotalWeight) {
}

UUIStatus::UUIStatus() {
    this->ReadTable = NULL;
    this->ForceItemLocation = EItemLocation::Undefined;
    this->CurrentInventory = NULL;
    this->MenuType = EStatusMenuType::None;
    this->CurrentGridSlot = NULL;
    this->Humanoid = NULL;
    this->bHasNoInfoBox = false;
    this->OwningWidget = NULL;
    this->UseBoundsX = 0;
    this->bUseCanStub = false;
    this->CurrentSelectedIndex = 0;
    this->WidgetInfoIcon = NULL;
    this->WidgetInfoTitle = NULL;
    this->WidgetInfoDesc = NULL;
    this->ItemGridSlotWidget = NULL;
    this->UniformGridPanel = NULL;
    this->InfoCanvas = NULL;
}

