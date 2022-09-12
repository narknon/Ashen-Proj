#pragma once
#include "CoreMinimal.h"
#include "AshenDamage.h"
#include "OnDamageModifierDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnDamageModifierDelegate, FAshenDamage&, _damage, bool&, _TestSample);

