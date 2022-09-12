#pragma once
#include "CoreMinimal.h"
#include "AIPinAttackBase.h"
#include "AshWraithPinAttackAction.generated.h"

class AAshWraith;

UCLASS(Blueprintable)
class ASHEN_API AAshWraithPinAttackAction : public AAIPinAttackBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AAshWraith* AshWraith;
    
public:
    AAshWraithPinAttackAction();
};

