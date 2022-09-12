#pragma once
#include "CoreMinimal.h"
#include "AIAttackActionBase.h"
#include "AshWraithHoverChargeAttack.generated.h"

class AAshWraith;

UCLASS(Blueprintable)
class ASHEN_API AAshWraithHoverChargeAttack : public AAIAttackActionBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AAshWraith* AshWraith;
    
public:
    AAshWraithHoverChargeAttack();
};

