#pragma once
#include "CoreMinimal.h"
#include "AshenDamage.h"
#include "OnFlatDamageModifierDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnFlatDamageModifierDelegate, FAshenDamage&, _damage, bool&, _TestSample);

