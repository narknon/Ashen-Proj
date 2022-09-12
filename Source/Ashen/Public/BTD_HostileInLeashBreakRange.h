#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "BTD_HostileInLeashBreakRange.generated.h"

UCLASS(Blueprintable)
class ASHEN_API UBTD_HostileInLeashBreakRange : public UBTDecorator {
    GENERATED_BODY()
public:
    UBTD_HostileInLeashBreakRange();
};

