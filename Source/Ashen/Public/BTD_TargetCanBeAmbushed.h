#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "BTD_TargetCanBeAmbushed.generated.h"

UCLASS(Blueprintable)
class ASHEN_API UBTD_TargetCanBeAmbushed : public UBTDecorator {
    GENERATED_BODY()
public:
    UBTD_TargetCanBeAmbushed();
};

