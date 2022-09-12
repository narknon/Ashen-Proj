#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "BTD_Bombard_Triggered.generated.h"

UCLASS(Blueprintable)
class ASHEN_API UBTD_Bombard_Triggered : public UBTDecorator {
    GENERATED_BODY()
public:
    UBTD_Bombard_Triggered();
};

