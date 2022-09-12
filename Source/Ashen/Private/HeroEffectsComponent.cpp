#include "HeroEffectsComponent.h"

class UCurveFloat;
class UObject;

void UHeroEffectsComponent::TriggerProgressionMilestone() {
}

void UHeroEffectsComponent::ProcFx_ProcessTick(float DeltaSeconds, FVector CenterLoc, FRotator CenterRot) {
}

void UHeroEffectsComponent::ProcFx_GetSpawnLocScore(FVector InputVector, int32& Score) {
}

void UHeroEffectsComponent::PostProcessSetEffectBlendValue(float InBlend) {
}

void UHeroEffectsComponent::PostProcessSetEffect(UObject* EffectToPlay, UCurveFloat* PlayCurve, float SetWeight) {
}

void UHeroEffectsComponent::PostProcessPlayCurve(UCurveFloat* Curve) {
}

void UHeroEffectsComponent::PostProcessDisableEffect() {
}

void UHeroEffectsComponent::PlayPostProcess(EPostProcessEffect Effect) {
}

UHeroEffectsComponent::UHeroEffectsComponent() {
    this->Hero = NULL;
    this->PhysicalMaterialDataTable = NULL;
    this->ProcFx_CheckRate = 0.80f;
    this->ProcFx_SpawnRange = 700.00f;
    this->ProgressionMilestoneEffects = NULL;
    this->ProgressionMilestoneAudioEvent = NULL;
    this->PostProcessInterpCurve = NULL;
}

