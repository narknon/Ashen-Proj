#pragma once
#include "CoreMinimal.h"
#include "AshenDamage.h"
#include "DamageDeltSignatureDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FDamageDeltSignature, const FAshenDamage&, DamageDescription);

