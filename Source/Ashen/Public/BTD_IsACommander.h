#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "BTD_IsACommander.generated.h"

UCLASS(Blueprintable)
class ASHEN_API UBTD_IsACommander : public UBTDecorator {
    GENERATED_BODY()
public:
    UBTD_IsACommander();
};

