#include "AshenAIContextBase.h"

UAshenAIContextBase::UAshenAIContextBase() {
    this->ContextPriority = 0;
    this->OverrideBehaviorTree = NULL;
    this->ParentSpawner = NULL;
    this->ParentGroup = NULL;
}

