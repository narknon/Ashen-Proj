#include "EnvJumpScare.h"
#include "Components/SkeletalMeshComponent.h"

class UAnimMontage;
class ACreature;
class AAITrigger;

void AEnvJumpScare::OnTriggerOverlapChange(ACreature* Creature, AAITrigger* Trigger) {
}

void AEnvJumpScare::OnMontageEnded(UAnimMontage* Montage, bool bInterrupted) {
}

AEnvJumpScare::AEnvJumpScare() {
    this->bEnabled = true;
    this->SkelMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("SkelMesh"));
    this->FireChance = 1.00f;
    this->OnFireCD = 30.00f;
    this->OnFailFireCD = 15.00f;
}

