#pragma once
#include "CoreMinimal.h"
#include "EArmourWeight.h"
#include "OnArmourStamPenaltyAppliedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnArmourStamPenaltyApplied, EArmourWeight, _armourWeight, float&, _penaltyModifier);

