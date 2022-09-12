#pragma once
#include "CoreMinimal.h"
#include "OnConsumableUsedDelegate.generated.h"

class UItemConsumable;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnConsumableUsed, UItemConsumable*, Consumable);

