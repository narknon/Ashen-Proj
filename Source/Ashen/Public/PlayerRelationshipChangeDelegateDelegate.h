#pragma once
#include "CoreMinimal.h"
#include "EAIRelationship.h"
#include "PlayerRelationshipChangeDelegateDelegate.generated.h"

class ACreature;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FPlayerRelationshipChangeDelegate, ACreature*, Owner, EAIRelationship, NewRelationship);

