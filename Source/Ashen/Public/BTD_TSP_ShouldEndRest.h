#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "BTD_TSP_ShouldEndRest.generated.h"

UCLASS(Blueprintable)
class ASHEN_API UBTD_TSP_ShouldEndRest : public UBTDecorator {
    GENERATED_BODY()
public:
    UBTD_TSP_ShouldEndRest();
};

