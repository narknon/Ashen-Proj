#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "EAIRelationship.h"
#include "BTT_TargetClosestCreatureWithLantern.generated.h"

UCLASS(Blueprintable)
class ASHEN_API UBTT_TargetClosestCreatureWithLantern : public UBTTaskNode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAIRelationship OfRelationship;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bLanternMustBeDrawn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bLanternMustBeActive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bFailOnNoTargetSwap;
    
    UBTT_TargetClosestCreatureWithLantern();
};

