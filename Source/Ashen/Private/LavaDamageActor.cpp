#include "LavaDamageActor.h"

class AActor;

void ALavaDamageActor::HandleEndOverlap(AActor* OverlappedActor, AActor* OtherActor) {
}

void ALavaDamageActor::HandleBeginOverlap(AActor* OverlappedActor, AActor* OtherActor) {
}

ALavaDamageActor::ALavaDamageActor() {
    this->DamageTickTime = 0.60f;
    this->DamageAmount = 40.00f;
    this->SpawnManager = NULL;
}

