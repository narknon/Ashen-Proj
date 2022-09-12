#include "MatriarchDoor.h"
#include "Components/BoxComponent.h"
#include "Components/SceneComponent.h"

class AActor;
class UPrimitiveComponent;
class UInteraction;
class ACreature;

void AMatriarchDoor::OpenDoor(bool bRemoteOpened) {
}

void AMatriarchDoor::OnTriggerOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

void AMatriarchDoor::OnFightStartServer_Implementation() {
}
bool AMatriarchDoor::OnFightStartServer_Validate() {
    return true;
}

void AMatriarchDoor::OnFightStartClient_Implementation() {
}

void AMatriarchDoor::DoorCallback(UInteraction* Source, ACreature* Target) {
}

AMatriarchDoor::AMatriarchDoor() {
    this->HeroDoorOpenMontage = NULL;
    this->HeroStandingPosition = CreateDefaultSubobject<USceneComponent>(TEXT("PlayerStandingPosition"));
    this->PermanentCollider = NULL;
    this->RoomEnterTrigger = CreateDefaultSubobject<UBoxComponent>(TEXT("RoomEnterTrigger"));
    this->RoomEnterSideTrigger1 = CreateDefaultSubobject<UBoxComponent>(TEXT("RoomEnterSideTrigger1"));
    this->RoomEnterSideTrigger2 = CreateDefaultSubobject<UBoxComponent>(TEXT("RoomEnterSideTrigger2"));
    this->RoomLeaveTrigger = CreateDefaultSubobject<UBoxComponent>(TEXT("RoomLeaveTrigger"));
    this->DoorCloseSequence = NULL;
    this->OpenDoorSequence = NULL;
    this->StandingDistanceFromDoor = 90.00f;
    this->OpeningHero = NULL;
}

