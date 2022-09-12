#include "AISpawnRiak.h"
#include "Components/SkeletalMeshComponent.h"
#include "Components/StaticMeshComponent.h"

AAISpawnRiak::AAISpawnRiak() {
    this->DoorLink = NULL;
    this->PreFightVisualMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("PreFightVisualMesh"));
    this->PreFightVisualMeshHelm = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("PreFightVisualMeshHelm"));
    this->PostFightVisualMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("PostFightVisualMesh"));
    this->FightStartLocation = NULL;
    this->bDebugSpawner = false;
    this->bDebugPhaseTwo = false;
    this->AIClassRef = NULL;
}

