#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "BTD_Riak_WantsNextPhase.generated.h"

UCLASS(Blueprintable)
class ASHEN_API UBTD_Riak_WantsNextPhase : public UBTDecorator {
    GENERATED_BODY()
public:
    UBTD_Riak_WantsNextPhase();
};

