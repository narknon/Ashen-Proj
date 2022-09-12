#include "MultiplayerManager.h"

void UMultiplayerManager::SetSkipFinalizeLogic(bool bSkiped) {
}

UMultiplayerManager::UMultiplayerManager() {
    this->SyncingTimeout = 10.00f;
    this->CameraTimeout = 1.00f;
    this->SkipMultiplayerFinalize = false;
    this->AshenGameInstance = NULL;
    this->AshenGameMode = NULL;
    this->AshenGameState = NULL;
    this->MatchmakingManager = NULL;
    this->aiManager = NULL;
    this->authorityConnection = NULL;
    this->remoteConnection = NULL;
}

