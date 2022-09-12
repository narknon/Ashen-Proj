#pragma once
#include "CoreMinimal.h"
#include "ItemWeapon.h"
#include "UIStatBarData.h"
#include "ItemShield.generated.h"

class UAkAudioEvent;
class UParticleSystem;

UCLASS(Blueprintable)
class ASHEN_API UItemShield : public UItemWeapon {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PoiseValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PoiseMitigation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PoiseReboundThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StaminaMitigation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StaminaRegenModifier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BlockArcDegrees;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* OnBlockedFX;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* ImpactAudioEvent;
    
public:
    UItemShield();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetStaminaRegenModifier() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetStaminaMitgation() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetPoiseValue() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetPoiseReboundThreshold() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetPoiseMitigationValue() const;
    
    UFUNCTION(BlueprintCallable)
    TArray<FUIStatBarData> GetItemUIStatBars(bool SkipCustomization);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetBlockArc() const;
    
};

