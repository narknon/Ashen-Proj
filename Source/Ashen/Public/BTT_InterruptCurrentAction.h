#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "EActionType.h"
#include "BTT_InterruptCurrentAction.generated.h"

UCLASS(Blueprintable)
class ASHEN_API UBTT_InterruptCurrentAction : public UBTTaskNode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EActionType ActionType;
    
    UBTT_InterruptCurrentAction();
};

