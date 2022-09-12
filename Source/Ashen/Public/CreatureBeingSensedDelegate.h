#pragma once
#include "CoreMinimal.h"
#include "AIPerceptionSenseRules.h"
#include "CreatureBeingSensedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FCreatureBeingSensed, FAIPerceptionSenseRules&, SenseRules);

