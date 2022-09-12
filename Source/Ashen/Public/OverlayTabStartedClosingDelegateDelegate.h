#pragma once
#include "CoreMinimal.h"
#include "EInputUIEventTypes.h"
#include "OverlayTabStartedClosingDelegateDelegate.generated.h"

class UUIPhase2MenuTab;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOverlayTabStartedClosingDelegate, UUIPhase2MenuTab*, Tab, EInputUIEventTypes, ButtonPressed);

