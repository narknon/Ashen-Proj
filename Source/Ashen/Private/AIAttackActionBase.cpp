#include "AIAttackActionBase.h"

class AActor;
class UPrimitiveComponent;

void AAIAttackActionBase::OnWeaponBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

AAIAttackActionBase::AAIAttackActionBase() {
    this->AttackTimer = 0.00f;
    this->bGeoReboundEnabled = false;
    this->AttackMontagesPlayed = 0;
    this->Weapon = NULL;
    this->OffHandWeapon = NULL;
    this->OffHandShield = NULL;
}

