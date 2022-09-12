#include "PairedDisconnectTrigger.h"
#include "Components/ArrowComponent.h"

class AActor;
class UPrimitiveComponent;

void APairedDisconnectTrigger::OnTriggerEndOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex) {
}

void APairedDisconnectTrigger::OnTriggerBeginOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

APairedDisconnectTrigger::APairedDisconnectTrigger() {
    this->ForwardArrowComponent = CreateDefaultSubobject<UArrowComponent>(TEXT("ForwardArrowComponent"));
    this->TriggerType = EPairTriggerType::InitialCheckTrigger;
    this->PairedTrigger = NULL;
    this->ForgetHeroesOnOverlapEnd = false;
    this->RequiredQuestLine = NULL;
    this->RequiredQueststate = NULL;
}

