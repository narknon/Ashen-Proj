#include "AshenHUD.h"
#include "Templates/SubclassOf.h"

class AHero;
class UAshenUserWidget;
class UUIItemGridSlot;

void AAshenHUD::TellUIAboutInput(const AHero* Hero, EInputUIEventTypes PressEvent, EInputPressType PressType, bool ShouldSentToUIWidgets) {
}

void AAshenHUD::TellUIAboutDragEvent(const AHero* Hero, EInputPressType DragType) {
}

void AAshenHUD::TellUIAboutAxisInput(const FVector2D& Input) {
}

void AAshenHUD::SummonInventory(TSubclassOf<UAshenUserWidget> AshenWidgetClass, UAshenUserWidget*& AshenWidgetInstance, EItemType ItemFilter, UAshenUserWidget* ReplaceWidget) {
}

void AAshenHUD::StartDragEvent(UUIItemGridSlot* DragSlotRef) {
}

void AAshenHUD::SetUIInputEventHeld(EInputUIEventTypes InputEventType, bool Held) {
}

void AAshenHUD::RemoveUITutorial(EUITutorialName NameToRemove) {
}

void AAshenHUD::Remove(UAshenUserWidget*& AshenWidget) {
}

void AAshenHUD::PushSystemMessage(FText Message, TSubclassOf<UAshenUserWidget> MessageWidget) {
}

void AAshenHUD::PushReplace(TSubclassOf<UAshenUserWidget> AshenWidgetClass, UAshenUserWidget* AshenWidgetToReplace, UAshenUserWidget*& AshenWidgetInstance) {
}

void AAshenHUD::Push(TSubclassOf<UAshenUserWidget> AshenWidgetClass, UAshenUserWidget*& AshenWidgetInstance) {
}

void AAshenHUD::PopSystemMessage() {
}

void AAshenHUD::PopSpecific(UAshenUserWidget* Widget, bool bIgnorePlaystateOverride) {
}

void AAshenHUD::PopAll() {
}

void AAshenHUD::Pop() {
}

bool AAshenHUD::IsUIInputHeld(EInputUIEventTypes InputEventType) {
    return false;
}

bool AAshenHUD::IsOnConsole() const {
    return false;
}

bool AAshenHUD::IsInShipping() const {
    return false;
}

bool AAshenHUD::IsInEditor() const {
    return false;
}

FUITutorialData AAshenHUD::GetUITutorialIfActive(EUITutorialName Name, bool& Active) {
    return FUITutorialData{};
}

void AAshenHUD::GetTopInput(UAshenUserWidget*& AshenWidget) {
}

TSubclassOf<UAshenUserWidget> AAshenHUD::GetTopClass() {
    return NULL;
}

UAshenUserWidget* AAshenHUD::GetTop() {
    return NULL;
}

EItemType AAshenHUD::ConsumeItemFilter() {
    return EItemType::None;
}

void AAshenHUD::ClearSystemMessage() {
}

void AAshenHUD::CancelDragEvent(bool CallbackSuccessCheckInput) {
}

void AAshenHUD::AddUITutorial(FUITutorialData TutorialData) {
}

AAshenHUD::AAshenHUD() {
    this->SystemMessageInstance = NULL;
    this->DragSlot = NULL;
    this->WaitingOnDragEventFinish = false;
    this->TimeSinceUpNavigationEvent = 10.00f;
    this->TimeSinceSidewaysNavigationEvent = 10.00f;
    this->LastNavigationViaMouse = false;
    this->CurrentEquipmentSlot = EEquipmentSlot::None;
    this->InputUpAxis = 0.00f;
    this->InputRightAxis = 0.00f;
    this->DisplayTravelMap = false;
    this->DisplayOptions = false;
    this->LastTutorial = NULL;
    this->LastTutorialName = EUITutorialName::None;
}

