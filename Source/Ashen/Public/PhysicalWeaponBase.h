#pragma once
#include "CoreMinimal.h"
#include "EItemQuality.h"
#include "PhysicalEquipment.h"
#include "UObject/NoExportTypes.h"
#include "PhysicalWeaponBase.generated.h"

class USceneComponent;
class UParticleSystemComponent;
class UMaterialInstanceDynamic;

UCLASS(Blueprintable)
class ASHEN_API APhysicalWeaponBase : public APhysicalEquipment {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    USceneComponent* AttackTrailAttachment;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    USceneComponent* AttackHitLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, Transient, meta=(AllowPrivateAccess=true))
    UParticleSystemComponent* AttackTrailFx;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, Transient, meta=(AllowPrivateAccess=true))
    UParticleSystemComponent* DefaultAttackTrailFx;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UParticleSystemComponent* WeaponTierPassiveFx;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* MaterialEffectsInstance;
    
public:
    APhysicalWeaponBase();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void WeaponTierEffectsSet(int32 EffectTier, UMaterialInstanceDynamic* MaterialInstance);
    
    UFUNCTION(BlueprintCallable)
    void SetWeaponTierEffects(EItemQuality Tier);
    
    UFUNCTION(BlueprintCallable)
    void PlayModifierHitEffects(EItemQuality Tier, const FVector& HitLoc);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UMaterialInstanceDynamic* GetDynamicMaterialInstance();
    
    UFUNCTION(BlueprintCallable)
    void DeactivateWeaponTrail();
    
    UFUNCTION(BlueprintCallable)
    void ActivateWeaponTrail(bool bUseFullyChargedTrail);
    
};

