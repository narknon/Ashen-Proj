#pragma once
#include "CoreMinimal.h"
#include "CritChanceSignatureDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FCritChanceSignature, float&, CriticalChanceConstant);

