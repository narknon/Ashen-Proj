#pragma once
#include "CoreMinimal.h"
#include "AIAttackActionBase.h"
#include "AIBombardAttack.generated.h"

class ACreature;

UCLASS(Blueprintable)
class ASHEN_API AAIBombardAttack : public AAIAttackActionBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ACreature* BombardCreature;
    
public:
    AAIBombardAttack();
};

