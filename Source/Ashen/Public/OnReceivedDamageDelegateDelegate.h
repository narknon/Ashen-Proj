#pragma once
#include "CoreMinimal.h"
#include "AshenDamage.h"
#include "OnReceivedDamageDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnReceivedDamageDelegate, FAshenDamage&, _damage);

