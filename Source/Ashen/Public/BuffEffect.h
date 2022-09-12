#pragma once
#include "CoreMinimal.h"
#include "EStaminaDrainType.h"
#include "UObject/Object.h"
#include "EPostProcessEffect.h"
#include "EBuffType.h"
#include "EItemQuality.h"
#include "EAshenDamageType.h"
#include "UIStatBarData.h"
#include "BuffEffect.generated.h"

class UParticleSystem;
class UAkAudioEvent;
class UHeroVitalAttributes;
class UParticleSystemComponent;
class AHero;

UCLASS(Abstract, Blueprintable)
class ASHEN_API UBuffEffect : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float EffectDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float EffectValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bExpires;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsHealing;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAffectsStamina;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* AudioEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* ParticleEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPostProcessEffect UsagePostProcessEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UParticleSystemComponent* ParticleComponent;
    
public:
    UBuffEffect();
protected:
    UFUNCTION(BlueprintCallable)
    void SetActive(bool bActive);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnTickEffect(float DeltaSeconds);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnEffectStarted();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnEffectEnded();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsExpired() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsActive() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EBuffType GetType();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    float GetStaminaRegenModifier();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    float GetStaminaChangeModifier(EStaminaDrainType DrainType, float StaminaDelta);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UHeroVitalAttributes* GetHeroVitalAttributes() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AHero* GetHero() const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    float GetHealthChangeModifier(EAshenDamageType DamageType, float HealthDelta);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetBuffUIBars(TArray<FUIStatBarData>& Bars, EItemQuality Quality);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void GetBlueprintUIBuffBars(TArray<FUIStatBarData>& Bars, EItemQuality Quality);
    
};

