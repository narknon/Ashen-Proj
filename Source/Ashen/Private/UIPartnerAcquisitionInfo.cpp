#include "UIPartnerAcquisitionInfo.h"

class UAshenEventData;

void UUIPartnerAcquisitionInfo::OnPositionBuddyPingReceived(UAshenEventData* EventData) {
}

void UUIPartnerAcquisitionInfo::OnMultiplayerLost(UAshenEventData* EventData) {
}

void UUIPartnerAcquisitionInfo::OnMultiplayerGained(UAshenEventData* EventData) {
}

void UUIPartnerAcquisitionInfo::OnBuddyPinnedReceived(UAshenEventData* EventData) {
}

void UUIPartnerAcquisitionInfo::OnBuddyDownedReceived(UAshenEventData* EventData) {
}

void UUIPartnerAcquisitionInfo::OnAICompanionLost(UAshenEventData* EventData) {
}

void UUIPartnerAcquisitionInfo::OnAICompanionGained(UAshenEventData* EventData) {
}

FLinearColor UUIPartnerAcquisitionInfo::GetTintColourAtInterp(float CurrentAlpha) const {
    return FLinearColor{};
}

float UUIPartnerAcquisitionInfo::GetPartnerMaxHealth() {
    return 0.0f;
}

float UUIPartnerAcquisitionInfo::GetPartnerHealthAsPercent() {
    return 0.0f;
}

float UUIPartnerAcquisitionInfo::GetPartnerHealth() {
    return 0.0f;
}

float UUIPartnerAcquisitionInfo::GetOpacity() const {
    return 0.0f;
}

bool UUIPartnerAcquisitionInfo::CheckForAdditionToHud() {
    return false;
}

UUIPartnerAcquisitionInfo::UUIPartnerAcquisitionInfo() {
    this->FadeInAtPoints = 5.00f;
    this->TextureMinPercent = 0.10f;
    this->TextureMaxPercent = 0.89f;
    this->PointsDisplayLerpSpeed = 50.00f;
    this->FadeTime = 0.50f;
    this->NpcIconParentMaterial = NULL;
    this->OwningHero = NULL;
    this->CurrentNpc = ENpcType::None;
    this->CurrentNpcState = ENpcUiAlertState::Default;
    this->ParentHud = NULL;
    this->AshenGameState = NULL;
    this->FlashAnimInterpCurve = NULL;
    this->TotalFlashAnimationTime = 0.00f;
    this->CurrentFlashAnimInterpValue = 0.00f;
    this->IconColourFlashMaxAlpha = 0.00f;
    this->InjuredRestingTintAlpha = 0.00f;
    this->FlashTintOnly = false;
    this->bIconTintAnimIsPlaying = false;
    this->InjuredIconFlashEndTime = 0.00f;
    this->TotalExpandIconAnimationTime = 0.00f;
    this->IconExpansionScaleCurve = NULL;
}

