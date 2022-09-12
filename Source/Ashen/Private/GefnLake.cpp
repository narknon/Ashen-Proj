#include "GefnLake.h"
#include "Components/SceneComponent.h"
#include "Components/SkeletalMeshComponent.h"
#include "DialogueComponent.h"

class AHero;

void AGefnLake::UpdateHeadLook() {
}

void AGefnLake::QueueExit() {
}

void AGefnLake::OnScionSummon_Implementation() {
}

void AGefnLake::OnScionBanish_Implementation() {
}

void AGefnLake::Emerge(AHero* TriggerHero) {
}

AGefnLake::AGefnLake() {
    this->SceneNode = CreateDefaultSubobject<USceneComponent>(TEXT("SceneNode"));
    this->DialogueComponent = CreateDefaultSubobject<UDialogueComponent>(TEXT("DialogueComponent"));
    this->GefnMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("GefnMesh"));
    this->EmergeMontage = NULL;
    this->TriggeringHero = NULL;
    this->HeadLookYaw = 0.00f;
    this->HeadLookPitch = 0.00f;
    this->bExitRequested = false;
    this->LocalHero = NULL;
}

