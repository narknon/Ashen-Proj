#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "BTD_Wraith_TeleportConsumed.generated.h"

UCLASS(Blueprintable)
class ASHEN_API UBTD_Wraith_TeleportConsumed : public UBTDecorator {
    GENERATED_BODY()
public:
    UBTD_Wraith_TeleportConsumed();
};

