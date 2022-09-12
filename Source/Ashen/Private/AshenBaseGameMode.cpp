#include "AshenBaseGameMode.h"
#include "CinematicManager.h"
#include "AISpawnManager.h"

class UAshenGameInstance;
class AAshenBaseGameState;

bool AAshenBaseGameMode::IsOffline() {
    return false;
}

bool AAshenBaseGameMode::IsConnected() {
    return false;
}

UCinematicManager* AAshenBaseGameMode::GetCinematicManager() {
    return NULL;
}

UAshenGameInstance* AAshenBaseGameMode::GetAshenGameInstance() {
    return NULL;
}

AAshenBaseGameState* AAshenBaseGameMode::GetAshenBaseGameState() {
    return NULL;
}

UAISpawnManager* AAshenBaseGameMode::GetAISpawnManager() {
    return NULL;
}

AAshenBaseGameMode::AAshenBaseGameMode() {
    this->AshenBaseGameState = NULL;
    this->GameInstance = NULL;
    this->InventoryWidget = NULL;
    this->WorldMapOverrideClass = NULL;
    this->AISpawnManagerClass = UAISpawnManager::StaticClass();
    this->AISpawnManager = NULL;
    this->CinematicManagerClass = UCinematicManager::StaticClass();
    this->CinematicManager = NULL;
}

