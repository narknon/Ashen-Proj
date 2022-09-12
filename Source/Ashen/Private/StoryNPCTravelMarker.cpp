#include "StoryNPCTravelMarker.h"
#include "Components/ArrowComponent.h"
#include "Components/SceneComponent.h"
#include "Components/TextRenderComponent.h"

class ACreature;

void AStoryNPCTravelMarker::TeleportToMarker(ACreature* _Creature) {
}

AStoryNPCTravelMarker::AStoryNPCTravelMarker() {
    this->SceneComp = CreateDefaultSubobject<USceneComponent>(TEXT("SceneComp"));
    this->NameRenderer = CreateDefaultSubobject<UTextRenderComponent>(TEXT("TriggerName"));
    this->MarkerArrow = CreateDefaultSubobject<UArrowComponent>(TEXT("MarkerArrow"));
}

