#pragma once
#include "CoreMinimal.h"
#include "AshenDamage.h"
#include "OnInflictDamageDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnInflictDamageDelegate, const FAshenDamage&, _damage);

