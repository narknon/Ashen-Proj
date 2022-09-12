#pragma once
#include "CoreMinimal.h"
#include "AttackActionRoot.h"
#include "AttackDescription.h"
#include "AttackActionBase.generated.h"

class AHero;
class AActor;
class UItemWeapon;

UCLASS(Blueprintable)
class ASHEN_API AAttackActionBase : public AAttackActionRoot {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UItemWeapon* Weapon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AActor*> EnabledHits;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AActor*> EnabledImmuneCompHits;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCanRebound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bContinueAttack;
    
    UPROPERTY(EditAnywhere, Transient)
    uint8 AttackMontagesPlayed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AttackTimer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FAttackDescription AttackDescription;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bStaminaDrained;
    
public:
    AAttackActionBase();
    UFUNCTION(BlueprintCallable)
    void WeaponBeginOverlapDelegate(AActor* OverlappedActor, AActor* OtherActor);
    
    UFUNCTION(BlueprintCallable)
    bool IsAttackStartUp();
    
    UFUNCTION(BlueprintCallable)
    bool ContinueAttack(const FAttackDescription& AttackDesc, AHero* Hero);
    
};

