#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "BTD_IsStunned.generated.h"

UCLASS(Blueprintable)
class ASHEN_API UBTD_IsStunned : public UBTDecorator {
    GENERATED_BODY()
public:
    UBTD_IsStunned();
};

