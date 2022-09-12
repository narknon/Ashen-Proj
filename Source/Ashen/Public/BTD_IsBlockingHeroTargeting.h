#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "BTD_IsBlockingHeroTargeting.generated.h"

UCLASS(Blueprintable)
class ASHEN_API UBTD_IsBlockingHeroTargeting : public UBTDecorator {
    GENERATED_BODY()
public:
    UBTD_IsBlockingHeroTargeting();
};

