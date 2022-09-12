#include "ElderDark.h"
#include "Net/UnrealNetwork.h"
#include "Components/SceneComponent.h"
#include "Components/BoxComponent.h"

class AAction;
class ACreature;

void AElderDark::RemoteStartIntroAction_Implementation(FNetworkPointer Target) {
}

void AElderDark::OnTriggerLightDecay_Implementation() {
}

void AElderDark::OnReachedWounded_Implementation() {
}

void AElderDark::OnLightThresholdTrigger_Implementation(uint8 TriggerPointIndex) {
}

void AElderDark::OnFightHasBegun_Implementation() {
}

void AElderDark::OnDamageElderDark(const FAshenDamage& Damage) {
}

void AElderDark::OnBeserk_Implementation() {
}

void AElderDark::OnAshExplode_Implementation() {
}

void AElderDark::OnActionStateChange(AAction* Action, EActionState Current, EActionState Previous) {
}

void AElderDark::IsReadyNeutral(bool& ReadyNeutral) const {
}

bool AElderDark::CanBeLockedOnto(const ACreature* Observer) const {
    return false;
}

void AElderDark::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AElderDark, Light);
}

AElderDark::AElderDark() {
    this->LeapCollision = CreateDefaultSubobject<UBoxComponent>(TEXT("LeapCollision"));
    this->HiddenLightCheckRadius = 500.00f;
    this->LightDecayUpdateFrequency = 1.00f;
    this->LightGrowth = 15.00f;
    this->LightDecay = -800.00f;
    this->Light = 0.00f;
    this->LightBurnThreshold = 100000.00f;
    this->SetLightOnHoleFlush = 90.00f;
    this->HoleRegenRate = 0.00f;
    this->DarknessRange = 800.00f;
    this->HoldTargetInDarknessRange = 1200.00f;
    this->DrainSpeed = 4.00f;
    this->DrainRange = 3000.00f;
    this->MultiLanternMultiplier = 1.50f;
    this->LightStunMontageLoops = 4;
    this->PillarsDownBeserkHealthPercentage = 0.30f;
    this->MinBeserkHealthPercentage = 0.15f;
    this->HealthLossOnHoleLightFlush = 10.00f;
    this->IntroDamageReduction = 0.90f;
    this->DeathSequence = NULL;
    this->RightFistCollision = CreateDefaultSubobject<UBoxComponent>(TEXT("RightFistCollision"));
    this->RightFistTrailAttachment = CreateDefaultSubobject<USceneComponent>(TEXT("RightFistTrailAttachment"));
    this->LeftFistCollision = CreateDefaultSubobject<UBoxComponent>(TEXT("LeftFistCollision"));
    this->LeftFistTrailAttachment = CreateDefaultSubobject<USceneComponent>(TEXT("LeftFistTrailAttachment"));
    this->ElderSpawn = NULL;
    this->CurrentPillarProxy = NULL;
    this->CurrentHoleProxy = NULL;
}

