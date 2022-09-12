#include "IdleAction.h"

class UAnimMontage;

void AIdleAction::OnMontageEnded(UAnimMontage* _Montage, bool bInterrupted) {
}

void AIdleAction::OnDamageTaken(const FAshenDamage& Damage) {
}

AIdleAction::AIdleAction() {
    this->EnterIdleMontage = NULL;
    this->IdleLoopMontage = NULL;
    this->EndIdleMontage = NULL;
    this->EndIdleFastMontage = NULL;
}

