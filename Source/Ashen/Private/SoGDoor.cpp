#include "SoGDoor.h"
#include "Components/BoxComponent.h"
#include "Components/SceneComponent.h"

class AActor;
class UPrimitiveComponent;
class UInteraction;
class ACreature;

void ASoGDoor::OpenDoor(bool bRemoteOpened) {
}

void ASoGDoor::OnTriggerOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

void ASoGDoor::DoorCallback(UInteraction* Source, ACreature* Target) {
}

ASoGDoor::ASoGDoor() {
    this->bIsExitDoor = false;
    this->ShadowOfGodLink = NULL;
    this->StandingDistanceFromDoor = 90.00f;
    this->HeroDoorOpenMontage = NULL;
    this->HeroStandingPosition = CreateDefaultSubobject<USceneComponent>(TEXT("PlayerStandingPosition"));
    this->PermanentCollider = NULL;
    this->RoomEnterTrigger = CreateDefaultSubobject<UBoxComponent>(TEXT("RoomEnterTrigger"));
    this->RoomEnterSideTrigger1 = CreateDefaultSubobject<UBoxComponent>(TEXT("RoomEnterSideTrigger1"));
    this->RoomEnterSideTrigger2 = CreateDefaultSubobject<UBoxComponent>(TEXT("RoomEnterSideTrigger2"));
    this->RoomLeaveTrigger = CreateDefaultSubobject<UBoxComponent>(TEXT("RoomLeaveTrigger"));
    this->DoorCloseSequence = NULL;
    this->OpenDoorSequence = NULL;
    this->OpeningHero = NULL;
}

