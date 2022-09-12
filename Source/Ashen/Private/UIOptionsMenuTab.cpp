#include "UIOptionsMenuTab.h"

class UUIPhase2Menu;
class UButton;

void UUIOptionsMenuTab::UpdateFunc(float DeltaTime) {
}

void UUIOptionsMenuTab::StandardGiveFocus_Internal() {
}

void UUIOptionsMenuTab::SetupFunc(UUIPhase2Menu* OwnerRef, bool StationaryWidget, bool DissableTempFading) {
}

void UUIOptionsMenuTab::SetScaleOfTab(UButton* ButtonInTab) {
}

void UUIOptionsMenuTab::MouseHovered() {
}

void UUIOptionsMenuTab::GetGamma(float& Gamma) {
}

void UUIOptionsMenuTab::FadeOutTabTemp() {
}

void UUIOptionsMenuTab::FadeOutTab2Close(ECompassDirs Dir) {
}

void UUIOptionsMenuTab::FadeInTabFromTemp(bool ForceRefade, bool ForceSlideIsLeft) {
}

void UUIOptionsMenuTab::FadeInTabFromClose(ECompassDirs Dir) {
}

UUIOptionsMenuTab::UUIOptionsMenuTab() {
    this->TabIteration = 0;
    this->FocusedButton = 0;
    this->OldFocusedButton = 0;
    this->ScaleBox4Tab = NULL;
    this->SetupFadeInDirectionOverride = ECompassDirs::none;
    this->LastSetupFadeDirection = ECompassDirs::none;
    this->AutoScrolling = false;
    this->AutoScrollAfterN_Buttons = 0;
    this->PerButtonDisplacment = 0;
}

