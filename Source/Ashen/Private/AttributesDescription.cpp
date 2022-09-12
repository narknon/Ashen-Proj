#include "AttributesDescription.h"

FAttributesDescription::FAttributesDescription() {
    this->Weight = EWeight::None;
    this->MaxHealth = 0;
    this->MultiplayerHealthScale = 0.00f;
    this->MaxStamina = 0.00f;
    this->StaminaPercentageDrainPerDelta = 0.00f;
    this->StaminaDrainPerMinute = 0.00f;
    this->DamageReduction = 0.00f;
    this->BleedReduction = 0.00f;
    this->StaggerReduction = 0.00f;
    this->StaminaRegenerationDelay = 0.00f;
    this->StaminaRegenerationPerSecond = 0.00f;
    this->BleedsRequiredToWound = 0;
    this->BleedDamagePerSecond = 0;
    this->BleedDecayDelay = 0.00f;
    this->MaxBleedingTime = 0.00f;
    this->MaxWoundedTime = 0.00f;
    this->BleedEffect = NULL;
    this->BleedSound = NULL;
    this->MaxStagger = 0;
    this->StaggerDecayDelay = 0.00f;
    this->MaxStaggeredTime = 0.00f;
    this->DefaultPoiseValue = 0.00f;
    this->RagdollPushStrengthThreshold = 0.00f;
    this->RagdollPushStrengthMultiplier = 0.00f;
    this->PoiseInvulnerabilityTimePostStagger = 0.00f;
    this->PoiseInvulnerabilityTimePostStun = 0.00f;
    this->PoiseInvulnerabilityTimePostKnockdown = 0.00f;
    this->PoiseDamageThresholdToIgnorePoiseInvulnerability = 0.00f;
    this->bCannotLockOnTo = false;
    this->bLockOnSupported = false;
    this->LockOnDistance = 0.00f;
    this->LockOnSpeed = 0.00f;
    this->bLockOnUsesAnimation = false;
    this->LockOnAnimationBlockedSpeed = 0.00f;
    this->bSpineBendSupported = false;
    this->SpineBendSpeed = 0.00f;
    this->SpineBendLimit = 0.00f;
    this->bHeadLookSupported = false;
    this->HeadPitchSpeed = 0.00f;
    this->HeadPitchLimit = 0.00f;
    this->HeadYawSpeed = 0.00f;
    this->HeadYawLimit = 0.00f;
    this->SpawnLootOnDeath = NULL;
    this->NpcAcquiredKilledAmount = 0.00f;
}

