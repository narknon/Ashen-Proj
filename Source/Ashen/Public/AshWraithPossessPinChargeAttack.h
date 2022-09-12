#pragma once
#include "CoreMinimal.h"
#include "AIAttackActionBase.h"
#include "AshWraithPossessPinChargeAttack.generated.h"

class AAshWraith;

UCLASS(Blueprintable)
class ASHEN_API AAshWraithPossessPinChargeAttack : public AAIAttackActionBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AAshWraith* AshWraith;
    
public:
    AAshWraithPossessPinChargeAttack();
};

