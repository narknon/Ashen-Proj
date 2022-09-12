#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "EAIContextType.h"
#include "BTT_SwitchAIContext.generated.h"

class UBehaviorTree;

UCLASS(Blueprintable)
class ASHEN_API UBTT_SwitchAIContext : public UBTTaskNode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAIContextType ContextType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBehaviorTree* BehaviourTree;
    
    UBTT_SwitchAIContext();
};

