#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "BTD_IsOnSpawner.generated.h"

UCLASS(Blueprintable)
class ASHEN_API UBTD_IsOnSpawner : public UBTDecorator {
    GENERATED_BODY()
public:
    UBTD_IsOnSpawner();
};

