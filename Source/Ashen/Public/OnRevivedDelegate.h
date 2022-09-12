#pragma once
#include "CoreMinimal.h"
#include "OnRevivedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnRevived, float&, ReviveHealth);

