#include "TownManager.h"

class UAshenEventData;

void UTownManager::StartNpcHouseBuildTimer(ENpcType NPC) {
}

void UTownManager::SetTownBuildingState(ETownBuildingType Type, ETownBuildingState State) {
}

void UTownManager::SetPoolWeight(ENpcType NPC, float Weight) {
}

void UTownManager::SetNpcOutfitState(ENpcType NPC, ENpcOutfitState OutfitState) {
}

void UTownManager::SetNpcHouseState(ENpcType NPC, ETownBuildingState HouseState) {
}

void UTownManager::SetHeroInTown(bool InTown) {
}

void UTownManager::SelectActiveNpc(ENpcType NPC) {
}

void UTownManager::OnStreamingZoneEvent(UAshenEventData* EventData) {
}

void UTownManager::OnForcedLevelsLoaded() {
}

void UTownManager::KillNPC(ENpcType NPC) {
}

bool UTownManager::IsNPCGenderMale(ENpcType NPC) const {
    return false;
}

bool UTownManager::IsNPCDead(ENpcType NPC) {
    return false;
}

bool UTownManager::IsInPool(ENpcType NPC) const {
    return false;
}

bool UTownManager::IsForcingNpcHouseLoad() {
    return false;
}

void UTownManager::IncrementNpcMPMapPair(ENpcType NpcToIncrement) {
}

ETownBuildingState UTownManager::GetTownBuildingState(ETownBuildingType TownBuildingType) const {
    return ETownBuildingState::Unbuilt;
}

FTownBuildingData UTownManager::GetTownBuildingData(ETownBuildingType TownBuildingData) const {
    return FTownBuildingData{};
}

ENpcType UTownManager::GetRandomNpcFromPool() const {
    return ENpcType::None;
}

float UTownManager::GetPoolWeight(ENpcType NPC) const {
    return 0.0f;
}

int32 UTownManager::GetPoolSize() const {
    return 0;
}

int32 UTownManager::GetNumAcquiredNpcs() const {
    return 0;
}

FNpcState UTownManager::GetNpcState(ENpcType NpcType) {
    return FNpcState{};
}

TArray<ENpcType> UTownManager::GetNpcsInPool() const {
    return TArray<ENpcType>();
}

FText UTownManager::GetNPCProfession(ENpcType NPC) {
    return FText::GetEmpty();
}

ENpcOutfitState UTownManager::GetNpcOutfitState(ENpcType NPC) const {
    return ENpcOutfitState::Default;
}

FText UTownManager::GetNPCName(ENpcType NPC) {
    return FText::GetEmpty();
}

TMap<ENpcType, int32> UTownManager::GetNpcMPMap() {
    return TMap<ENpcType, int32>();
}

ETownBuildingState UTownManager::GetNpcHouseState(ENpcType NPC) const {
    return ETownBuildingState::Unbuilt;
}

FNpcData UTownManager::GetNpcData(ENpcType NPC) const {
    return FNpcData{};
}

bool UTownManager::GetHeroInTown() {
    return false;
}

TArray<ENpcType> UTownManager::GetAcquiredNpcs() const {
    return TArray<ENpcType>();
}

void UTownManager::ForceUpdateNpcHouseStreaming(ENpcType NPC, ETownBuildingType Building) {
}

void UTownManager::DecrementNpcMPMapPair(ENpcType NpcToDecrement) {
}

void UTownManager::AcquireNpc(ENpcType NPC) {
}

UTownManager::UTownManager() {
    this->GameMode = NULL;
    this->ForcedLoadedLevel = NULL;
}

