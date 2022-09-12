#include "NetworkedTrigger.h"
#include "Components/BoxComponent.h"

class AActor;

void ANetworkedTrigger::OnLoadedTriggered_Implementation() {
}

void ANetworkedTrigger::OnGameplayTrigger_Implementation(AActor* OtherActor) {
}

void ANetworkedTrigger::ClientGameTrigger_Implementation(FNetworkPointer NetworkPointer) {
}

void ANetworkedTrigger::ActorBeginOverlap(AActor* OverlappedActor, AActor* OtherActor) {
}

ANetworkedTrigger::ANetworkedTrigger() {
    this->Trigger = CreateDefaultSubobject<UBoxComponent>(TEXT("MultiplayerTrigger"));
}

