#include "QuestState.h"
#include "Templates/SubclassOf.h"

class UTownManager;
class UItemBase;
class AHero;
class UQuestManager;
class UQuestState;
class UQuestNode;
class ULevelSequence;
class UDialogueComponent;
class UQuestLine;
class AStoryHumanoid;

void UQuestState::UnlockCraftableTier(EItemQuality Tier, bool ShowUIFanfare, float FanfareDelay) {
}

void UQuestState::UnlockCraftableItems(TArray<TSubclassOf<UItemBase>> Classes, ENpcType Crafter, bool ShowUIFanfare, float FanfareDelay) {
}

void UQuestState::TransitionOut_Implementation(int32 BranchIndex) {
}

void UQuestState::TransitionInto_Implementation() {
}

void UQuestState::StoreQuestInstruction(FText QuestName, FText Instructions, FText InstructionsMapVersion) {
}

void UQuestState::StoreNPCDialogue(FText TextToStore) {
}

void UQuestState::SetAsActiveQuest() {
}

void UQuestState::ProgressUIQuestState() {
}

void UQuestState::ProgressToNewStates(const TArray<TSubclassOf<UQuestState>>& NewStateClasses, bool bOnlyIfSolitary, bool bOverrideOtherStates) {
}

void UQuestState::ProgressToNewState(TSubclassOf<UQuestState> NewStateClass, bool bOnlyIfSolitary, bool bOverrideOtherStates) {
}

void UQuestState::PlayCinematic(TSoftObjectPtr<ULevelSequence> LevelSequence) {
}

void UQuestState::MarkMapUINPCAsUpdated() {
}

bool UQuestState::IsReplaceable() const {
    return false;
}

bool UQuestState::HasDialogueFor_Implementation(UDialogueComponent* DialogueComponent) const {
    return false;
}

UTownManager* UQuestState::GetTownManager() {
    return NULL;
}

UQuestNode* UQuestState::GetQuestNode() {
    return NULL;
}

UQuestManager* UQuestState::GetQuestManager() {
    return NULL;
}

UQuestLine* UQuestState::GetQuestLine() {
    return NULL;
}

AHero* UQuestState::GetLocalHero() {
    return NULL;
}

TArray<TSoftClassPtr<AStoryHumanoid>> UQuestState::GetActiveQuestGivers() {
    return TArray<TSoftClassPtr<AStoryHumanoid>>();
}

void UQuestState::EnterState_Implementation(bool bFromLoad) {
}

void UQuestState::DisplayQuestStartedUiNotification(const FText& QuestName) {
}

void UQuestState::DisplayQuestCompletedUiNotification(const FText& QuestName) {
}

bool UQuestState::DialogueOwnedByClass(const UDialogueComponent* DialogueComponent, TSoftClassPtr<UObject> ObjectClass) const {
    return false;
}

void UQuestState::BindEventListener(EAshenEventType EventType, const FAshenEventDelegate& Delegate) {
}

void UQuestState::AddNPCToMap() {
}

UQuestState::UQuestState() {
    this->bIsReplaceable = true;
    this->bProgressUIQuestState_OnExit = false;
    this->bStoreDialogue = false;
    this->bAddNPCToMap_OnExit = false;
    this->bStoreQuestInstruction = false;
    this->bIsEndOfQuest = false;
}

