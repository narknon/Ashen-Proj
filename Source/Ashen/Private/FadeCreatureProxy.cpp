#include "FadeCreatureProxy.h"
#include "Components/PoseableMeshComponent.h"
#include "Components/SceneComponent.h"

AFadeCreatureProxy::AFadeCreatureProxy() {
    this->PoseableMeshComponent = CreateDefaultSubobject<UPoseableMeshComponent>(TEXT("PoseableMeshComponent"));
    this->MainhandPoseableMeshComponent = CreateDefaultSubobject<UPoseableMeshComponent>(TEXT("MainhandPoseableMeshComponent"));
    this->OffhandPoseableMeshComponent = CreateDefaultSubobject<UPoseableMeshComponent>(TEXT("OffhandPoseableMeshComponent"));
    this->BaseComponent = CreateDefaultSubobject<USceneComponent>(TEXT("BaseComponent"));
    this->DisintegrateTime = 0.00f;
}

