#include "CritterTrap.h"
#include "Components/BoxComponent.h"
#include "Particles/ParticleSystemComponent.h"
#include "Components/SkeletalMeshComponent.h"

class UInteraction;
class ACreature;
class AHero;
class ALootActor;
class AActor;
class UPrimitiveComponent;

void ACritterTrap::ResetTrapCallback(UInteraction* Source, ACreature* Target) {
}

void ACritterTrap::ResetTrap() {
}



void ACritterTrap::OnOverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

void ACritterTrap::LootSpawnedCallback(ACreature* Source, ALootActor* LootActor) {
}

void ACritterTrap::LootClosedCallback(AHero* Hero) {
}

ACritterTrap::ACritterTrap() {
    this->ResetInteraction = NULL;
    this->DetonationTrigger = CreateDefaultSubobject<UBoxComponent>(TEXT("DetonationCollision"));
    this->InteractTrigger = CreateDefaultSubobject<UBoxComponent>(TEXT("InteractCollision"));
    this->ParticleSystem = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("ParticleSystem"));
    this->AkAudioComponent = NULL;
    this->TrapMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("LootMesh"));
    this->TrapResetAnim = NULL;
    this->TrapTriggerAnim = NULL;
    this->HasTriggered = false;
    this->TrapPlayerDamage = 0.00f;
    this->TrappedCritter = NULL;
    this->TargetLoot = NULL;
}

