#include "LootActor.h"
#include "Components/BoxComponent.h"
#include "Components/SceneComponent.h"
#include "LootBoxComponent.h"

class ACreature;
class UInteraction;
class AHero;
class UObject;

void ALootActor::UpdateIcon() {
}

void ALootActor::OnSpawnedByCreature(ACreature* SpawningCreature) {
}


void ALootActor::OnLootEmpty_Implementation() {
}


void ALootActor::LootOpenCallback(UInteraction* Source, ACreature* Target) {
}

void ALootActor::LootClosedCallback(AHero* Hero) {
}

void ALootActor::LerpToCreatureMeshPosition(float DeltaSeconds, float LerpSpeed) {
}

TArray<EQuestItem> ALootActor::GetQuestItemsInside() {
    return TArray<EQuestItem>();
}

TArray<UInteraction*> ALootActor::GetInteractions_Implementation(ACreature* Target, UObject* Context) {
    return TArray<UInteraction*>();
}

ALootActor::ALootActor() {
    this->LootInteraction = NULL;
    this->SceneComponent = CreateDefaultSubobject<USceneComponent>(TEXT("SceneComponent"));
    this->LootBoxComponent = CreateDefaultSubobject<ULootBoxComponent>(TEXT("LootBoxComponent"));
    this->IndicatorComponent = NULL;
    this->LootUIWidget = NULL;
    this->InteractionCollision = CreateDefaultSubobject<UBoxComponent>(TEXT("InteractionCollision"));
    this->EffectOnLoot = NULL;
    this->LootType = ELootContainerType::NPCLoot;
    this->DroppingCreature = NULL;
}

