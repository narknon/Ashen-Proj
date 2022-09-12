#pragma once
#include "CoreMinimal.h"
#include "CouldBecomeAshwraithDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FCouldBecomeAshwraith, bool&, IsPossible);

