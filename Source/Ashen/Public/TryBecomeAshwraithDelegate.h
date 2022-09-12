#pragma once
#include "CoreMinimal.h"
#include "EAshenDamageType.h"
#include "TryBecomeAshwraithDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FTryBecomeAshwraith, EAshenDamageType, DamageType, bool&, IsPossible);

