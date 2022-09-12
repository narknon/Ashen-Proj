#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "BTD_AttackIncoming.generated.h"

UCLASS(Blueprintable)
class ASHEN_API UBTD_AttackIncoming : public UBTDecorator {
    GENERATED_BODY()
public:
    UBTD_AttackIncoming();
};

