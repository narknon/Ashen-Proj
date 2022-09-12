#include "StreamingZoneTrigger.h"

class AActor;

void AStreamingZoneTrigger::ActorBeginOverlap(AActor* OverlappedActor, AActor* OtherActor) {
}

AStreamingZoneTrigger::AStreamingZoneTrigger() {
    this->GameMode = NULL;
}

