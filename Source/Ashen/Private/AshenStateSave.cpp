#include "AshenStateSave.h"

class UAshenEventData;

void UAshenStateSave::SetTransientGameData(const FString& Key, const FString& Value) {
}

void UAshenStateSave::SetQuestAreaStatus(FQuestAreaData QuestAreaDataRow, EAreaStatus AreaStatus) {
}

void UAshenStateSave::SetNPCProgress(ENpcType NpcType, float Amount) {
}

void UAshenStateSave::SetGefnState(EGefnState Dead) {
}

void UAshenStateSave::SetGameData(const FString& Key, const FString& Value) {
}

void UAshenStateSave::SetFullUiUnlocked(bool bValue) {
}

void UAshenStateSave::SetDiasoraWorldState(EDiasoraWorldState FlyingState) {
}

void UAshenStateSave::SetDiasoraFjordState(EDiasoraFjordState FlyingState) {
}

void UAshenStateSave::SetCurrentArea(FName AreaName) {
}

void UAshenStateSave::SetCharacterCreatorField(const ECharacterCreatorValue AccessEnum, int32 Value) {
}

void UAshenStateSave::SetAreaStatus(FName AreaName, EAreaStatus AreaStatus, bool QuestArea) {
}

void UAshenStateSave::SetActiveNPC_UI(ENpcType NpcType) {
}

void UAshenStateSave::QuestStateChanged(UAshenEventData* EventData) {
}

void UAshenStateSave::MarkNPCMapQuestAsUpdated(ENpcType NpcType) {
}

bool UAshenStateSave::IsNPC_MapUnlocked(ENpcType NpcType) {
    return false;
}

bool UAshenStateSave::IsHardcoreModeEnabled() {
    return false;
}

bool UAshenStateSave::IsGameComplete() {
    return false;
}

bool UAshenStateSave::IsFullUiUnlocked() {
    return false;
}

bool UAshenStateSave::HasNPCProgress(ENpcType NpcType, float RequiredAmount) {
    return false;
}

bool UAshenStateSave::HasNPCMapUpdate(ENpcType NpcType) {
    return false;
}

bool UAshenStateSave::GetWorldIntroPlayed() {
    return false;
}

int32 UAshenStateSave::GetUIQuestProgress(ENpcType NpcType) {
    return 0;
}

FString UAshenStateSave::GetTransientGameData(const FString& Key) const {
    return TEXT("");
}

FString UAshenStateSave::GetSaveSlotTimeString() {
    return TEXT("");
}

EItemQuality UAshenStateSave::GetQuestUnlockCraftableTierMax() const {
    return EItemQuality::Tier0;
}

bool UAshenStateSave::GetPromptData(const FString& TutorialPromptName) {
    return false;
}

int32 UAshenStateSave::GetNumOfAreas() const {
    return 0;
}

TArray<ENpcType> UAshenStateSave::GetNPCsWithProgress(float ProgressAmount, bool UseMapUnlockProgress) {
    return TArray<ENpcType>();
}

TArray<FText> UAshenStateSave::GetNPCQuestInstructionsRecap(ENpcType NpcType) {
    return TArray<FText>();
}

float UAshenStateSave::GetNPCProgress(ENpcType NpcType) {
    return 0.0f;
}

TArray<FText> UAshenStateSave::GetNPCDialogueRecaps(ENpcType NpcType) {
    return TArray<FText>();
}

FGuid UAshenStateSave::GetLastActiveSavePointGuid() {
    return FGuid{};
}

FTravelPointData UAshenStateSave::GetLastActiveSavePointData() {
    return FTravelPointData{};
}

EGefnState UAshenStateSave::GetGefnState() {
    return EGefnState::None;
}

FString UAshenStateSave::GetGameProgressString() const {
    return TEXT("");
}

FString UAshenStateSave::GetGameData(const FString& Key) const {
    return TEXT("");
}

EDiasoraWorldState UAshenStateSave::GetDiasoraWorldState() {
    return EDiasoraWorldState::None;
}

EDiasoraFjordState UAshenStateSave::GetDiasoraFjordState() {
    return EDiasoraFjordState::None;
}

FName UAshenStateSave::GetCurrentArea() {
    return NAME_None;
}

int32 UAshenStateSave::GetCorpseCashAmount() {
    return 0;
}

FVector UAshenStateSave::GetCorpleLocation(bool& Exists) {
    return FVector{};
}

int32 UAshenStateSave::GetCharacterCreatorField(const ECharacterCreatorValue AccessEnum, const FString& ErrorText) const {
    return 0;
}

EAreaStatus UAshenStateSave::GetAreaStatus(FName AreaName, bool QuestArea) const {
    return EAreaStatus::None;
}

TArray<FTravelPointData> UAshenStateSave::GetActiveSavePoints() {
    return TArray<FTravelPointData>();
}

ENpcType UAshenStateSave::GetActiveNPC_UI() {
    return ENpcType::None;
}

void UAshenStateSave::EnableHardcoreMode() {
}

bool UAshenStateSave::DoesTransientGameDataExist(const FString& Key) const {
    return false;
}

bool UAshenStateSave::DoesGameDataExist(const FString& Key) const {
    return false;
}

bool UAshenStateSave::CorpseRunDisplayRespawnUI() {
    return false;
}

void UAshenStateSave::CompleteGame() {
}

void UAshenStateSave::ClearTransientGameData() {
}

void UAshenStateSave::ClearNPCPMapUpdate(ENpcType NpcType) {
}

void UAshenStateSave::AddUIQuestProgress(ENpcType NpcType) {
}

void UAshenStateSave::AddNPCQuestInstructionsRecap(ENpcType NpcType, const FString& QuestName_Namespace, const FString& QuestName_Key, const FString& QuestInstruction_Namespace, const FString& QuestInstruction_Key, const FString& QuestInstructionMap_Namespace, const FString& QuestInstructionMap_Key) {
}

void UAshenStateSave::AddNPCDialogueRecap(ENpcType NpcType, const FString& Namespace, const FString& Key) {
}

UAshenStateSave::UAshenStateSave() {
    this->ProgressToUnlockNPCInMap = 5.00f;
}

