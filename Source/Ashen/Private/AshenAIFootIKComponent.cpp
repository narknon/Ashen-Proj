#include "AshenAIFootIKComponent.h"

void UAshenAIFootIKComponent::UpdateIK(float DeltaTime) {
}

void UAshenAIFootIKComponent::ResetIK() {
}

float UAshenAIFootIKComponent::GetSteppingSpeedMod() const {
    return 0.0f;
}

float UAshenAIFootIKComponent::GetPelvisState(FName BoneName, FVector& PelvisLocalOffsetOut, FRotator& PelvisLocalRotationOut, FVector& PelvisSocketOut) const {
    return 0.0f;
}

float UAshenAIFootIKComponent::GetPelvisLocalOffset(FVector& PelvisLocalOffsetOut) const {
    return 0.0f;
}

float UAshenAIFootIKComponent::GetLocomotionPlayRateMod() const {
    return 0.0f;
}

FName UAshenAIFootIKComponent::GetLeadingFoot() const {
    return NAME_None;
}

float UAshenAIFootIKComponent::GetFootState(FName BoneName, FVector& FootLocationOut, FVector& JointLocationOut, bool& bLocked) const {
    return 0.0f;
}

float UAshenAIFootIKComponent::GetCurrentSteppingAlpha() const {
    return 0.0f;
}

EAIFootIKStepMode UAshenAIFootIKComponent::GetCurrentStepMode() const {
    return EAIFootIKStepMode::None;
}

float UAshenAIFootIKComponent::GetCurrentSlopeAlpha() const {
    return 0.0f;
}

void UAshenAIFootIKComponent::GetCurrentPelvisResult(FName BoneName, FAIFootIKPelvisResult& Result) const {
}

void UAshenAIFootIKComponent::GetCurrentFootResult(FName BoneName, FAIFootIKResult& Result) const {
}

UAshenAIFootIKComponent::UAshenAIFootIKComponent() {
    this->bEnableOnBeginPlay = false;
    this->bTraceToComplex = true;
    this->bStabilizeIdleOnStop = true;
    this->RootBoneName = TEXT("Root");
    this->CollisionCorrectionRate = 40.00f;
    this->RootGroundOffsetZ = 0.00f;
    this->StepModeBlendRate = 4.00f;
    this->FlatGroundCutOff = 4.00f;
    this->MinGroundDifferenceForStepCalc = 10.00f;
    this->SpineCorrectionAlpha = 0.75f;
    this->IdleStabilzeAfterTime = 0.25f;
    this->TeleportResetDistance = 100.00f;
    this->Creature = NULL;
    this->SkelMesh = NULL;
}

