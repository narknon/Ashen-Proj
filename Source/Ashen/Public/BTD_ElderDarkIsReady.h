#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "BTD_ElderDarkIsReady.generated.h"

UCLASS(Blueprintable)
class ASHEN_API UBTD_ElderDarkIsReady : public UBTDecorator {
    GENERATED_BODY()
public:
    UBTD_ElderDarkIsReady();
};

