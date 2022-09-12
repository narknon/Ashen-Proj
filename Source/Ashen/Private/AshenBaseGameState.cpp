#include "AshenBaseGameState.h"
#include "AshenTutorialManager.h"

class AActor;
class UAshenEventData;
class AHero;
class UUICompass;
class ACreature;
class UUIMapManager;
class UQuestManager;
class UDataTable;

void AAshenBaseGameState::UpdateExtraNPCHealthbar(ENpcType NPC, bool ShowBar, float HealthPercentage) {
}

void AAshenBaseGameState::TeleportToDebugCamera() {
}

void AAshenBaseGameState::ShouldDisplayDebug(bool& displayDebug) {
}

void AAshenBaseGameState::SetGameCompass(UUICompass* CompassRef) {
}

void AAshenBaseGameState::ItemTableChangedEvent(UAshenEventData* EventData) {
}

bool AAshenBaseGameState::IsLocalHero(const AActor* Actor) const {
    return false;
}

UQuestManager* AAshenBaseGameState::GetQuestManager() {
    return NULL;
}

UDataTable* AAshenBaseGameState::GetQuestAreaData() const {
    return NULL;
}

UUIMapManager* AAshenBaseGameState::GetMapManager() {
    return NULL;
}

UUICompass* AAshenBaseGameState::GetGameCompass() {
    return NULL;
}

AHero* AAshenBaseGameState::GetCreatureAsHero(ACreature* Creature) {
    return NULL;
}

float AAshenBaseGameState::GetClampedDebugScrollOffset(float MaxValue) {
    return 0.0f;
}

void AAshenBaseGameState::AshenToggleTalismanDebug() {
}

void AAshenBaseGameState::AshenTogglePoiseDebug() {
}

void AAshenBaseGameState::AshenToggleCritDebug() {
}

void AAshenBaseGameState::AshenToggleConsumableDebug() {
}

AAshenBaseGameState::AAshenBaseGameState() {
    this->GameMode = NULL;
    this->QuestManager = NULL;
    this->NewQuestLineDataTable = NULL;
    this->TownManager = NULL;
    this->MapManager = NULL;
    this->GameCompass = NULL;
    this->TownBuildingConstructionTime = 600.00f;
    this->LocalHero = NULL;
    this->TutorialManager = NULL;
    this->TutorialManagerClass = UAshenTutorialManager::StaticClass();
    this->EventTracker = NULL;
    this->EventTrackerClass = NULL;
    this->DebugScrollOffset = 0.00f;
    this->bDisplayDebug = false;
    this->bDisplayFrameRate = false;
    this->bDebugCrit = false;
    this->bDebugTutorial = false;
    this->bDebugCreatures = true;
    this->bDebugTalismans = true;
    this->bDebugDPS = false;
    this->bDebugWeapons = false;
    this->bDebugConsumables = false;
    this->bDebugPoise = true;
    this->bDebugBuffs = false;
}

