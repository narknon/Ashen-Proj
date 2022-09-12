#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "BTTask_ChangeBehaviourTree.generated.h"

class UBehaviorTree;

UCLASS(Blueprintable)
class ASHEN_API UBTTask_ChangeBehaviourTree : public UBTTaskNode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBehaviorTree* BehaviourTree;
    
    UBTTask_ChangeBehaviourTree();
};

