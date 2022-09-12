#include "MultiplayerTrigger.h"
#include "Components/BoxComponent.h"

class AActor;

void AMultiplayerTrigger::ActorEndOverlap(AActor* OverlappedActor, AActor* OtherActor) {
}

void AMultiplayerTrigger::ActorBeginOverlap(AActor* OverlappedActor, AActor* OtherActor) {
}

AMultiplayerTrigger::AMultiplayerTrigger() {
    this->RootTrigger = CreateDefaultSubobject<UBoxComponent>(TEXT("MultiplayerTrigger"));
    this->GameMode = NULL;
    this->GameState = NULL;
    this->bDisconnectOnEnter = false;
    this->OverlappingHero = NULL;
}

