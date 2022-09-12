#pragma once
#include "CoreMinimal.h"
#include "EWeight.h"
#include "OnWeightStateModifierDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnWeightStateModifier, EWeight&, _weightState);

