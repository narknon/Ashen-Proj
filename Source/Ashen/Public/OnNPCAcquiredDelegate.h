#pragma once
#include "CoreMinimal.h"
#include "OnNPCAcquiredDelegate.generated.h"

class AHero;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnNPCAcquired, AHero*, _NPC);

