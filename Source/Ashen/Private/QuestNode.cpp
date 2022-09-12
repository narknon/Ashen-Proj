#include "QuestNode.h"

class UQuestState;

UQuestState* UQuestNode::GetQuestState() {
    return NULL;
}

FName UQuestNode::GetCustomName() const {
    return NAME_None;
}

TArray<FOutputBranch> UQuestNode::GetBranches() const {
    return TArray<FOutputBranch>();
}

UQuestNode::UQuestNode() {
    this->QuestState = NULL;
    this->NodeInstance = NULL;
    this->bIsInitialNode = false;
    this->NodeIdentifier = -1;
}

