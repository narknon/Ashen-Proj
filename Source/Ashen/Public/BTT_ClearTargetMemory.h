#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "BTT_ClearTargetMemory.generated.h"

UCLASS(Blueprintable)
class ASHEN_API UBTT_ClearTargetMemory : public UBTTaskNode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEvenIfStillInBubble;
    
    UBTT_ClearTargetMemory();
};

