#include "AISpawnHumanoidPod.h"
#include "Particles/ParticleSystemComponent.h"
#include "Components/SkeletalMeshComponent.h"

class ACreature;
class AAITrigger;

void AAISpawnHumanoidPod::OnPopTriggerOverlapChange(ACreature* Creature, AAITrigger* Trigger) {
}

AAISpawnHumanoidPod::AAISpawnHumanoidPod() {
    this->PodMorphMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("PodMorphMesh"));
    this->PodDripParticles = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("PodDripParticles"));
    this->PodOpenMorphCurve = NULL;
    this->PodBreakParticles = NULL;
    this->PodHangLimitMax = 500.00f;
    this->PodHangLimitMin = 100.00f;
    this->PodPopDelay = 0.50f;
    this->PodIdleLoopMontage = NULL;
    this->PodFallLoopMontage = NULL;
    this->PodLandMontage = NULL;
    this->PodLandFastMontage = NULL;
    this->GroundDistance = 0.00f;
    this->bDiscoverPopperOnPop = false;
    this->bLandFast = false;
    this->PreviewPodOpen = 0.00f;
}

