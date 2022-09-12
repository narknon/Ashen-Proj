#pragma once
#include "CoreMinimal.h"
#include "AIAttackActionBase.h"
#include "AshenDamage.h"
#include "SissnaStrutAttack.generated.h"

class UAnimMontage;

UCLASS(Blueprintable)
class ASHEN_API ASissnaStrutAttack : public AAIAttackActionBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UAnimMontage* IntroMontage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UAnimMontage* LoopMontage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UAnimMontage* EndMontage;
    
public:
    ASissnaStrutAttack();
protected:
    UFUNCTION(BlueprintCallable)
    void OnDamageTaken(const FAshenDamage& Damage);
    
};

