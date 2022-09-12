#include "BralPillar.h"

class AActor;
class UPrimitiveComponent;

void ABralPillar::SetPillarFalling(bool bSetTo) {
}

void ABralPillar::SetPillarDropped_Implementation() {
}

void ABralPillar::OnOverlap(UPrimitiveComponent* ThisComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

void ABralPillar::OnMainPillarCrash(const FVector& Location) {
}

void ABralPillar::LightLinkedHole() {
}

void ABralPillar::DropPillar_Implementation() {
}

FVector ABralPillar::CalculateFallVelocity(float DeltaTime) {
    return FVector{};
}

void ABralPillar::BralPillarTriggerFallProxy_Implementation(FGuid Target) {
}

void ABralPillar::BralPillarTriggerFallAuthority_Implementation() {
}
bool ABralPillar::BralPillarTriggerFallAuthority_Validate() {
    return true;
}

ABralPillar::ABralPillar() {
    this->GameMode = NULL;
    this->bBralOnPillar = false;
    this->bDebugDroppedPillar = false;
    this->FallVelocity = 0.00f;
    this->bPillarIsFalling = false;
    this->HeroInRange = NULL;
}

