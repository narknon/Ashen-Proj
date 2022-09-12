#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "BTD_Ambush_Triggered.generated.h"

UCLASS(Blueprintable)
class ASHEN_API UBTD_Ambush_Triggered : public UBTDecorator {
    GENERATED_BODY()
public:
    UBTD_Ambush_Triggered();
};

