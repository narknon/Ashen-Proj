#pragma once
#include "CoreMinimal.h"
#include "RaidenData.h"
#include "AshenRaidenLightingChangeDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FAshenRaidenLightingChange, const FRaidenData&, newRaidenData);

