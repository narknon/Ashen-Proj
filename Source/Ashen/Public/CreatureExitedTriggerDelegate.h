#pragma once
#include "CoreMinimal.h"
#include "CreatureExitedTriggerDelegate.generated.h"

class ACreature;
class AAITrigger;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FCreatureExitedTrigger, ACreature*, Creature, AAITrigger*, Trigger);

