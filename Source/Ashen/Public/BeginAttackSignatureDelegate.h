#pragma once
#include "CoreMinimal.h"
#include "AttackDescription.h"
#include "BeginAttackSignatureDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FBeginAttackSignature, const FAttackDescription&, AttackData);

