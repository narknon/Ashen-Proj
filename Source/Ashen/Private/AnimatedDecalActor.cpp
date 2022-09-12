#include "AnimatedDecalActor.h"

class UCurveFloat;
class UMaterialInterface;

void AAnimatedDecalActor::UpdateMaterialInstance() {
}

void AAnimatedDecalActor::SetRandomSize(float Low, float High) {
}

void AAnimatedDecalActor::SetDecalSpreadFalloff(float MaxValue, float CurrentValue) {
}

void AAnimatedDecalActor::ProcessTransitionOut(float DeltaSeconds) {
}

void AAnimatedDecalActor::ProcessTransitionIn(float DeltaSeconds) {
}

void AAnimatedDecalActor::OnPostInstanceInit_Implementation() {
}

void AAnimatedDecalActor::DynamicFade(float DeltaSeconds) {
}

void AAnimatedDecalActor::ConfigureSpawned(UCurveFloat* SetCurve, UMaterialInterface* SetMaterialInterface, FName SetAdjustmentValue) {
}

AAnimatedDecalActor::AAnimatedDecalActor() {
    this->RandomSizeLow = 1.00f;
    this->RandomSizeHigh = 1.00f;
    this->bIgnoreSpread = false;
    this->FadeMultiplier = 0.00f;
    this->DecalMaterialInstance = NULL;
    this->CurrentDecalFade = 0.00f;
    this->bUseDynamicFade = true;
    this->TransitionInTime = 1.00f;
    this->TransitionOutTime = 3.00f;
    this->LifeTime = 5.00f;
    this->bUseAnimationCurve = false;
    this->AnimationCurve = NULL;
}

