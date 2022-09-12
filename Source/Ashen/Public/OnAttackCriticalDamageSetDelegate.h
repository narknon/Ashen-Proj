#pragma once
#include "CoreMinimal.h"
#include "OnAttackCriticalDamageSetDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnAttackCriticalDamageSet, float&, CriticalDamageMultiplier);

