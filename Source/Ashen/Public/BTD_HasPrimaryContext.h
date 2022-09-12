#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "BTD_HasPrimaryContext.generated.h"

UCLASS(Blueprintable)
class ASHEN_API UBTD_HasPrimaryContext : public UBTDecorator {
    GENERATED_BODY()
public:
    UBTD_HasPrimaryContext();
};

