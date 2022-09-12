#include "StoryHumanoid.h"
#include "DialogueComponent.h"

class AActor;
class UVitalAttributes;

void AStoryHumanoid::StoryHumanoidDeath(AActor* Parent, UVitalAttributes* Source) {
}

AStoryHumanoid::AStoryHumanoid() {
    this->DialogueComponent = CreateDefaultSubobject<UDialogueComponent>(TEXT("DialogueComponent"));
    this->IndicatorComponent = NULL;
    this->NpcType = ENpcType::None;
}

