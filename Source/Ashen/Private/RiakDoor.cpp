#include "RiakDoor.h"
#include "Components/SceneComponent.h"
#include "Components/BoxComponent.h"

class AActor;
class UPrimitiveComponent;

void ARiakDoor::OpenDoor(bool bRemoteOpened) {
}

void ARiakDoor::OnTriggerOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

ARiakDoor::ARiakDoor() {
    this->RiakLink = NULL;
    this->HeroStandingPosition = CreateDefaultSubobject<USceneComponent>(TEXT("PlayerStandingPosition"));
    this->PermanentCollider = NULL;
    this->RoomLeaveTrigger = CreateDefaultSubobject<UBoxComponent>(TEXT("RoomLeaveTrigger"));
    this->RoomEnterTrigger = CreateDefaultSubobject<UBoxComponent>(TEXT("RoomEnterTrigger"));
    this->DoorCloseSequence = NULL;
    this->OpenDoorSequence = NULL;
    this->OpeningHero = NULL;
}

