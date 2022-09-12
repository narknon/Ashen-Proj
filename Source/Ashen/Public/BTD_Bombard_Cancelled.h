#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "BTD_Bombard_Cancelled.generated.h"

UCLASS(Blueprintable)
class ASHEN_API UBTD_Bombard_Cancelled : public UBTDecorator {
    GENERATED_BODY()
public:
    UBTD_Bombard_Cancelled();
};

