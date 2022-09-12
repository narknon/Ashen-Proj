#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "EAIRelationship.h"
#include "BTT_TargetClosestCreature.generated.h"

UCLASS(Blueprintable)
class ASHEN_API UBTT_TargetClosestCreature : public UBTTaskNode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAIRelationship OfRelationship;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSkipVisibilityCheck;
    
    UBTT_TargetClosestCreature();
};

