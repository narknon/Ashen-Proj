#include "CreatureEffectsData.h"

FCreatureEffectsData::FCreatureEffectsData() {
    this->BloodImpact = NULL;
    this->BloodWeaponTrail = NULL;
    this->CriticalBloodImpact = NULL;
    this->CriticalBloodWeaponTrail = NULL;
    this->HitFlash = NULL;
    this->RollDecal = NULL;
    this->SlideDecal = NULL;
    this->SlideParticles = NULL;
    this->DisintegrateParticles = NULL;
    this->SpawnParticles = NULL;
    this->AshFootstepDecal = NULL;
    this->FootImplantEffect = NULL;
    this->WaterSplashEffect = NULL;
    this->WaterWakeEffect = NULL;
    this->WaterWakeEffectHeavy = NULL;
    this->SapWaterSplashEffect = NULL;
    this->SapWaterWakeEffect = NULL;
    this->SapWaterWakeEffectHeavy = NULL;
    this->LavaSplashEffect = NULL;
    this->LavaWakeEffect = NULL;
    this->LavaWakeEffectHeavy = NULL;
    this->SulphurSplashEffect = NULL;
    this->SulphurWakeEffect = NULL;
    this->SulphurWakeEffectHeavy = NULL;
    this->WaterRollEffect = NULL;
    this->SulphurRollEffect = NULL;
    this->LavaRollEffect = NULL;
    this->SapRollEffect = NULL;
    this->AshSlideFootEffect = NULL;
    this->FeedbackFootplantImpulse = EFeedbackInput::None;
    this->FeedbackFootplantImpulseRange = 0.00f;
}

