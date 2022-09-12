#include "WeaponAttackAction.h"

class AHero;

void AWeaponAttackAction::SecondaryInputReleased() {
}

void AWeaponAttackAction::HeavyInputReleased() {
}

EAttackType AWeaponAttackAction::GetCurrentAttackType() const {
    return EAttackType::Undefined;
}

bool AWeaponAttackAction::ContinueAttack(const FAttackDescription& AttackDesc, AHero* ForHero) {
    return false;
}

AWeaponAttackAction::AWeaponAttackAction() {
    this->AttackSwings = 0;
    this->NextAttackSwing = 0;
    this->CrossFadeRemaining = 0.00f;
    this->CrossFadeMax = 0.00f;
    this->ContinueMontage = NULL;
}

