#include "UIPhase2MenuTab.h"

class UAshenEventData;
class UUIPhase2MenuTab;
class UUIMenuTutorial;
class UUIPhase2Menu;

void UUIPhase2MenuTab::UpdateFunc(float DeltaTime) {
}

void UUIPhase2MenuTab::TransferCloseDelegatesToNewTab(UUIPhase2MenuTab* NewTabRef) {
}

void UUIPhase2MenuTab::StandardGiveFocus_Internal() {
}

void UUIPhase2MenuTab::StandardGiveFocus() {
}

void UUIPhase2MenuTab::SetupTutorials() {
}


void UUIPhase2MenuTab::SetupThisTab_Internal(UUIPhase2Menu* OwnerRefrence, bool StationaryWidget, bool DissableTempFading) {
}

void UUIPhase2MenuTab::SetupThisTab(UUIPhase2Menu* OwnerRef, bool StationaryWidget, bool DisableTempFading) {
}

void UUIPhase2MenuTab::SetupFunc(UUIPhase2Menu* OwnerRefrence, bool StationaryWidget, bool DissableTempFading) {
}

void UUIPhase2MenuTab::SetTempFadeoutDissabled(bool Dissabled) {
}

void UUIPhase2MenuTab::SetStationaryTab(bool Stationary) {
}



void UUIPhase2MenuTab::OnTutorialEvent(UAshenEventData* Data) {
}

void UUIPhase2MenuTab::OnSelectableSlotFocused(UAshenEventData* EventData) {
}




bool UUIPhase2MenuTab::IsStationaryTab() {
    return false;
}

bool UUIPhase2MenuTab::GetTempFadeoutDissabled() {
    return false;
}

FVector2D UUIPhase2MenuTab::GetCurrentPosition() {
    return FVector2D{};
}

float UUIPhase2MenuTab::GetCurrentAlpha() {
    return 0.0f;
}

void UUIPhase2MenuTab::FocusOnThisTab(bool FocusIfTrue) {
}

void UUIPhase2MenuTab::FadeOutTab2Close(ECompassDirs Dir) {
}

void UUIPhase2MenuTab::FadeInTabFromClose(ECompassDirs Dir) {
}



void UUIPhase2MenuTab::BackOneTabPressed() {
}

UUIMenuTutorial* UUIPhase2MenuTab::AddTutorialWidget(FUITutorialData TutorialData, bool Setup) {
    return NULL;
}

UUIPhase2MenuTab::UUIPhase2MenuTab() {
    this->Owner = NULL;
    this->bIsThisTabInFocus = false;
    this->TabWidth = 0.00f;
    this->bRightHandScreenFocus = false;
    this->FadeSpeedModifier = 1.00f;
    this->FadeSpeedModifierExit = 1.00f;
    this->FadeDistanceModifier = 1.00f;
    this->bIgnorePauseFadeins = false;
    this->LastButtonPressed = EInputUIEventTypes::None;
    this->cStartLerpAlpha = 0.00f;
    this->cFinalLerpAlpha = 0.00f;
    this->cCurrentLerpAlpha = 0.00f;
    this->TutorialPanel = NULL;
    this->TutorialPanel2 = NULL;
    this->bStationaryWidget = false;
    this->bMapCustomFading = false;
    this->FreshConstruct = false;
    this->bTempFadeOutDissabled = false;
    this->bHasCustomFocusLogic = false;
    this->bLerpingPosition = false;
    this->cLerpPositionTime = 0.00f;
    this->cLerpPositionTimer = 0.00f;
    this->PositionBlendCurve = NULL;
    this->bLerpingAlpha = false;
    this->SetVisOnEnd = false;
    this->Fade_IsIn = true;
    this->VisibilityWhenFinished = ESlateVisibility::Visible;
    this->cLerpAlphaTime = 0.00f;
    this->cLerpAlphaTimer = 0.00f;
    this->AlphaBlendCurve = NULL;
}

