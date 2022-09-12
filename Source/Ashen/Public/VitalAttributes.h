#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "BleedBuff.h"
#include "EStaminaDrainType.h"
#include "AshenDamage.h"
#include "EAshenDamageType.h"
#include "VitalAttributes.generated.h"

class ACreature;
class AActor;
class UVitalAttributes;
class AHumanoid;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ASHEN_API UVitalAttributes : public UActorComponent {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSetCurrentPoiseDelegate, float&, NewPoise);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FDeathDelegate, AActor*, Parent, UVitalAttributes*, Source);
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxHealth;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MultiplayerHealthScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAlwaysScaleHealthForMultiplayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAlwaysDescaleHealthForMultiplayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BaseMaxStamina;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DerivedMaxStamina;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinStamina;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StaminaPercentageDrainPerUnit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StaminaDrainPerMinute;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BleedReduction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    float CurrentHealth;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CurrentRegainHealth;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RegainHealthDrainPerSecond;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LastHealth;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CurrentStamina;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CurrentMaxStamina;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LastStamina;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CurrentPoise;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxPoise;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PoiseRegenerationDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PoiseRegenerationTimer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PoiseRegenerationRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PoiseStaggerThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PoiseStunThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PoiseKnockdownThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PoiseInvulnerabilityTimePostStagger;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PoiseInvulnerabilityTimePostStun;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PoiseInvulnerabilityTimePostKnockdown;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PoiseDamageThresholdToIgnorePoiseInvulnerability;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StaggerDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StunDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float KnockdownDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StunImmunityTimer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StunImmunityTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StaminaRegenerationTimer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bExcessStaminaDrainCostsHealth;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StaminaRegenerationDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StaminaRegenerationPerSecond;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinPassiveStaminaDrainLimit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxStaminaDrainMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StaminaHeathDrainMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RescueHealthPercentage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ProjectileDamageMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ProjectilePoiseMultiplier;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FBleedBuff> BleedBuffs;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsStaggered;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    bool bUnkillable;
    
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDeathDelegate OnDeath;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSetCurrentPoiseDelegate OnPoiseSet;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ACreature* Creature;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AHumanoid* Humanoid;
    
public:
    UVitalAttributes();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable)
    void UpdateStamina(float Delta, EStaminaDrainType DrainType);
    
    UFUNCTION(BlueprintCallable)
    void UpdatePoiseEffects(FAshenDamage& Damage);
    
    UFUNCTION(BlueprintCallable)
    void UpdateHealthFromBleed(float Delta);
    
    UFUNCTION(BlueprintCallable)
    void UpdateHealth(float Delta, EAshenDamageType DamageType, AActor* Source);
    
    UFUNCTION(BlueprintCallable)
    void SetUnkillable(bool bEnable);
    
    UFUNCTION(BlueprintCallable)
    void SetMaxPoise(float NewPoise);
    
    UFUNCTION(BlueprintCallable)
    void Set(float Health, float Stamina);
    
    UFUNCTION(BlueprintCallable)
    void ResetPoise();
    
    UFUNCTION(BlueprintCallable)
    void Reset();
    
    UFUNCTION(BlueprintCallable)
    void ReGenPoise(float DeltaTime);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsUnkillable() const;
    
    UFUNCTION(BlueprintCallable)
    bool IsStunned();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsStaminaGreaterThanZero() const;
    
    UFUNCTION(BlueprintCallable)
    bool IsStaggered();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPoiseImmune() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPoiseDisabled() const;
    
    UFUNCTION(BlueprintCallable)
    bool IsKnockedDown();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAlive() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasDied() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetStaminaPercentage() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetRescueHealthAmount() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetRegainHealthPercentage() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetPoiseImmuneTimer() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetMaxStaminaPercentage() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetMaxPoise() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetLockonBarHealthPercentage() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetLastStaminaPercentage() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetLastHealthPercentage() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetHealthPercentage() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetBleedPercentage() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetBasePoise() const;
    
    UFUNCTION(BlueprintCallable)
    void EnablePoise();
    
    UFUNCTION(BlueprintCallable)
    void DisablePoise();
    
    UFUNCTION(BlueprintCallable)
    void ApplyBleed(float _damage);
    
};

