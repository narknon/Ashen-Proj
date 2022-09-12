#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "BTD_ShouldEndDisengage.generated.h"

UCLASS(Blueprintable)
class ASHEN_API UBTD_ShouldEndDisengage : public UBTDecorator {
    GENERATED_BODY()
public:
    UBTD_ShouldEndDisengage();
};

