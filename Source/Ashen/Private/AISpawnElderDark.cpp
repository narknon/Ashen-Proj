#include "AISpawnElderDark.h"
#include "Components/StaticMeshComponent.h"
#include "LootBoxComponent.h"
#include "Components/SceneComponent.h"
#include "DestructibleComponent.h"
#include "Components/BoxComponent.h"

class UInteraction;
class ACreature;
class AHero;
class UObject;

void AAISpawnElderDark::LootOpenCallback(UInteraction* Source, ACreature* Target) {
}

void AAISpawnElderDark::LootClosedCallback(AHero* Hero) {
}

TArray<UInteraction*> AAISpawnElderDark::GetInteractions_Implementation(ACreature* Target, UObject* Context) {
    return TArray<UInteraction*>();
}

AAISpawnElderDark::AAISpawnElderDark() {
    this->bDebugSpawn = false;
    this->LootComponent = CreateDefaultSubobject<ULootBoxComponent>(TEXT("LootBoxComp"));
    this->DestructibleMeshComponent = CreateDefaultSubobject<UDestructibleComponent>(TEXT("DestructibleMeshComponent"));
    this->ElderDarkSpawnLocation = CreateDefaultSubobject<USceneComponent>(TEXT("ElderDarkSpawnLocation"));
    this->IndicatorMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("IndicatorMesh"));
    this->LootUIWidget = NULL;
    this->InteractionCollision = CreateDefaultSubobject<UBoxComponent>(TEXT("InteractionCollision"));
    this->LootInteraction = NULL;
    this->ArenaProxy = NULL;
    this->ElderDark = NULL;
    this->AIClassRef = NULL;
}

