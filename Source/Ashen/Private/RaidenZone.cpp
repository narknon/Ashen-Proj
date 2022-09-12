#include "RaidenZone.h"
#include "Components/PostProcessComponent.h"
#include "Components/StaticMeshComponent.h"
#include "Components/BoxComponent.h"

class AActor;
class UPrimitiveComponent;

void ARaidenZone::SetBlendUser(UPrimitiveComponent* ThisComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

void ARaidenZone::ClearBlendUser(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex) {
}

ARaidenZone::ARaidenZone() {
    this->RaidenController = NULL;
    this->PositionalBlendUser = NULL;
    this->LinkedPostProcessVolume = NULL;
    this->Priority = 0;
    this->CurrentBlendValue = 0.00f;
    this->OverrideBlendMultiplier = 1.00f;
    this->BoundsBlendRadius = 512.00f;
    this->ZoneBoundsDebug = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("ZoneBoundsDebug"));
    this->ZoneBounds = CreateDefaultSubobject<UBoxComponent>(TEXT("ZoneBounds"));
    this->ZoneBoundsOuter = NULL;
    this->PostProcessComp = CreateDefaultSubobject<UPostProcessComponent>(TEXT("PostProcessing"));
}

