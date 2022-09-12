#include "UIItemGridSlot.h"
#include "Templates/SubclassOf.h"

class UScaleBox;
class UImage;
class UTextBlock;
class UUIPhase2EquipTab;
class UCurveFloat;
class UInventory;
class UItemTable;
class UButton;
class UCanvasPanel;
class UWidget;
class UItemBase;

void UUIItemGridSlot::UpdateSlotPhase2() {
}

void UUIItemGridSlot::UpdateSlot() {
}

void UUIItemGridSlot::UpdateNonIconOpacity(UImage* OuterSelectLarge, UImage* OuterSelectSmall, UImage* SocketStd, UImage* InnerSelectImage, UImage* BackgroundCounter, UImage* SpecialItemMat, UTextBlock* CounterText) {
}

void UUIItemGridSlot::UpdateMovableItemSlotMovementLogic(UUIPhase2EquipTab* ControllingBp, int32 IndexPosition, bool DisableIntroLogic) {
}

void UUIItemGridSlot::UpdateItemSlot(bool bForceUpdate, bool bExpandOnChanges) {
}

void UUIItemGridSlot::TriggerAll(UInventory* PlayerInventory) {
}


void UUIItemGridSlot::SetTopType(bool Top) {
}

void UUIItemGridSlot::SetTableRefrence(UItemTable* Table) {
}

void UUIItemGridSlot::SetSlotIndex(int32 IndexNumber) {
}


void UUIItemGridSlot::SetDisplayWidgets() {
}


void UUIItemGridSlot::SetButtonStyle() {
}

void UUIItemGridSlot::SetAsPlacementOption(bool HasValidStatus, UButton* ButtonUserWidget) {
}

void UUIItemGridSlot::SendItemInfoOnSelectionPhase2(bool& bHasFocus) {
}

void UUIItemGridSlot::SendItemInfoOnSelection(bool& bHasFocus) {
}

void UUIItemGridSlot::ProcessLastIconFadeOut(float DeltaTime, UCurveFloat* FadeCurve, float LastItemEmptyAlphaMod, UImage* LastIcon, UScaleBox* LastIconScaleBox) {
}


void UUIItemGridSlot::MakeStub() {
}



UWidget* UUIItemGridSlot::GetFirstChildOfClass(UCanvasPanel* ParentPanel, TSubclassOf<UWidget> ChildClass) {
    return NULL;
}



void UUIItemGridSlot::FocusRecievedNew() {
}

void UUIItemGridSlot::ConfigureWidgetsButton(UTextBlock* CountText, UImage* Icon, UTextBlock* WeightText, UButton* Button) {
}

void UUIItemGridSlot::ConfigureButtonStyle(UCanvasPanel* ContentWidget) {
}

void UUIItemGridSlot::AddToTables(TArray<UItemTable*> AddToTable, UItemBase* ItemToAdd, UItemTable* DefaultTable, bool& Added, bool& Stacked, bool& StackUsedUp) {
}

void UUIItemGridSlot::ActionSlot(UInventory* _UseInventory, bool bActionSlot, FText& ActionMessage) {
}

UUIItemGridSlot::UUIItemGridSlot() {
    this->SlotItem = NULL;
    this->OwningWidget = NULL;
    this->SlotIndex = 0;
    this->SlotItemLocation = EItemLocation::Undefined;
    this->SlotTable = NULL;
    this->LastSlotItem = NULL;
    this->bIsStub = false;
    this->bIsTutorialReliventWidget = false;
    this->bIsTopInventoryIcon = false;
    this->UseInventory = NULL;
    this->CurrentRow = 0;
    this->GridIndex = 0;
    this->ButtonWidget = NULL;
    this->bUsingFocusedStyle = false;
    this->bHasSentInfo = false;
    this->CurrentScroll = 0;
    this->CurrentScrollCooldown = 0.00f;
    this->CurrentScrollCooldownReset = 0.00f;
    this->ShouldBeFocusableSlot = false;
    this->bShouldHideIconChange = false;
    this->bDisplayEmptySlotAsHandIcon = false;
    this->bDisplayHandIconAsOpen = false;
    this->SetOuterSelectToRed = false;
    this->NonIconOpacity = 0.00f;
    this->NonIconOpacityModifier = 0.00f;
    this->LastIconFadeLerp = 0.00f;
    this->bIconOpacityEnabled = false;
    this->WidgetIcon = NULL;
    this->WidgetCountText = NULL;
    this->WidgetWeightText = NULL;
    this->WidgetButton = NULL;
}

