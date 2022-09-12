#include "AshenUserWidget.h"

class UPaperSprite;
class UAshenEventData;
class AHero;
class UUserWidget;
class AAshenHUD;

bool UAshenUserWidget::WidgetIsEnabled_Implementation() {
    return false;
}

void UAshenUserWidget::Unpause_Implementation() {
}


void UAshenUserWidget::SetLockReleaseFx(EUIWidgetUnlockFX FX) {
}

void UAshenUserWidget::RecieveInteractionInputTab(const AHero* Hero, EInputUIEventTypes PressEvent, EInputPressType PressType) {
}

void UAshenUserWidget::RecieveControlInputTab(const FVector2D& Input) {
}

void UAshenUserWidget::Pause_Implementation() {
}

void UAshenUserWidget::Open_Implementation(UUserWidget* Previous) {
}



void UAshenUserWidget::OnOffUIEvent(UAshenEventData* EventData) {
}






FVector2D UAshenUserWidget::GetSpriteDimensions(UPaperSprite* Sprite, FVector2D& OwnerSize, FVector2D& PositionUVOwner) {
    return FVector2D{};
}

EUIWidgetUnlockFX UAshenUserWidget::GetLockReleaseFx() {
    return EUIWidgetUnlockFX::None;
}

AAshenHUD* UAshenUserWidget::GetAshenHUD() {
    return NULL;
}

void UAshenUserWidget::Close_Implementation(UUserWidget* Next) {
}

UAshenUserWidget::UAshenUserWidget() : UUserWidget(FObjectInitializer::Get()) {
    this->GameState = NULL;
    this->bListensToInput = false;
    this->bListensToMouseInput = false;
    this->HasMouseOver = false;
    this->PlayStateOverride = EPlayState::None;
    this->WidgetMode = EAshenUserWidgetMode::None;
    this->PopupWidgetLockTime = 0.00f;
    this->PopupWidgetPriorityLevel = 0;
    this->CanRemoveForHigherPriorityWidgets = false;
    this->bIsDisplayLocked = false;
    this->LockReleaseFX = EUIWidgetUnlockFX::None;
    this->bHandlePreviewInput = false;
    this->bIsPaused = false;
    this->FocusOnWidget = NULL;
    this->ScrollbarTargetMultiplier = 0;
    this->bHasMenuTabFocus = false;
    this->InputEnabled = false;
}

