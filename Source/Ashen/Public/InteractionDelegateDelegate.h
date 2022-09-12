#pragma once
#include "CoreMinimal.h"
#include "InteractionDelegateDelegate.generated.h"

class UInteraction;
class ACreature;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FInteractionDelegate, UInteraction*, Source, ACreature*, Target);

