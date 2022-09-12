#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "BTD_MatriarchIsBoneDestroyed.generated.h"

UCLASS(Blueprintable)
class ASHEN_API UBTD_MatriarchIsBoneDestroyed : public UBTDecorator {
    GENERATED_BODY()
public:
    UBTD_MatriarchIsBoneDestroyed();
};

