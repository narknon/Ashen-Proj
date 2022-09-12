#include "AshWraith.h"
#include "Particles/ParticleSystemComponent.h"
#include "Components/BoxComponent.h"

class AActor;
class UPrimitiveComponent;
class ACreature;

void AAshWraith::TeleportAshWraith_Authority_Implementation(const FVector& ToLocation, const FRotator& ToRotation, bool bBreakAfterImageBefore, bool bBreakAfterImageAfter) {
}

void AAshWraith::OnWraithTeleport_Implementation(const FVector& FromLocation, const FVector& ToLocation) {
}

void AAshWraith::OnFlightMainBodyBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

bool AAshWraith::IsInFlightMode() const {
    return false;
}

float AAshWraith::GetShivBlendAlpha() const {
    return 0.0f;
}

FVector AAshWraith::GetHeroLockOnLocation(FName LockonPointName, const ACreature* RequestingHero) const {
    return FVector{};
}

void AAshWraith::BreakLastAfterImage_Remote_Implementation() {
}
bool AAshWraith::BreakLastAfterImage_Remote_Validate() {
    return true;
}

void AAshWraith::BreakLastAfterImage_Authority_Implementation() {
}

AAshWraith::AAshWraith() {
    this->MainBodyCollision = CreateDefaultSubobject<UBoxComponent>(TEXT("MainBodyCollision"));
    this->FlightModeParticles = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("FlightModeParticles"));
    this->TeleportParticles = NULL;
    this->PostTeleportParticles = NULL;
    this->TeleportAfterImageClass = NULL;
    this->bCanTeleportDodge = true;
    this->TeleportAfterImageLife = 3.00f;
    this->TeleportDodgeMaxCharges = 5;
    this->TeleportDodgeRechargeTime = 15.00f;
    this->TeleportDodgeFromTargetMin = 200.00f;
    this->TeleportDodgeFromTargetMax = 300.00f;
    this->TeleportDodgeFromTargetHalfAngle = 90.00f;
    this->DynamicFlightPath = NULL;
    this->LastStatue = NULL;
}

