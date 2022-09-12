#include "QuestTrigger.h"

class AActor;
class UPrimitiveComponent;

void AQuestTrigger::OnTriggerEndOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex) {
}

void AQuestTrigger::OnTriggerBeginOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}


AQuestTrigger::AQuestTrigger() {
    this->QuestTriggerByte = 0;
}

