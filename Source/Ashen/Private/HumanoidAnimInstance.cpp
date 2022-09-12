#include "HumanoidAnimInstance.h"

bool UHumanoidAnimInstance::WalkingRunningOrSprinting() {
    return false;
}

void UHumanoidAnimInstance::SprintReset(const FAnimNode_StateMachine& SM, int32 prev, int32 Next) {
}

bool UHumanoidAnimInstance::MovementActionActive() {
    return false;
}

void UHumanoidAnimInstance::AnimReset(const FAnimNode_StateMachine& SM, int32 prev, int32 Next) {
}

UHumanoidAnimInstance::UHumanoidAnimInstance() {
    this->HopBackAnimation = NULL;
    this->LootBodyStartAnimation = NULL;
    this->LootBodyEndAnimation = NULL;
    this->LootChestAnimation = NULL;
    this->ConsumeFoodAnimation = NULL;
    this->SyncBralIntoMontage = NULL;
    this->TeleportToStatueMontage = NULL;
    this->Humanoid = NULL;
    this->Hero = NULL;
    this->FallState = EFallState::None;
    this->IsInCombatStance = false;
    this->LateralInput = 0.00f;
    this->TargetLateralInput = 0.00f;
    this->CameraLongitudinalInput = 0.00f;
    this->CameraLateralInput = 0.00f;
    this->LongitudinalInput = 0.00f;
    this->TargetLongitudinalInput = 0.00f;
    this->CharacterVelocity = 0.00f;
    this->IsSprinting = false;
    this->AccelDescription = EAccelerationDescription::ACCEL_None;
    this->IsHoldingLanternUp = false;
    this->IsHoldingShieldUp = false;
    this->TreadingWaterDepthRatio = 0.00f;
    this->IsHoldingWaterbottle = false;
    this->LockOnPitchAdjustment = 0.00f;
    this->IsWounded = false;
    this->IsAiming = false;
    this->IsThrowing = false;
    this->bHasMovementInput = false;
    this->bHoldingTwoHandWeapon = false;
    this->bRotationLocked = false;
    this->IsDead = false;
    this->Using2Hander = false;
    this->IKPlayrateMod = 0.00f;
    this->IsSprintingFullyBlended = false;
    this->TravelLean = 0.00f;
    this->TravelLeanRate = 1.00f;
    this->TravelLeanCap = 20.00f;
    this->TravelLeanForwardCutoff = 0.25f;
    this->TravelLeanDecayRate_Stabilize = 10.00f;
    this->TravelLeanDecayRate_Reverse = 30.00f;
    this->TravelLeanDecayRate_End = 60.00f;
    this->IsSlidingFast = false;
    this->DistanceFromStartMove = 0.00f;
    this->DistanceTillStop = 0.00f;
    this->MinRunVeloctiy = 0.00f;
    this->AnimTimeRemainingRatio = 0.00f;
    this->bMotionFinished = false;
    this->ExternalRootMotionMode = ERootMotionMode::NoRootMotionExtraction;
    this->IsRotating = false;
    this->RotationAmmountThisUpdate = 0.00f;
    this->AccumulatedRotation = 0.00f;
    this->TargetRotation = 0.00f;
    this->RotDir = EMovementRelativeRotation::ROT_None;
    this->RotDirCache = EMovementRelativeRotation::ROT_None;
    this->IsLeavingSprint = false;
    this->DodgeBlendInput = 0.00f;
    this->bUseDodgeBlend = false;
    this->DodgeLeftAnim = NULL;
    this->DodgeRightAnim = NULL;
    this->DodgeForwardAnim = NULL;
    this->DodgeBackwardsAnim = NULL;
    this->HeavyDodgeLeftAnim = NULL;
    this->HeavyDodgeRightAnim = NULL;
    this->HeavyDodgeForwardAnim = NULL;
    this->HeavyDodgeBackwardsAnim = NULL;
    this->HeavyRollAnim = NULL;
    this->MediumDodgeLeftAnim = NULL;
    this->MediumDodgeRightAnim = NULL;
    this->MediumDodgeForwardAnim = NULL;
    this->MediumDodgeBackwardsAnim = NULL;
    this->MediumRollAnim = NULL;
    this->LightDodgeLeftAnim = NULL;
    this->LightDodgeRightAnim = NULL;
    this->LightDodgeForwardAnim = NULL;
    this->LightDodgeBackwardsAnim = NULL;
    this->LightRollAnim = NULL;
    this->DodgeTurnLeft180 = NULL;
    this->DodgeTurnRight180 = NULL;
}

