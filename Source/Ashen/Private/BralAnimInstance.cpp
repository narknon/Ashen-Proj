#include "BralAnimInstance.h"

UBralAnimInstance::UBralAnimInstance() {
    this->ElderDark = NULL;
    this->JumpOnPillarMontage = NULL;
    this->IdlePillarMontage = NULL;
    this->IdleRootMontage = NULL;
    this->JumpOffPillarMontage = NULL;
    this->JumpOffPillarLeftMontage = NULL;
    this->JumpOffPillarRightMontage = NULL;
    this->JumpOffPillarStartMontage = NULL;
    this->HoleEnterMontage = NULL;
    this->HoleIdleMontage = NULL;
    this->FlinchMontage = NULL;
    this->StrafeLeftMontage = NULL;
    this->StrafeRightMontage = NULL;
    this->StrafeLeftWoundedMontage = NULL;
    this->StrafeRightWoundedMontage = NULL;
    this->RoarMontage = NULL;
    this->EscapeMontage = NULL;
    this->IdleToRunMontage = NULL;
    this->RunToIdleMontage = NULL;
    this->RunTurnLeftMontage = NULL;
    this->RunTurnRightMontage = NULL;
    this->IntroActionSourceMontage = NULL;
    this->IntroActionTargetMontage = NULL;
    this->BackstabMontage = NULL;
    this->BackstabTargetMontage = NULL;
    this->LightBurstStart = NULL;
    this->LightBurstLoop = NULL;
    this->LightBurstEnd = NULL;
    this->TurningInput = 0.00f;
    this->TargetLateralInput = 0.00f;
    this->bUseHighRun = false;
    this->IsWounded = false;
    this->bIsOnPillar = false;
    this->bIsInHole = false;
}

