#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "BTD_Herd_ShouldAlert.generated.h"

UCLASS(Blueprintable)
class ASHEN_API UBTD_Herd_ShouldAlert : public UBTDecorator {
    GENERATED_BODY()
public:
    UBTD_Herd_ShouldAlert();
};

