#include "WorldConsumable.h"
#include "Components/BoxComponent.h"
#include "Components/SceneComponent.h"

class UInteraction;
class ACreature;


bool AWorldConsumable::IsConsumed() const {
    return false;
}

void AWorldConsumable::InteractionCallback(UInteraction* Source, ACreature* Target) {
}

AWorldConsumable::AWorldConsumable() {
    this->SceneComponent = CreateDefaultSubobject<USceneComponent>(TEXT("SceneComponent"));
    this->IndicatorMeshComponent = NULL;
    this->InteractionCollisionComponent = CreateDefaultSubobject<UBoxComponent>(TEXT("InteractionCollisionComponent"));
    this->Interaction = NULL;
    this->EffectOnLoot = NULL;
}

