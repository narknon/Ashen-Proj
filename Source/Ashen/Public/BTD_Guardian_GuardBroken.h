#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "BTD_Guardian_GuardBroken.generated.h"

UCLASS(Blueprintable)
class ASHEN_API UBTD_Guardian_GuardBroken : public UBTDecorator {
    GENERATED_BODY()
public:
    UBTD_Guardian_GuardBroken();
};

