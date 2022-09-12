#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "BTD_CritterInRangeOfEscapeZone.generated.h"

UCLASS(Blueprintable)
class ASHEN_API UBTD_CritterInRangeOfEscapeZone : public UBTDecorator {
    GENERATED_BODY()
public:
    UBTD_CritterInRangeOfEscapeZone();
};

