#include "WaterPool.h"
#include "Components/BoxComponent.h"
#include "Components/StaticMeshComponent.h"
#include "Particles/ParticleSystemComponent.h"

class UInteraction;
class ACreature;

void AWaterPool::TakeWaterCharge(UInteraction* Source, ACreature* Target) {
}


AWaterPool::AWaterPool() {
    this->FollowerDiscoverRadius = 1000.00f;
    this->FollowerDiscoverConeHalfAngle = 180.00f;
    this->FollowerDiscoverConeYawAngle = 0.00f;
    this->bFollowerDiscoverDrawDebugInEditor = false;
    this->bFollowerDiscoverDrawDebugInPIE = false;
    this->InteractionTriggerComponent = CreateDefaultSubobject<UBoxComponent>(TEXT("InteractionTrigger"));
    this->WaterStaticMeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("WaterStaticMesh"));
    this->WaterHeatParticles = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("WaterHeatParticles"));
    this->TakeWaterChargeInteraction = NULL;
    this->AISpawnManager = NULL;
    this->OnUseLerpOffset = 90.00f;
    this->OnUseLerpTime = 0.10f;
    this->DrainedWaterOffset = 19.00f;
    this->DrainingTimeLength = 1.50f;
    this->DrainingDelay = 1.00f;
}

