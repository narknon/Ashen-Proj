#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "BTD_AshWraithInFlightMode.generated.h"

UCLASS(Blueprintable)
class ASHEN_API UBTD_AshWraithInFlightMode : public UBTDecorator {
    GENERATED_BODY()
public:
    UBTD_AshWraithInFlightMode();
};

