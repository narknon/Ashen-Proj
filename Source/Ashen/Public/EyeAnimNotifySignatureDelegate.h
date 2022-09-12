#pragma once
#include "CoreMinimal.h"
#include "EAshenEyeNotifyType.h"
#include "EyeAnimNotifySignatureDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FEyeAnimNotifySignature, EAshenEyeNotifyType, NotifyType);

