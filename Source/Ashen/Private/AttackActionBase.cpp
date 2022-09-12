#include "AttackActionBase.h"

class AHero;
class AActor;

void AAttackActionBase::WeaponBeginOverlapDelegate(AActor* OverlappedActor, AActor* OtherActor) {
}

bool AAttackActionBase::IsAttackStartUp() {
    return false;
}

bool AAttackActionBase::ContinueAttack(const FAttackDescription& AttackDesc, AHero* Hero) {
    return false;
}

AAttackActionBase::AAttackActionBase() {
    this->Weapon = NULL;
    this->bCanRebound = false;
    this->bContinueAttack = false;
    this->AttackMontagesPlayed = 0;
    this->AttackTimer = 0.00f;
    this->bStaminaDrained = false;
}

