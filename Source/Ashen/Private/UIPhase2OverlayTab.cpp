#include "UIPhase2OverlayTab.h"

class UUIPhase2Menu;

void UUIPhase2OverlayTab::UpdateFunc(float DeltaTime) {
}

void UUIPhase2OverlayTab::SetupFunc(UUIPhase2Menu* OwnerRef, bool StationaryWidget, bool DissableTempFade) {
}

void UUIPhase2OverlayTab::OfficalCloseAfter(ECompassDirs Dir, float TimeTillFade) {
}

void UUIPhase2OverlayTab::FadeOutTabTemp(ECompassDirs Dir) {
}

void UUIPhase2OverlayTab::FadeOutTab2Close(ECompassDirs Dir) {
}

void UUIPhase2OverlayTab::FadeInTabFromTemp(ECompassDirs Dir) {
}

void UUIPhase2OverlayTab::FadeInTabFromClose(ECompassDirs Dir) {
}

UUIPhase2OverlayTab::UUIPhase2OverlayTab() {
    this->PopupType = EUIPopupQueType::None;
    this->PendingFadeDir = ECompassDirs::north;
    this->CountDownTimer = 0.00f;
    this->FadeOutPending = false;
}

