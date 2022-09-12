#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "BTD_ElderDarkFightHasBegun.generated.h"

UCLASS(Blueprintable)
class ASHEN_API UBTD_ElderDarkFightHasBegun : public UBTDecorator {
    GENERATED_BODY()
public:
    UBTD_ElderDarkFightHasBegun();
};

