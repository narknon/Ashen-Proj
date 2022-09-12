#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "BTD_TSP_ShouldRun.generated.h"

UCLASS(Blueprintable)
class ASHEN_API UBTD_TSP_ShouldRun : public UBTDecorator {
    GENERATED_BODY()
public:
    UBTD_TSP_ShouldRun();
};

