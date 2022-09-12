#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "EAIRelationship.h"
#include "BTT_SetTargetRelationship.generated.h"

UCLASS(Blueprintable)
class ASHEN_API UBTT_SetTargetRelationship : public UBTTaskNode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAIRelationship ToRelationship;
    
    UBTT_SetTargetRelationship();
};

