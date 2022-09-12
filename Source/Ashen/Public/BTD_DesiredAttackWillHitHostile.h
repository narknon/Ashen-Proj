#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "BTD_DesiredAttackWillHitHostile.generated.h"

UCLASS(Blueprintable)
class ASHEN_API UBTD_DesiredAttackWillHitHostile : public UBTDecorator {
    GENERATED_BODY()
public:
    UBTD_DesiredAttackWillHitHostile();
};

