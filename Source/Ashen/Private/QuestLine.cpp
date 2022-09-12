#include "QuestLine.h"

class UQuestNode;

TArray<UQuestNode*> UQuestLine::GetRootQuestNodes() {
    return TArray<UQuestNode*>();
}

FString UQuestLine::GetQuestLineName() {
    return TEXT("");
}

UQuestLine::UQuestLine() {
    this->QuestLineOwner = ENpcType::None;
    this->bSplitsMatchmakingPools = false;
}

