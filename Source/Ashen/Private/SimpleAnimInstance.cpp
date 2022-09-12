#include "SimpleAnimInstance.h"
#include "Net/UnrealNetwork.h"

class UAnimMontage;
class AAction;


UAnimMontage* USimpleAnimInstance::GetActionDefaultMontageSingle(EActionType Type, int32 SubIndex) {
    return NULL;
}

bool USimpleAnimInstance::AshenIsPlayingSlotAnimationWithinMontage(UAnimMontage* BaseMontage, FName SlotName) {
    return false;
}

void USimpleAnimInstance::ActionStateChange(AAction* Action, EActionState Current, EActionState Previous) {
}

void USimpleAnimInstance::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(USimpleAnimInstance, IsWalking);
    DOREPLIFETIME(USimpleAnimInstance, IsRunning);
}

USimpleAnimInstance::USimpleAnimInstance() {
    this->AshenIKComp = NULL;
    this->FlinchAnimation = NULL;
    this->SitWaterAnimation = NULL;
    this->SitWaterLoopAnimation = NULL;
    this->StandWaterAnimation = NULL;
    this->KnockdownBackwardsAnimation = NULL;
    this->KnockdownGetUpAnimation = NULL;
    this->PivotMontage180Cutoff = 150.00f;
    this->PivotMontage180LerpLimit = 60.00f;
    this->PivotMontage90LerpLimit = 60.00f;
    this->JumpDownCutOffRatio = 0.60f;
    this->JumpLongCutOffRatio = 0.80f;
    this->JumpLongMin = 0.00f;
    this->Creature = NULL;
    this->Movement = NULL;
    this->IsLocallyControlled = false;
    this->IsWalking = false;
    this->IsRunning = false;
    this->WindStrength = 0.00f;
    this->SpineBendPitch = 0.00f;
    this->HeadLookYaw = 0.00f;
    this->HeadLookPitch = 0.00f;
    this->HeadLookAlpha = 0.00f;
    this->WarpIntensity = 0.00f;
    this->WarpRatio = 0.00f;
    this->ComboBlendAssist = 0.00f;
    this->IsMotionAnimReadyForTransition = false;
    this->MotionMatchAnimRatioThreshold = 0.10f;
    this->MovementMode = MOVE_None;
    this->CustomMovementMode = ECustomMovementMode::CUSTOM_None;
    this->RelativeMoveDir = EMovementRelativeDirection::DIR_None;
    this->FirstAnimationStartOffset = 0.00f;
    this->bAIHasMovementInput = false;
    this->AITravelLocoBlendRateMove = 10.00f;
    this->AITravelLocoBlendRateIdle = 3.00f;
    this->AITravelLocoPlayRate = 1.00f;
    this->HitReactLifeTime = 0.50f;
    this->HitReactBlendAlpha = 1.00f;
}

