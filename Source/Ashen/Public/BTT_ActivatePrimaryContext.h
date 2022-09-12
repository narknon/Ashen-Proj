#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "BTT_ActivatePrimaryContext.generated.h"

UCLASS(Blueprintable)
class ASHEN_API UBTT_ActivatePrimaryContext : public UBTTaskNode {
    GENERATED_BODY()
public:
    UBTT_ActivatePrimaryContext();
};

