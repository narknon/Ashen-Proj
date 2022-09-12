#include "QuestStateChangeAshenEventData.h"
#include "Templates/SubclassOf.h"

class UQuestLine;
class UQuestManager;
class UQuestState;

bool UQuestStateChangeAshenEventData::HasBeenChangedToTag(UQuestLine* InQestLine, FQuestStateTag QuestStateTag) const {
    return false;
}

bool UQuestStateChangeAshenEventData::HasBeenChangedTo(UQuestLine* InQuestLine, TSubclassOf<UQuestState> InQuestState) const {
    return false;
}

UQuestManager* UQuestStateChangeAshenEventData::GetQuestManager() const {
    return NULL;
}

UQuestLine* UQuestStateChangeAshenEventData::GetQuestLine() const {
    return NULL;
}

TArray<UQuestState*> UQuestStateChangeAshenEventData::GetNewStates() const {
    return TArray<UQuestState*>();
}

UQuestStateChangeAshenEventData::UQuestStateChangeAshenEventData() {
    this->QuestLine = NULL;
}

