#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "BTD_Ambush_UsingMoveMarker.generated.h"

UCLASS(Blueprintable)
class ASHEN_API UBTD_Ambush_UsingMoveMarker : public UBTDecorator {
    GENERATED_BODY()
public:
    UBTD_Ambush_UsingMoveMarker();
};

