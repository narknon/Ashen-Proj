#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "ItemEquipment.h"
#include "UObject/NoExportTypes.h"
#include "UIStatBarData.h"
#include "ItemWaterBottle.generated.h"

class AAction;
class UBuffEffect;
class UAkAudioEvent;
class AHero;

UCLASS(Blueprintable)
class ASHEN_API UItemWaterBottle : public UItemEquipment {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxCharges;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DefaultHealingAmount;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UBuffEffect> BuffEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxConsumptionsPerAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* DrinkFailSoundEffect;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText RefillBottleMessage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RefillScreenFlashDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RefillScreenFlashOpacity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxCurrentCharges;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    int32 CurrentCharge;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AHero* HeroOwner;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName AttachmentSocket;
    
    UItemWaterBottle();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable)
    void TryRefillWaterAction();
    
    UFUNCTION(BlueprintCallable)
    void TryReceiveWaterAction(const FVector& LerpLocation, const FVector& LerpDirection);
    
    UFUNCTION(BlueprintCallable)
    void TryOfferWaterAction(bool bTimeoutEnabled, float TimeoutSecs);
    
    UFUNCTION(BlueprintCallable)
    AAction* TryDirectionalRefillWaterAction(FVector Direction, bool bFromGround, bool bAutoStart);
    
    UFUNCTION(BlueprintCallable)
    void TryAddWaterAction();
    
    UFUNCTION(BlueprintCallable)
    void ResetCharges();
    
    UFUNCTION(BlueprintCallable)
    void OnOwnerReplenishedAtSaveStone(bool& bPlayEffects);
    
    UFUNCTION(BlueprintCallable)
    void IncreaseMaxChargesPermanently(int32 NumExtraCharges);
    
    UFUNCTION(BlueprintCallable)
    void IncreaseMaxCharges(int32 NumExtraCharges);
    
    UFUNCTION(BlueprintCallable)
    void IncreaseHealingLevelPermanently(float ExtraHealingAmount);
    
    UFUNCTION(BlueprintCallable)
    int32 GetUIStackAmountInternal();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetNumberOfDrinksRemaining();
    
    UFUNCTION(BlueprintCallable)
    TArray<FUIStatBarData> GetItemUIStatBars(bool SkipCustomization);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetDrinkCapacity();
    
};

