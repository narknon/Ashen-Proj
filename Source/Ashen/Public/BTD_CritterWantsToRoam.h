#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "BTD_CritterWantsToRoam.generated.h"

UCLASS(Blueprintable)
class ASHEN_API UBTD_CritterWantsToRoam : public UBTDecorator {
    GENERATED_BODY()
public:
    UBTD_CritterWantsToRoam();
};

