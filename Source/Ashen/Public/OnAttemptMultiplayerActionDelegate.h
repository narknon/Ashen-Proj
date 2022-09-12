#pragma once
#include "CoreMinimal.h"
#include "OnAttemptMultiplayerActionDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnAttemptMultiplayerAction, bool&, bCanSolo);

