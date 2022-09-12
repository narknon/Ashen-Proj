#include "AshenGameMode.h"

class ACreature;
class UAshenUserWidget;
class AAshenGameState;

void AAshenGameMode::SetRespawnPoint(ETravelPointName PointName) {
}

void AAshenGameMode::SendGameMessage(const FString& Message) {
}

void AAshenGameMode::RequestEndMultiplayer() {
}

void AAshenGameMode::RegisterBoss(ACreature* Boss, UAshenUserWidget* BossBarWidget) {
}

void AAshenGameMode::QueryMultiplayerStatus(bool& NoMultiplayer, bool& NewIsHost, bool& NewIsClient, bool& NewIsMatchmakingInProgress) {
}

bool AAshenGameMode::LatestStreamForTraveling() {
    return false;
}

bool AAshenGameMode::IsSyncingInProgress() {
    return false;
}

bool AAshenGameMode::IsPairingInProgress() {
    return false;
}

bool AAshenGameMode::IsOffline() {
    return false;
}

bool AAshenGameMode::IsMatchmakingInProgress() {
    return false;
}

bool AAshenGameMode::IsHost() {
    return false;
}

bool AAshenGameMode::IsConnected() {
    return false;
}

bool AAshenGameMode::IsClient() {
    return false;
}

AAshenGameState* AAshenGameMode::GetAshenGameState() {
    return NULL;
}

void AAshenGameMode::EndMultiplayer(bool bFromRemote) {
}

AAshenGameMode::AAshenGameMode() {
    this->WorldIntroSequence = NULL;
    this->MatchmakingManager = NULL;
    this->MultiplayerManager = NULL;
    this->CurrentBoss = NULL;
    this->TravellingPoint = NULL;
    this->LatestLevelStreamWasForTraveling = false;
}

