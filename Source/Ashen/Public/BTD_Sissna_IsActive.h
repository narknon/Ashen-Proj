#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "BTD_Sissna_IsActive.generated.h"

UCLASS(Blueprintable)
class ASHEN_API UBTD_Sissna_IsActive : public UBTDecorator {
    GENERATED_BODY()
public:
    UBTD_Sissna_IsActive();
};

