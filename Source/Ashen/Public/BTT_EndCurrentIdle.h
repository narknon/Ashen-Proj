#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "BTT_EndCurrentIdle.generated.h"

UCLASS(Blueprintable)
class ASHEN_API UBTT_EndCurrentIdle : public UBTTaskNode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bTryFastEnd;
    
    UBTT_EndCurrentIdle();
};

