#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "BTD_MatriarchIsPlayerKnockedDown.generated.h"

UCLASS(Blueprintable)
class ASHEN_API UBTD_MatriarchIsPlayerKnockedDown : public UBTDecorator {
    GENERATED_BODY()
public:
    UBTD_MatriarchIsPlayerKnockedDown();
};

