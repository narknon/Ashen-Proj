#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "BTT_Riak_BeginFight.generated.h"

UCLASS(Blueprintable)
class ASHEN_API UBTT_Riak_BeginFight : public UBTTaskNode {
    GENERATED_BODY()
public:
    UBTT_Riak_BeginFight();
};

