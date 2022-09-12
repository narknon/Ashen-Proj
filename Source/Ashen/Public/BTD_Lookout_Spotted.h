#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "BTD_Lookout_Spotted.generated.h"

UCLASS(Blueprintable)
class ASHEN_API UBTD_Lookout_Spotted : public UBTDecorator {
    GENERATED_BODY()
public:
    UBTD_Lookout_Spotted();
};

