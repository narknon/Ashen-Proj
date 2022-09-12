#include "MatchmakingManager.h"

void UMatchmakingManager::TickMultiplayerFilterCounter(float DeltaTime) {
}

void UMatchmakingManager::MultiplayerFilterChangeMade(bool UpdateMultiplayer) {
}

UMatchmakingManager::UMatchmakingManager() {
    this->Protocol = TEXT("wss");
    this->NormalUsersUrl = TEXT("normal-users.ashenmatchmaking.co.nz");
    this->FilteredUsersUrl = TEXT("filtered-users.ashenmatchmaking.co.nz");
    this->HostPort = 23456;
    this->HostResolutionTimeout = 2.00f;
    this->PrivilegeTimeout = 3.00f;
    this->PeersConnectTimeout = 10.00f;
    this->ServerConnectTimeout = 3.00f;
    this->ServerConnectedTimeout = 3.00f;
    this->MatchmakingUpdateRate = 0.50f;
    this->AuthorityPort = 7777;
    this->RemotePort = 7788;
    this->AshenGameInstance = NULL;
    this->AshenGameMode = NULL;
    this->AshenGameState = NULL;
    this->MultiplayerManager = NULL;
    this->matchmakingConnection = NULL;
    this->SessionManager = NULL;
}

