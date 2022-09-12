#include "WorldTravelPoint.h"
#include "Components/SceneComponent.h"
#include "Components/SphereComponent.h"

void AWorldTravelPoint::TravelToThisPoint() {
}

void AWorldTravelPoint::RemoteActivate(bool SetAsLastRestPoint) {
}

bool AWorldTravelPoint::IsActivated() {
    return false;
}

FGuid AWorldTravelPoint::GetGuid() const {
    return FGuid{};
}

void AWorldTravelPoint::DebugActivate() {
}

AWorldTravelPoint::AWorldTravelPoint() {
    this->SceneRoot = CreateDefaultSubobject<USceneComponent>(TEXT("ComponentRoot"));
    this->TravelToLocation = CreateDefaultSubobject<USphereComponent>(TEXT("TravelToLocation"));
    this->TravelToLocation_Diasora = CreateDefaultSubobject<USphereComponent>(TEXT("TravelToLocationDiasora"));
    this->bCanFastTravelHere = false;
    this->bDisplayOnWorldMap = false;
    this->bMapTravelStoneType = false;
    this->LinkedTravelPointName = ETravelPointName::None;
    this->AKAudioEvent_StopFastTravel = NULL;
    this->bHighlightOnWorldMap = false;
    this->ShouldFakePositionOnWorldMap = false;
    this->bFirstActivation = false;
    this->TeleportingHero = NULL;
    this->AISpawnManager = NULL;
}

