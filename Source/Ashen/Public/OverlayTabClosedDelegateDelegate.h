#pragma once
#include "CoreMinimal.h"
#include "EInputUIEventTypes.h"
#include "OverlayTabClosedDelegateDelegate.generated.h"

class UUIPhase2MenuTab;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOverlayTabClosedDelegate, UUIPhase2MenuTab*, Tab, EInputUIEventTypes, ButtonPressed);

