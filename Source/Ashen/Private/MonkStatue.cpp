#include "MonkStatue.h"
#include "Components/StaticMeshComponent.h"
#include "Components/SceneComponent.h"



AMonkStatue::AMonkStatue() {
    this->StatueMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StatueMesh"));
    this->TeleportToPosition = CreateDefaultSubobject<USceneComponent>(TEXT("TeleportToPostition"));
    this->RemoteTeleportToPosition = CreateDefaultSubobject<USceneComponent>(TEXT("RemoteTeleportToPosition"));
    this->TriggerEffects = NULL;
    this->IgnoreQuestRequirement = false;
    this->MaxNumEmbeddedProjectiles = 0;
    this->AiFollowerTeleportDelay = 3.00f;
}

