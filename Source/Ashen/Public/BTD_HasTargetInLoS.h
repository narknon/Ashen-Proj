#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "BTD_HasTargetInLoS.generated.h"

UCLASS(Blueprintable)
class ASHEN_API UBTD_HasTargetInLoS : public UBTDecorator {
    GENERATED_BODY()
public:
    UBTD_HasTargetInLoS();
};

