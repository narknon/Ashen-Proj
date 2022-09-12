#include "SavePoint.h"
#include "Components/StaticMeshComponent.h"
#include "AshenCameraSequenceComponent.h"
#include "Components/BoxComponent.h"
#include "Components/SphereComponent.h"
#include "Components/SceneComponent.h"

class AActor;
class UPrimitiveComponent;
class AHero;
class UInteraction;
class ACreature;

void ASavePoint::RevealAssosiatedArea(AHero* Hero, bool ForceUI) {
}

void ASavePoint::RestAt(AHero* Hero, bool bPlayEffects) {
}

void ASavePoint::OnOverlapActivationCollision(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}


void ASavePoint::OnInteracted(UInteraction* Source, ACreature* Target) {
}

void ASavePoint::OnHeroSit_Implementation(AHero* Hero) {
}


bool ASavePoint::IsTravelPoint() const {
    return false;
}

bool ASavePoint::IsLastActiveSavePoint() const {
    return false;
}

bool ASavePoint::IsActivated() const {
    return false;
}

ETravelPointName ASavePoint::GetSavePointName() const {
    return ETravelPointName::None;
}

void ASavePoint::ForceActivation(bool bSetAsLastRestPlace) {
}

void ASavePoint::ActivateInWorld(AHero* Hero, bool bDisplayUIFanfare) {
}

ASavePoint::ASavePoint() {
    this->Mesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh"));
    this->CameraSequenceComponent = CreateDefaultSubobject<UAshenCameraSequenceComponent>(TEXT("CameraSequenceComponent"));
    this->ActivationCollision = CreateDefaultSubobject<USphereComponent>(TEXT("ActivationCollision"));
    this->InteractionCollision = CreateDefaultSubobject<UBoxComponent>(TEXT("InteractionCollision"));
    this->InteractionPosition = CreateDefaultSubobject<USceneComponent>(TEXT("InteractionPosition"));
    this->bStartActivated = false;
    this->MaxInteractionAngleDegrees = 180.00f;
    this->Interaction = NULL;
    this->AISpawnManager = NULL;
}

