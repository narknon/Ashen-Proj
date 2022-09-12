#pragma once
#include "CoreMinimal.h"
#include "LootClosedDelegateDelegate.generated.h"

class AHero;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FLootClosedDelegate, AHero*, Hero);

