#include "AIProxy_ElderDark_Pillar.h"
#include "Components/SphereComponent.h"

UAIProxy_ElderDark_Pillar::UAIProxy_ElderDark_Pillar() {
    this->ClimbFrontStart = CreateDefaultSubobject<USphereComponent>(TEXT("ClimbFrontStart"));
    this->ClimbLeftStart = CreateDefaultSubobject<USphereComponent>(TEXT("ClimbLeftStart"));
    this->ClimbRightStart = CreateDefaultSubobject<USphereComponent>(TEXT("ClimbRightStart"));
    this->MainPillarCrashKnockDownRadius = 400.00f;
    this->MainPillarDirectHitDamage = 50.00f;
    this->EntryMontageFront = NULL;
    this->EntryMontageLeft = NULL;
    this->EntryMontageRight = NULL;
}

