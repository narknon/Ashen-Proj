#pragma once
#include "CoreMinimal.h"
#include "AttackTelegraphedSignatureDelegate.generated.h"

class ACreature;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FAttackTelegraphedSignature, ACreature*, Source);

