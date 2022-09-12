#include "AshenMovementComponent.h"
#include "Net/UnrealNetwork.h"

void UAshenMovementComponent::SetAISpeed(EMovementSpeedDescription Speed) {
}

bool UAshenMovementComponent::IsSlope(float InSlidingFloorZ, float InSlidingFloorAngle) const {
    return false;
}

bool UAshenMovementComponent::IsSlidableSlope() const {
    return false;
}

float UAshenMovementComponent::GetMaxSpeedForDescription(EMovementSpeedDescription Speed) const {
    return 0.0f;
}

bool UAshenMovementComponent::GetIsJumping() const {
    return false;
}

float UAshenMovementComponent::GetInputDirectionYawRelativeToForward() const {
    return 0.0f;
}

float UAshenMovementComponent::GetDirectionYawRelativeToForward() const {
    return 0.0f;
}

float UAshenMovementComponent::GetCurrentXYTurnAngle() const {
    return 0.0f;
}

float UAshenMovementComponent::GetAshenCharacterMaxSpeed() const {
    return 0.0f;
}

EMovementSpeedDescription UAshenMovementComponent::GetAISpeed() const {
    return EMovementSpeedDescription::MOVE_None;
}

int32 UAshenMovementComponent::ApplyRootMotionTranslate(const FString& ForceName, const FVector& Translate, float Duration, bool OverrideRootMotion) {
    return 0;
}

void UAshenMovementComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UAshenMovementComponent, LastRequestedInput);
    DOREPLIFETIME(UAshenMovementComponent, LastInputVector);
    DOREPLIFETIME(UAshenMovementComponent, CurrentAISpeedModifer);
    DOREPLIFETIME(UAshenMovementComponent, bHasNoInput);
    DOREPLIFETIME(UAshenMovementComponent, bIsSliding);
    DOREPLIFETIME(UAshenMovementComponent, bIsWalking);
    DOREPLIFETIME(UAshenMovementComponent, bIsWalkingOverride);
    DOREPLIFETIME(UAshenMovementComponent, bIsRunning);
    DOREPLIFETIME(UAshenMovementComponent, bShouldBeSprinting);
    DOREPLIFETIME(UAshenMovementComponent, bIsSprinting);
    DOREPLIFETIME(UAshenMovementComponent, bIsFlying);
    DOREPLIFETIME(UAshenMovementComponent, LocalizedLongitudinalAcceleration);
    DOREPLIFETIME(UAshenMovementComponent, LocalizedLateralAcceleration);
    DOREPLIFETIME(UAshenMovementComponent, CurrentSpeedDesc);
    DOREPLIFETIME(UAshenMovementComponent, bUseLastRequestedInputWhenNone);
}

UAshenMovementComponent::UAshenMovementComponent() {
    this->CurrentAISpeedModifer = 1.00f;
    this->AISpeedModiferMin = 0.00f;
    this->AISpeedModiferMax = 1.00f;
    this->SlidingFloorAngle = 0.00f;
    this->SlidingFloorZ = 0.00f;
    this->StopSlidingFloorAngle = 0.00f;
    this->StopSlidingFloorZ = 0.00f;
    this->SlideAcceleration = 0.00f;
    this->MaxSlideSpeed = 0.00f;
    this->SlideDirectionForwardTestOffset = 0.00f;
    this->SlideDirectionForwardDotMin = 0.00f;
    this->FastSlideThreshold = 800.00f;
    this->SlideStopBreakingDeceleration = 100.00f;
    this->SlideStopGroundFriction = 2.00f;
    this->bHasNoInput = false;
    this->bIsSliding = false;
    this->SlideTimeBuffer = 0.00f;
    this->SlideStuckTimeThreshold = 0.50f;
    this->SlideUnstuckWindowTime = 1.00f;
    this->SlideStuckDeltaTolerance = 0.05f;
    this->CombatWalkSpeed = 0.00f;
    this->bIsWalking = false;
    this->bIsWalkingOverride = false;
    this->bRestrictToNavMesh = false;
    this->WalkStartInputThreshold = 0.00f;
    this->WalkEndInputThreshold = 0.00f;
    this->CombatRunSpeed = 0.00f;
    this->CombatWalkScale = 1.00f;
    this->CombatRunScale = 1.00f;
    this->CombatRunSpeedInWater = 0.00f;
    this->bIsRunning = false;
    this->RunStartInputThreshold = 0.00f;
    this->RunEndInputThreshold = 0.00f;
    this->SprintSpeed = 0.00f;
    this->SprintSpeedInWater = 0.00f;
    this->bShouldBeSprinting = false;
    this->bIsSprinting = false;
    this->bIsFlying = false;
    this->LocalizedLongitudinalAcceleration = 0.00f;
    this->LocalizedLateralAcceleration = 0.00f;
    this->MaxStepDownHeight = 20.00f;
    this->DebugDrawSlide = false;
    this->CurrentSpeedDesc = EMovementSpeedDescription::MOVE_None;
    this->FlightVelocityWeight = 0.00f;
    this->TurnDegreesPerSecondAtFullSpeed = 0.00f;
    this->TurnDegreesPerSecondAtRun = 0.00f;
    this->TurnDegreesPerSecondAtWalk = 0.00f;
    this->bAllowTurningBoost = true;
    this->SubmergedHeight = 0.25f;
    this->AIInputChangeRate = 4.00f;
    this->HorizontalSmallJumpVelocity = 0.00f;
    this->VerticalSmallJumpVelocity = 0.00f;
    this->HorizontalLongJumpVelocity = 0.00f;
    this->VerticalLongJumpVelocity = 0.00f;
    this->HorizontalSpotJumpVelocity = 0.00f;
    this->VerticalSpotJumpVelocity = 0.00f;
    this->bUseLastRequestedInputWhenNone = false;
    this->IsMotionMatching = false;
    this->AdjustmentAngle = 0.00f;
    this->RelativeMoveDir = EMovementRelativeDirection::DIR_None;
    this->AdjustmentMoveDir = EMovementRelativeDirection::DIR_None;
    this->BlendRatio = 0.00f;
    this->Creature = NULL;
    this->Hero = NULL;
    this->bIsRunningEnabled = true;
}

