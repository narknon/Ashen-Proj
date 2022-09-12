#pragma once
#include "CoreMinimal.h"
#include "OnHeroInteractedDelegate.generated.h"

class AHero;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnHeroInteracted, AHero*, Hero);

