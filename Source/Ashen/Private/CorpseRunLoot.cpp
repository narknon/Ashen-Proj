#include "CorpseRunLoot.h"
#include "Components/StaticMeshComponent.h"
#include "Components/BoxComponent.h"

class AActor;
class UPrimitiveComponent;


void ACorpseRunLoot::OnComponentBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

ACorpseRunLoot::ACorpseRunLoot() {
    this->PickupAudioEvent = NULL;
    this->bConsumed = false;
    this->Amount = 0.00f;
    this->StateData = NULL;
    this->GameState = NULL;
    this->StaticMeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMeshComponent"));
    this->InteractionCollision = CreateDefaultSubobject<UBoxComponent>(TEXT("InteractionCollision"));
}

