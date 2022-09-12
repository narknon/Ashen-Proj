#pragma once
#include "CoreMinimal.h"
#include "EStaminaDrainType.h"
#include "OnStaminaConsumedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnStaminaConsumed, float&, _stamina, EStaminaDrainType, _drainType);

