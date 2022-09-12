#include "SetPieceEquipment.h"
#include "Components/SceneComponent.h"
#include "Components/SkeletalMeshComponent.h"

ASetPieceEquipment::ASetPieceEquipment() {
    this->ItemRoot = CreateDefaultSubobject<USceneComponent>(TEXT("ItemRoot"));
    this->SkeletalMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("SkeletalMesh"));
}

