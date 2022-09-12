#include "OfflineQuestDoor.h"
#include "Components/SkeletalMeshComponent.h"

AOfflineQuestDoor::AOfflineQuestDoor() {
    this->DoorMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("DoorSlider"));
    this->DoorOpenSequence = NULL;
}

