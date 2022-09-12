#pragma once
#include "CoreMinimal.h"
#include "AttackActionBase.h"
#include "EAttackType.h"
#include "AttackDescription.h"
#include "WeaponAttackAction.generated.h"

class UAnimMontage;
class AHero;

UCLASS(Blueprintable)
class ASHEN_API AWeaponAttackAction : public AAttackActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, Transient)
    uint8 AttackSwings;
    
    UPROPERTY(EditAnywhere, Transient)
    uint8 NextAttackSwing;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString CurrentSection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString NextSection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAttackDescription NextAttackDesc;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString CurrentAttackTypeStr;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString NextAttackTypeStr;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CrossFadeRemaining;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CrossFadeMax;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* ContinueMontage;
    
public:
    AWeaponAttackAction();
    UFUNCTION(BlueprintCallable)
    void SecondaryInputReleased();
    
    UFUNCTION(BlueprintCallable)
    void HeavyInputReleased();
    
    UFUNCTION(BlueprintCallable)
    EAttackType GetCurrentAttackType() const;
    
    UFUNCTION(BlueprintCallable)
    bool ContinueAttack(const FAttackDescription& AttackDesc, AHero* ForHero);
    
};

