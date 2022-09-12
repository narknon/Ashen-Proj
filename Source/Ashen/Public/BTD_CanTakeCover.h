#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "BTD_CanTakeCover.generated.h"

UCLASS(Blueprintable)
class ASHEN_API UBTD_CanTakeCover : public UBTDecorator {
    GENERATED_BODY()
public:
    UBTD_CanTakeCover();
};

