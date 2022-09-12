#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "BTT_LockRotateToTarget.generated.h"

UCLASS(Blueprintable)
class ASHEN_API UBTT_LockRotateToTarget : public UBTTaskNode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bLock;
    
    UBTT_LockRotateToTarget();
};

