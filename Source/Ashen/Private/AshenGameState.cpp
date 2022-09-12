#include "AshenGameState.h"

class AAshenGameMode;
class ACreature;
class AHero;
class UAshenEventData;

void AAshenGameState::ResetNpcAcquiredProgress(bool HasRemoteHero) {
}

void AAshenGameState::OnNetworkMessage(AAshenGameMode* Source, const FString& Message) {
}

void AAshenGameState::OnCreatureCoopEvent(ACreature* Creature, ECreatureEventType Event) {
}

void AAshenGameState::OnCooperativeInteraction(ECooperativeInteractionType InteractionType, ACreature* Creature) {
}

void AAshenGameState::OnAshenEvent(UAshenEventData* EventData) {
}

float AAshenGameState::GetNpcAcquiredProgressAsPercentage(ENpcType NPCTypeName) {
    return 0.0f;
}

AHero* AAshenGameState::GetCreatureAsHero(ACreature* Creature) {
    return NULL;
}

void AAshenGameState::DebugAddNpcAcquiredProgress(ENpcType Type, float Amount) {
}

void AAshenGameState::DebugAcquireNpc(ENpcType NPC) {
}

void AAshenGameState::AshenToggleVillagerAcqusitionDebug() {
}

void AAshenGameState::AshenToggleMultiplayerTriggerDebug() {
}

void AAshenGameState::AshenToggleLevelStreamingDebug() {
}

void AAshenGameState::AshenToggleCombatEngagementDebug() {
}

bool AAshenGameState::AddNpcAcquiredProgressIfInRange(float Amount, float Range, const FString& SourceDebugMessage) {
    return false;
}

void AAshenGameState::AddNpcAcquiredProgress(float Amount, const FString& SourceDebugMessage, bool ForceAdd) {
}

AAshenGameState::AAshenGameState() {
    this->RemoteHero = NULL;
    this->ExtraHero = NULL;
    this->AshenGameMode = NULL;
    this->MatchmakingRetryFrequency = 3.00f;
    this->DisconnectDistance = 8000.00f;
    this->UnmetDisconnectDistance = 5000.00f;
    this->DisconnectDistanceTimeLimit = 15.00f;
    this->ProgressToUnlockNPCInMap = 0.00f;
    this->FallbackMultiplayerNpc = ENpcType::TreasureHunter;
    this->CurrentMultiplayerNpc = ENpcType::None;
    this->MultiplayerNpcOverride = ENpcType::None;
    this->bIsNpcAcquisitionEnabled = false;
    this->NpcAcquiredThreshold = 100.00f;
    this->NpcAcquiredRange = 1200.00f;
    this->NpcAcquiredWalkingRate = 0.03f;
    this->NpcAcquiredWalkingSpeed = 200.00f;
    this->TravelingDistanceThreshold = 4000.00f;
    this->NpcAcquiredTravelingAmount = 2.00f;
    this->NpcAcquiredMeetingUpDistance = 1200.00f;
    this->NpcAcquiredMeetingUpAmount = 5.00f;
    this->NpcAcquiredCoopDoorOpenAmount = 5.00f;
    this->NpcAcquiredTownAmount = 5.00f;
    this->NpcAcquiredSavedHeroAmount = 3.50f;
    this->NpcAcquiredSharedWaterAmount = 3.50f;
    this->NpcAcquiredSavedHealthPercentage = 0.30f;
    this->CorpseRunClass = NULL;
}

