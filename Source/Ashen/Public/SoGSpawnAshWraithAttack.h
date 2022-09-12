#pragma once
#include "CoreMinimal.h"
#include "AIAttackActionBase.h"
#include "SoGSpawnAshWraithAttack.generated.h"

class UAnimMontage;
class AAISpawnShadowOfGod;
class AShadowOfGod;

UCLASS(Blueprintable)
class ASHEN_API ASoGSpawnAshWraithAttack : public AAIAttackActionBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UAnimMontage* IntroMontage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UAnimMontage* LoopMontage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UAnimMontage* EndMontage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AShadowOfGod* ShadowOfGod;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AAISpawnShadowOfGod* SogSpawner;
    
public:
    ASoGSpawnAshWraithAttack();
};

