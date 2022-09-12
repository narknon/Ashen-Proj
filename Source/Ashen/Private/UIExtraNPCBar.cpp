#include "UIExtraNPCBar.h"

class UAshenEventData;

void UUIExtraNPCBar::RemoveExtraNPCHealthBar() {
}

void UUIExtraNPCBar::OnExtraNPCEvent(UAshenEventData* EventData) {
}

FLinearColor UUIExtraNPCBar::GetTintColourAtInterp(float CurrentAlpha) const {
    return FLinearColor{};
}

float UUIExtraNPCBar::GetOpacity() const {
    return 0.0f;
}

float UUIExtraNPCBar::GetNPCMaxHealth() {
    return 0.0f;
}

float UUIExtraNPCBar::GetNPCHealthAsPercent() {
    return 0.0f;
}

float UUIExtraNPCBar::GetNPCHealth() {
    return 0.0f;
}

bool UUIExtraNPCBar::CheckForAdditionToHud() {
    return false;
}

void UUIExtraNPCBar::AddExtraNPCHealthbar(ENpcType Type) {
}

UUIExtraNPCBar::UUIExtraNPCBar() {
    this->FadeInAtPoints = 5.00f;
    this->TextureMinPercent = 0.10f;
    this->TextureMaxPercent = 0.89f;
    this->PointsDisplayLerpSpeed = 50.00f;
    this->FadeTime = 0.50f;
    this->NpcIconParentMaterial = NULL;
    this->OwningHero = NULL;
    this->CurrentNpc = ENpcType::None;
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

