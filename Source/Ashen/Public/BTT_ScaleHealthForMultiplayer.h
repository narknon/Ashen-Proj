#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "BTT_ScaleHealthForMultiplayer.generated.h"

UCLASS(Blueprintable)
class ASHEN_API UBTT_ScaleHealthForMultiplayer : public UBTTaskNode {
    GENERATED_BODY()
public:
    UBTT_ScaleHealthForMultiplayer();
};

