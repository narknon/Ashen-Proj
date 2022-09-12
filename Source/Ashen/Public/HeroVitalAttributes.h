#pragma once
#include "CoreMinimal.h"
#include "VitalAttributes.h"
#include "EAshenDamageType.h"
#include "OnRestedAtSaveStoneDelegate.h"
#include "OnConsumableUsedDelegate.h"
#include "HeroVitalAttributes.generated.h"

class UParticleSystem;
class UAkAudioEvent;
class AHero;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ASHEN_API UHeroVitalAttributes : public UVitalAttributes {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDontScaleHealthFromSave;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxHealthMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxStaminaMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float UIValueMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* SaveStoneReplenishParticleSystem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* SaveStoneReplenishAudioEvent;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AHero* Hero;
    
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnConsumableUsed OnConsumableUsed;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnRestedAtSaveStone OnRestedAtSaveStone;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bGodMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bStaminaKing;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* FailedStaminaCheckSoundEvent;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    bool bHasBeenDownedSinceLastRest;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HardcoreModeBaseHealth;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HardcoreModeBaseStamina;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HardcoreModeHealthIncreaseModifier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HardcoreModeStaminaIncreaseModifier;
    
public:
    UHeroVitalAttributes();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable)
    void UpdateMaxStaminaCap(float Delta, bool IsPercentageChange);
    
    UFUNCTION(BlueprintCallable)
    void UpdateMaxStamina(float Delta);
    
    UFUNCTION(BlueprintCallable)
    void UpdateMaxHealth(float Delta, bool IsPercentageChange, EAshenDamageType DamageType, bool KeepCurrentHealthRatio);
    
    UFUNCTION(BlueprintCallable)
    bool StaminaCostCheck(float StaminaCost, bool bPlaySoundOnFail);
    
    UFUNCTION(BlueprintCallable)
    void ResetNoStaminaAudioLock();
    
    UFUNCTION(BlueprintCallable)
    void IncreaseTemporaryMaxStamina(float Increase);
    
    UFUNCTION(BlueprintCallable)
    void IncreaseStaminaRegenRatePermanently(float Increase);
    
    UFUNCTION(BlueprintCallable)
    void IncreaseMaxStaminaPermanently(float Increase, bool bFromQuestReward, float RewardDelay);
    
    UFUNCTION(BlueprintCallable)
    void IncreaseMaxHealthPermanently(float Increase, bool bFromQuestReward, float RewardDelay);
    
    UFUNCTION(BlueprintCallable)
    bool HasSecoundLife_UICheck(bool& HasAshwraithRespawn);
    
};

