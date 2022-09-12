#include "SmallGroundCritter.h"
#include "Components/SphereComponent.h"

class AActor;
class UPrimitiveComponent;

void ASmallGroundCritter::OnOverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

ASmallGroundCritter::ASmallGroundCritter() {
    this->MinTimeUntilRoam = 5.00f;
    this->MaxTimeUntilRoam = 10.00f;
    this->EscapeZoneSearchRadius = 2000.00f;
    this->EscapeZoneRange = 100.00f;
    this->InteractionCollider = CreateDefaultSubobject<USphereComponent>(TEXT("InteractionCollider"));
}

