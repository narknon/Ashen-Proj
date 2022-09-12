#include "MultiplayerCinematicTrigger.h"
#include "Components/BoxComponent.h"

class AActor;

void AMultiplayerCinematicTrigger::HostOverlap_Implementation(bool bEntered) {
}

void AMultiplayerCinematicTrigger::ClientOverlap_Implementation(bool bEntered) {
}
bool AMultiplayerCinematicTrigger::ClientOverlap_Validate(bool bEntered) {
    return true;
}

void AMultiplayerCinematicTrigger::ActorEndOverlap(AActor* OverlappedActor, AActor* OtherActor) {
}

void AMultiplayerCinematicTrigger::ActorBeginOverlap(AActor* OverlappedActor, AActor* OtherActor) {
}

AMultiplayerCinematicTrigger::AMultiplayerCinematicTrigger() {
    this->TriggerComponent = CreateDefaultSubobject<UBoxComponent>(TEXT("TriggerComponent"));
    this->LevelSequence = NULL;
    this->AlternativeLevelSequence = NULL;
    this->DisconnectSeconds = 10.00f;
    this->bEnableDisconnectTimer = false;
    this->QuestLine = NULL;
}

