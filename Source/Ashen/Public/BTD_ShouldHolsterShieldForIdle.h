#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "BTD_ShouldHolsterShieldForIdle.generated.h"

UCLASS(Blueprintable)
class ASHEN_API UBTD_ShouldHolsterShieldForIdle : public UBTDecorator {
    GENERATED_BODY()
public:
    UBTD_ShouldHolsterShieldForIdle();
};

