#include "UIPlayerHud.h"

class UAshenUserWidget;
class UCurveFloat;
class UTextBlock;


void UUIPlayerHud::ResumePopupLockTimer(float Delay) {
}

bool UUIPlayerHud::RefreshLockTimerIfActive(UAshenUserWidget* WidgetToRegresh) {
    return false;
}

void UUIPlayerHud::QueueWidgetUpdate(UAshenUserWidget* NewWidget) {
}

void UUIPlayerHud::QueueNullUpdate(float Time) {
}


void UUIPlayerHud::PausePopupLockTimer() {
}

FAnchors UUIPlayerHud::GetLockonReticleFinalScreenAnchor(float TimeSinceLastLockon, UCurveFloat* LerpCurve) {
    return FAnchors{};
}

UAshenUserWidget* UUIPlayerHud::GetLockHolder() {
    return NULL;
}

UTextBlock* UUIPlayerHud::CreateTextWidget() {
    return NULL;
}

UUIPlayerHud::UUIPlayerHud() {
    this->TimerPaused = false;
    this->CurrentWidgetLockOwner = NULL;
}

