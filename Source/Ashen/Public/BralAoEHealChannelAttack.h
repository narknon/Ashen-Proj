#pragma once
#include "CoreMinimal.h"
#include "AIAttackActionBase.h"
#include "BralAoEHealChannelAttack.generated.h"

class UAnimMontage;
class UParticleSystem;

UCLASS(Blueprintable)
class ASHEN_API ABralAoEHealChannelAttack : public AAIAttackActionBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UAnimMontage* HealIntroMontage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UAnimMontage* HealLoopMontage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UAnimMontage* HealEndMontage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UParticleSystem* HealEffectParticles;
    
public:
    ABralAoEHealChannelAttack();
};

