#include "AshenAIControllerBase.h"
#include "BehaviorTree/BehaviorTreeComponent.h"
#include "AIAshenPathMoveRequest.h"
#include "AIAshenMetronomeWaitRequest.h"

class UBlackboardComponent;

UBlackboardComponent* AAshenAIControllerBase::GetBlackboard() {
    return NULL;
}

AAshenAIControllerBase::AAshenAIControllerBase() {
    this->BehaviorTree = CreateDefaultSubobject<UBehaviorTreeComponent>(TEXT("BehaviorTreeComp"));
    this->Creature = NULL;
    this->AshenAIPathFollowingComponent = NULL;
    this->PrimaryAIContext = NULL;
    this->ActiveAIContext = NULL;
    this->AIAshenPathMoveRequest = CreateDefaultSubobject<UAIAshenPathMoveRequest>(TEXT("AIAshenPathMoveRequest"));
    this->AIAshenMetronomeWaitRequest = CreateDefaultSubobject<UAIAshenMetronomeWaitRequest>(TEXT("AIAshenMetronomeWaitRequest"));
    this->CurrentTSPRestPoint = NULL;
}

