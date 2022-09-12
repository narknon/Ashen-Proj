#include "MultiplayerDoor.h"
#include "Components/BoxComponent.h"
#include "Components/SkeletalMeshComponent.h"

class UPrimitiveComponent;
class AActor;
class ACreature;
class UObject;
class UInteraction;

void AMultiplayerDoor::ServerOpenDoor_Implementation() {
}
bool AMultiplayerDoor::ServerOpenDoor_Validate() {
    return true;
}

void AMultiplayerDoor::OpenDoor(bool bRemoteOpened) {
}

void AMultiplayerDoor::OnOverlapBegin(AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

TArray<UInteraction*> AMultiplayerDoor::GetInteractions_Implementation(ACreature* Target, UObject* Context) {
    return TArray<UInteraction*>();
}

void AMultiplayerDoor::DoorCallback(UInteraction* Source, ACreature* Target) {
}

void AMultiplayerDoor::ClientOpenDoor_Implementation() {
}

AMultiplayerDoor::AMultiplayerDoor() {
    this->DoorMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("DoorSlider"));
    this->DoorOpenMontage = NULL;
    this->DoorTrigger = CreateDefaultSubobject<UBoxComponent>(TEXT("DoorTrigger"));
    this->DoorCollider = CreateDefaultSubobject<UBoxComponent>(TEXT("DoorCollider"));
    this->DoorInteraction = NULL;
}

