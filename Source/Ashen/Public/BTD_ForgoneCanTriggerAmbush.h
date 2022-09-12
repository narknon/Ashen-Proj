#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "BTD_ForgoneCanTriggerAmbush.generated.h"

UCLASS(Blueprintable)
class ASHEN_API UBTD_ForgoneCanTriggerAmbush : public UBTDecorator {
    GENERATED_BODY()
public:
    UBTD_ForgoneCanTriggerAmbush();
};

