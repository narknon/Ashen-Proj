#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "BTD_ShouldLeashToSpawner.generated.h"

UCLASS(Blueprintable)
class ASHEN_API UBTD_ShouldLeashToSpawner : public UBTDecorator {
    GENERATED_BODY()
public:
    UBTD_ShouldLeashToSpawner();
};

