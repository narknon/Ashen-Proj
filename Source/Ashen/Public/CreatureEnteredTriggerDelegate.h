#pragma once
#include "CoreMinimal.h"
#include "CreatureEnteredTriggerDelegate.generated.h"

class ACreature;
class AAITrigger;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FCreatureEnteredTrigger, ACreature*, Creature, AAITrigger*, Trigger);

