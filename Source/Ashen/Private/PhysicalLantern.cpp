#include "PhysicalLantern.h"
#include "Particles/ParticleSystemComponent.h"
#include "Components/SceneComponent.h"
#include "Components/PointLightComponent.h"
#include "Components/StaticMeshComponent.h"
#include "Components/SphereComponent.h"





APhysicalLantern::APhysicalLantern() {
    this->partyLanternFire = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("party_lantern_fire"));
    this->LanternFire = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("LanternFire"));
    this->PickupLanternFireflies = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("PickupLanternFireflies"));
    this->LightsRoot = CreateDefaultSubobject<USceneComponent>(TEXT("LightsRoot"));
    this->QuadLight = CreateDefaultSubobject<UPointLightComponent>(TEXT("QuadLight"));
    this->FillLight = CreateDefaultSubobject<UPointLightComponent>(TEXT("FillLight"));
    this->LanternRayA = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("LaternRayA"));
    this->LanternRayB = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("LaternRayB"));
    this->LanternRayC = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("LaternRayC"));
    this->VolumeSphere1 = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("VolumeSphere1"));
    this->LanternPickUpRadius = CreateDefaultSubobject<USphereComponent>(TEXT("LanternPickUpRadius"));
    this->PlayLanternSoundEffect = NULL;
    this->StopLanternSoundEffect = NULL;
    this->PlacedOnGroundSoundEffect = NULL;
}

