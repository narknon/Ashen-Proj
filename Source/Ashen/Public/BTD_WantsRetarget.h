#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "BTD_WantsRetarget.generated.h"

UCLASS(Blueprintable)
class ASHEN_API UBTD_WantsRetarget : public UBTDecorator {
    GENERATED_BODY()
public:
    UBTD_WantsRetarget();
};

