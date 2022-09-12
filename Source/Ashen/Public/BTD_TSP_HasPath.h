#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "BTD_TSP_HasPath.generated.h"

UCLASS(Blueprintable)
class ASHEN_API UBTD_TSP_HasPath : public UBTDecorator {
    GENERATED_BODY()
public:
    UBTD_TSP_HasPath();
};

