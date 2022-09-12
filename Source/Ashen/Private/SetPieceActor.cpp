#include "SetPieceActor.h"
#include "Components/BoxComponent.h"
#include "Components/SkeletalMeshComponent.h"

class AActor;
class UPrimitiveComponent;
class UAnimMontage;

void ASetPieceActor::OnTriggered_Implementation() {
}

void ASetPieceActor::OnTriggerBeginOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

void ASetPieceActor::OnMontageEnded_Implementation(UAnimMontage* Montage, bool bInterrupted) {
}

void ASetPieceActor::OnMadeVisible_Implementation() {
}

ASetPieceActor::ASetPieceActor() {
    this->CollisionComponent = CreateDefaultSubobject<UBoxComponent>(TEXT("CollisionComponent"));
    this->VisibilityTrigger = CreateDefaultSubobject<UBoxComponent>(TEXT("VisibilityTrigger"));
    this->SkeletalMeshComponent = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("SkeletalMeshComponent"));
    this->IdleMontage = NULL;
    this->TriggeredMontage = NULL;
    this->bBidirectional = true;
    this->bMakeVisibleOnTrigger = true;
    this->bHasBeenMadeVisible = false;
}

