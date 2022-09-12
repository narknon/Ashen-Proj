#include "WakeRelicDummyActor.h"
#include "Components/PoseableMeshComponent.h"
#include "Components/SkeletalMeshComponent.h"

AWakeRelicDummyActor::AWakeRelicDummyActor() {
    this->PoseableMeshComponent = CreateDefaultSubobject<UPoseableMeshComponent>(TEXT("PoseableMesh"));
    this->MeshHair = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("HairMesh"));
    this->MeshFacialHair = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("AccessoryMesh"));
    this->DisintegrateParticles = NULL;
}

