#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "EAIRelationship.h"
#include "BTT_SwapToOnEncounterHeroBehaviourTree.generated.h"

UCLASS(Blueprintable)
class ASHEN_API UBTT_SwapToOnEncounterHeroBehaviourTree : public UBTTaskNode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOnlyOfRelationship;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAIRelationship OfRelationship;
    
    UBTT_SwapToOnEncounterHeroBehaviourTree();
};

