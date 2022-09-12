#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "AttackDescription.h"
#include "TierModifier.h"
#include "ItemWeaponBase.h"
#include "ItemLevelModifier.h"
#include "Engine/DataTable.h"
#include "UObject/NoExportTypes.h"
#include "UIStatBarData.h"
#include "ItemWeapon.generated.h"

class ACreature;
class UAttackSet;
class AAttackActionBase;
class AProjectile;
class UParticleSystem;

UCLASS(Blueprintable)
class ASHEN_API UItemWeapon : public UItemWeaponBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTierModifier> TierModifiers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FItemLevelModifier ItemLevelModifier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle LightAttackDataRow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle HeavyAttackDataRow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle RollAttackDataRow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle SprintAttackDataRow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle PlungingAttackDataRow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FDataTableRowHandle> ComboAttackDescriptionData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAttackDescription LightAttackData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHasLightAttack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAttackDescription HeavyAttackData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHasHeavyAttack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAttackDescription RollAttackData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHasRollAttack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAttackDescription SprintAttackData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHasSprintAttack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAttackDescription PlungingAttackData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHasPlungingAttack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAttackDescription> ComboAttacks;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHasComboAttacks;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAttackSet* WeaponAttackSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AAttackActionBase> AttackClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AProjectile> UseProjectile;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bTwoHanded;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bForceSingleHandedLocomotion;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AttackAnimRateScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ChargeTimer;
    
    UItemWeapon();
    UFUNCTION(BlueprintCallable)
    void Tick(float DeltaSeconds);
    
    UFUNCTION(BlueprintCallable)
    void SetupAttackData();
    
    UFUNCTION(BlueprintCallable)
    void PlayHitFlashEffect(UParticleSystem* EffectsSystem, FVector HitLoc);
    
    UFUNCTION(BlueprintCallable)
    void PlayBloodTrailEffect(UParticleSystem* EffectsSystem);
    
    UFUNCTION(BlueprintCallable)
    void GetWeaponUIValues(ACreature* Source, float& Light_Current, float& Heavy_Current, float& Light_Upgraded, float& Heavy_Upgraded, float& PoiseLight, float& PoiseHeavy, float& PoiseLUp, float& PoiseHUp, float CritConst, float& CritCurrent, float& CritUp);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FAttackDescription GetRandomComboAttack();
    
    UFUNCTION(BlueprintCallable)
    TArray<FUIStatBarData> GetItemUIStatBars(bool SkipCustomization);
    
    UFUNCTION(BlueprintCallable)
    void FullyCharged(UParticleSystem* EffectChargeUpComplete);
    
    UFUNCTION(BlueprintCallable)
    void EnableWeaponCollision(const FAttackDescription& AttackDescription);
    
    UFUNCTION(BlueprintCallable)
    void EnableStunEffect(const FAttackDescription& UseAttackDescription);
    
    UFUNCTION(BlueprintCallable)
    void DisableWeaponCollision();
    
    UFUNCTION(BlueprintCallable)
    void DisableStunEffect();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void CanWeaponAttack(bool& _b);
    
};

