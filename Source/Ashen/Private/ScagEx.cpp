#include "ScagEx.h"
#include "Components/BoxComponent.h"

void AScagEx::OnDeathPoolSpawn_Implementation() {
}

AScagEx::AScagEx() {
    this->SpitActor = NULL;
    this->SurfaceDamageMultiplayer = 1000.00f;
    this->CliffIdleMontage = NULL;
    this->CliffIdleBellMontage = NULL;
    this->CliffIdleExitMontage = NULL;
    this->GroundIdleMontage = NULL;
    this->GroundIdleExitMontage = NULL;
    this->SurfaceClingIdleMontage = NULL;
    this->TumbleStartMontage = NULL;
    this->TumbleLoopMontage = NULL;
    this->TumbleEndMontage = NULL;
    this->LeftLegCollision = CreateDefaultSubobject<UBoxComponent>(TEXT("LeftLegCollision"));
    this->BellLegBackCollision = CreateDefaultSubobject<UBoxComponent>(TEXT("BellLegBackCollision"));
    this->BellLegMidCollision = CreateDefaultSubobject<UBoxComponent>(TEXT("BellLegMidCollision"));
    this->BellLegFrontCollision = CreateDefaultSubobject<UBoxComponent>(TEXT("BellLegFrontCollision"));
    this->BellCollision = CreateDefaultSubobject<UBoxComponent>(TEXT("BellCollision"));
    this->TumbleCollision = CreateDefaultSubobject<UBoxComponent>(TEXT("TumbleCollision"));
}

