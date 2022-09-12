#pragma once
#include "CoreMinimal.h"
#include "AIAttackActionBase.h"
#include "MatriarchAttackAction.generated.h"

class AMatriarch;
class ACreature;

UCLASS(Blueprintable)
class ASHEN_API AMatriarchAttackAction : public AAIAttackActionBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AMatriarch* Matriarch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ACreature*, float> HitPlayersTimer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ACreature*> HitCreatures;
    
public:
    AMatriarchAttackAction();
};

