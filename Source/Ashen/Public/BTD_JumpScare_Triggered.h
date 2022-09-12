#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "BTD_JumpScare_Triggered.generated.h"

UCLASS(Blueprintable)
class ASHEN_API UBTD_JumpScare_Triggered : public UBTDecorator {
    GENERATED_BODY()
public:
    UBTD_JumpScare_Triggered();
};

