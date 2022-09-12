#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "BTD_IsBlocking.generated.h"

UCLASS(Blueprintable)
class ASHEN_API UBTD_IsBlocking : public UBTDecorator {
    GENERATED_BODY()
public:
    UBTD_IsBlocking();
};

