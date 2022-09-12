#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "BTD_ElderDarkIsBeserk.generated.h"

UCLASS(Blueprintable)
class ASHEN_API UBTD_ElderDarkIsBeserk : public UBTDecorator {
    GENERATED_BODY()
public:
    UBTD_ElderDarkIsBeserk();
};

