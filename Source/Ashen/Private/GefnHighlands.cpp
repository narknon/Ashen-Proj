#include "GefnHighlands.h"
#include "Components/SkeletalMeshComponent.h"
#include "Components/SceneComponent.h"

class AHero;

void AGefnHighlands::UpdateHeadLook() {
}

void AGefnHighlands::SetState(EGefnState NewCurrentState) {
}

void AGefnHighlands::QueueExit() {
}


void AGefnHighlands::Emerge(AHero* TriggerHero) {
}


AGefnHighlands::AGefnHighlands() {
    this->SceneNode = CreateDefaultSubobject<USceneComponent>(TEXT("SceneNode"));
    this->GefnSceneNode = CreateDefaultSubobject<USceneComponent>(TEXT("GefnSceneNode"));
    this->GefnMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("GefnMesh"));
    this->CurrentState = EGefnState::None;
    this->EmergeMontage = NULL;
    this->TriggeringHero = NULL;
    this->HeadLookYaw = 0.00f;
    this->HeadLookPitch = 0.00f;
    this->bExitRequested = false;
}

