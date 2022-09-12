#include "DiasoraTrigger.h"

class AActor;
class UPrimitiveComponent;
class ACreature;

void ADiasoraTrigger::OnTriggerEndOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex) {
}

void ADiasoraTrigger::OnTriggerBeginOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

FAshenDamage ADiasoraTrigger::GetDamage(ACreature* CreatureRef) {
    return FAshenDamage{};
}

ADiasoraTrigger::ADiasoraTrigger() {
    this->TriggerType = EDiasoraTriggerType::None;
    this->DiasoraOwner = NULL;
    this->LerpTime = 0.00f;
    this->LerpTimer = 0.00f;
}

