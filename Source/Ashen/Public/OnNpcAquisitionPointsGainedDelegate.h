#pragma once
#include "CoreMinimal.h"
#include "ENpcType.h"
#include "OnNpcAquisitionPointsGainedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnNpcAquisitionPointsGained, ENpcType, NPC, float, NewTotal);

