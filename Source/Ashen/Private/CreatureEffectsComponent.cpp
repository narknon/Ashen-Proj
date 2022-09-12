#include "CreatureEffectsComponent.h"

void UCreatureEffectsComponent::TickSlide(float DeltaSeconds) {
}

bool UCreatureEffectsComponent::IsWaterInteractionActive() {
    return false;
}

void UCreatureEffectsComponent::CheckForRollEffects() {
}

UCreatureEffectsComponent::UCreatureEffectsComponent() {
    this->Creature = NULL;
    this->GameMode = NULL;
    this->UseSlide = true;
    this->GetCharacter = NULL;
    this->PhysicalMaterialDataTable = NULL;
    this->WaterWalkSound = NULL;
    this->WaterWalkSoundShallow = NULL;
    this->WaterWakeVelocityThreshold = 100.00f;
    this->WaterWakeMovementSoundThreshold = 200.00f;
    this->WaterSplashVelocityThreshold = 10.00f;
    this->WaterWakeTraceSize = 8.00f;
    this->RollDecalForwardOffset = 0.00f;
    this->bWaterInteractionActive = false;
    this->FootprintTraceMultiplier = 1.25f;
    this->SpawnFootprintDecal = NULL;
    this->SlideEffectsDistance = 0.10f;
    this->bDisableFootprintsOnXbox = true;
    this->AkMaterialSwitchGroup = TEXT("Material");
    this->AkRunSpeedSwitchGroup = TEXT("Player_Run_Speed");
    this->AkWalkSwitchState = TEXT("Walk");
    this->AkRunSwitchState = TEXT("Run");
    this->AkWaterDepthSwitchGroup = TEXT("Player_Footstep_Water_Depth");
    this->AkWaterDeepSwitchState = TEXT("Deep");
    this->AkWaterShallowSwitchState = TEXT("Shallow");
    this->AkWaterNoneSwitchState = TEXT("None");
    this->SubmergedDeepThreshold = 0.05f;
    this->FootstepAudioEvent = NULL;
    this->StartSlidingAudioEvent = NULL;
    this->StopSlidingAudioEvent = NULL;
    this->SplashAudioEvent = NULL;
    this->UseFootSockets.AddDefaulted(2);
    this->FootplantCooldown = 0.20f;
    this->OverrideFootprintDecal = NULL;
}

