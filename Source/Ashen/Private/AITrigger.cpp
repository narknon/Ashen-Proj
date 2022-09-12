#include "AITrigger.h"

class AActor;
class UPrimitiveComponent;

void AAITrigger::OnTriggerEndOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex) {
}

void AAITrigger::OnTriggerBeginOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

AAITrigger::AAITrigger() {
    this->bEnabled = true;
    this->TriggerType = EAITriggerType::Context;
    this->bGroupTrigger = true;
    this->bLeadersOnly = false;
    this->bTriggerOnEnter = true;
    this->bTriggerOnExit = false;
}

