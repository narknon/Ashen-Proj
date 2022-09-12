#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "BTD_MatriarchHasThrownBone.generated.h"

UCLASS(Blueprintable)
class ASHEN_API UBTD_MatriarchHasThrownBone : public UBTDecorator {
    GENERATED_BODY()
public:
    UBTD_MatriarchHasThrownBone();
};

