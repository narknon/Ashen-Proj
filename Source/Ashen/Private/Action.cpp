#include "Action.h"

class UAnimMontage;
class UAshenAnimNotify;
class AAction;

bool AAction::Validate() const {
    return false;
}

void AAction::Start() {
}

void AAction::ResetMontageEndDelegate() {
}

void AAction::Reset() {
}

bool AAction::PlayAndBindMontageEndDelegate(UAnimMontage* Replacement, float StartTime) {
    return false;
}

void AAction::OnMontageEnded(UAnimMontage* _Montage, bool bInterrupted) {
}

void AAction::Notify(const UAshenAnimNotify* AshenNotify) {
}

bool AAction::IsMovementBlocking() const {
    return false;
}

bool AAction::Interrupt(AAction* InterruptingAction) {
    return false;
}

void AAction::CleanUp() {
}

void AAction::Cancel() {
}

AAction::AAction() {
    this->Creature = NULL;
    this->Humanoid = NULL;
    this->SimpleAnimInstance = NULL;
    this->HumanoidAnimInstance = NULL;
    this->Montage = NULL;
    this->MontageStartTime = 0.00f;
    this->Type = EActionType::None;
    this->CanDamageInterrupt = true;
    this->CanBePushed = true;
    this->bBlockFlinchHitReact = false;
    this->bIsEarlyRollUnlocked = false;
    this->bIsEarlyMovementUnlocked = false;
    this->bIsEarlyOutUnlocked = false;
    this->bInputEnabled = true;
    this->RestrictToNavMesh = false;
    this->HasLocationOverride = false;
    this->LocationLerpTime = 0.00f;
    this->HasDirectionOverride = false;
    this->LocksCombatStance = false;
    this->DirectionLerpTime = 0.00f;
    this->HasMovementModeOverride = false;
    this->MovementMode = MOVE_None;
    this->CustomMode = ECustomMovementMode::CUSTOM_None;
    this->HasPhysicsProfileOverride = false;
    this->HeadLookAlpha = 0.00f;
    this->ContinueMontageOnInterrupt = false;
    this->bAllowBlockingDuringAction = false;
    this->HasLockOnDisabled = false;
    this->HasInvisibilityToAI = false;
    this->State = EActionState::Pending;
    this->IsRemoteAction = false;
}

