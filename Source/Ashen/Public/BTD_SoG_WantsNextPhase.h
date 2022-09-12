#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "BTD_SoG_WantsNextPhase.generated.h"

UCLASS(Blueprintable)
class ASHEN_API UBTD_SoG_WantsNextPhase : public UBTDecorator {
    GENERATED_BODY()
public:
    UBTD_SoG_WantsNextPhase();
};

