#include "CinematicManager.h"
#include "Templates/SubclassOf.h"

class UItemEquipment;
class UAnimMontage;
class AAction;
class AWorldTravelPoint;
class UUserWidget;

bool UCinematicManager::WasCinematicSkipped() const {
    return false;
}

bool UCinematicManager::WaitingForRemotePlayer() const {
    return false;
}

void UCinematicManager::StartCinematic(ECinematicName CinematicName, FEndCinematicDelegate EndCinematicDelegate, bool bIsUnskippable, bool bEndMultiplayer) {
}

void UCinematicManager::SpawnEquipment(ECinematicCreatureType Target, TSubclassOf<UItemEquipment> ItemClass) {
}

void UCinematicManager::SetTransform(ECinematicCreatureType Target, FVector Location, FRotator Rotation) {
}

void UCinematicManager::SetPostCinematicTransform(ECinematicCreatureType Target, FVector Location, FRotator Rotation) {
}

void UCinematicManager::SetHidden(ECinematicCreatureType Target, bool bHidden) {
}

void UCinematicManager::SetEquipmentHolstered(ECinematicCreatureType Target) {
}

bool UCinematicManager::SetEquipmentDrawn(ECinematicCreatureType Target, EItemType ItemType) {
    return false;
}

bool UCinematicManager::RemotePlayerWaitingForLocal() const {
    return false;
}

void UCinematicManager::PlayAnimation(ECinematicCreatureType Target, FVector Location, FRotator Rotation, UAnimMontage* Montage) {
}

void UCinematicManager::PlayAction(ECinematicCreatureType Target, FVector Location, FRotator Rotation, UAnimMontage* Montage, TSubclassOf<AAction> ActionClass) {
}

void UCinematicManager::OnAssetLoaded() {
}

void UCinematicManager::LoadZone(const FDataTableRowHandle& ZoneRowHandle, bool bUnloadCurrentZones) {
}

bool UCinematicManager::IsCinematicPlaying() const {
    return false;
}

void UCinematicManager::EndCinematicTravel(AWorldTravelPoint* TravelPoint, bool ViaDiasora) {
}

void UCinematicManager::EndCinematicLoading(const FString& Level) {
}

void UCinematicManager::EndCinematic() {
}

void UCinematicManager::EnableHeroIK(ECinematicCreatureType Target, float BlendIn) {
}

UUserWidget* UCinematicManager::DisplayWidget(TSubclassOf<UUserWidget> WidgetClass) {
    return NULL;
}

void UCinematicManager::DisplaySubtitle(const FString& InKey) {
}

void UCinematicManager::DisplayDialogue(FText Dialogue, FText WhomIsSpeaking, float DisplayTime, bool HideWhom) {
}

UCinematicManager::UCinematicManager() {
    this->LevelSequencePlayer = NULL;
    this->AshenBaseGameState = NULL;
    this->AshenBaseGameMode = NULL;
    this->DialogueOverlayTab = NULL;
    this->StartingGodMode = false;
    this->FadeWidgetClass = NULL;
    this->SubtitleWidget = NULL;
    this->SubtitleWidgetClass = NULL;
    this->HideSpeakersName = false;
    this->StartupAudioEvent = NULL;
    this->CleanupAudioEvent = NULL;
    this->SkippedCleanupAudioEvent = NULL;
    this->SkipCalledAudioEvent = NULL;
}

