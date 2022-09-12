#pragma once
#include "CoreMinimal.h"
#include "OnReplenishAtSaveStoneDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnReplenishAtSaveStone, bool&, bPlayEffects);

