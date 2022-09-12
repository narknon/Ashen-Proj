#pragma once
#include "CoreMinimal.h"
#include "AshenDamage.h"
#include "AttackFullyChargedSignatureDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FAttackFullyChargedSignature, FAshenDamage&, AshenDamage);

