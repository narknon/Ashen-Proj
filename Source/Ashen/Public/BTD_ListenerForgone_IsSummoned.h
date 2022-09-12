#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "BTD_ListenerForgone_IsSummoned.generated.h"

UCLASS(Blueprintable)
class ASHEN_API UBTD_ListenerForgone_IsSummoned : public UBTDecorator {
    GENERATED_BODY()
public:
    UBTD_ListenerForgone_IsSummoned();
};

