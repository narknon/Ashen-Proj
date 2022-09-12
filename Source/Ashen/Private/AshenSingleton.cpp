#include "AshenSingleton.h"
#include "Templates/SubclassOf.h"

class UObject;
class UDataTable;
class AHero;

void UAshenSingleton::SetWorldContextObject(UObject* NewWorldContextObject) {
}

UDataTable* UAshenSingleton::GetTownBuildingDataTable() const {
    return NULL;
}

UDataTable* UAshenSingleton::GetQuestAreasDataTable() const {
    return NULL;
}

TSubclassOf<AHero> UAshenSingleton::GetPlayerHeroBlueprintClass() const {
    return NULL;
}

UDataTable* UAshenSingleton::GetNpcDataTable() const {
    return NULL;
}

UDataTable* UAshenSingleton::GetGraphicsDataTable() const {
    return NULL;
}

UDataTable* UAshenSingleton::GetButtonsDataTable() const {
    return NULL;
}

UDataTable* UAshenSingleton::GetAreasDataTable() const {
    return NULL;
}

UAshenSingleton::UAshenSingleton() {
    this->WorldContextObject = NULL;
    this->NpcDataTable = NULL;
    this->AreaDataTable = NULL;
    this->GraphicsDataTable = NULL;
    this->QuestAreaDataTable = NULL;
    this->TownBuildingDataTable = NULL;
    this->ButtonsDataTable = NULL;
    this->PlayerHeroBlueprint = NULL;
}

