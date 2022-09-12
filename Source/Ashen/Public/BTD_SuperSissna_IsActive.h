#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "BTD_SuperSissna_IsActive.generated.h"

UCLASS(Blueprintable)
class ASHEN_API UBTD_SuperSissna_IsActive : public UBTDecorator {
    GENERATED_BODY()
public:
    UBTD_SuperSissna_IsActive();
};

