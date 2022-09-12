#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "BTDecorator_IsDead.generated.h"

UCLASS(Blueprintable)
class ASHEN_API UBTDecorator_IsDead : public UBTDecorator {
    GENERATED_BODY()
public:
    UBTDecorator_IsDead();
};

