#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "ItemRelicBase.h"
#include "EItemQuality.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "AshenDamage.h"
#include "ENpcType.h"
#include "UIStatBarData.h"
#include "ItemShadowfiendRelic.generated.h"

class ACreature;
class AShadowFiendEffect;
class AHero;
class ARelicPhysicalItem;

UCLASS(Blueprintable)
class ASHEN_API UItemShadowfiendRelic : public UItemRelicBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxStacks;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AShadowFiendEffect> ShadowFiendEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EItemQuality, float> WeaponQualityDamageValues;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DamageIncreasePerItemLevel;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CurrentCharges;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ACreature* CurrentTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ARelicPhysicalItem* MaskPhysicalItem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName MaskAttachSocketName;
    
public:
    UItemShadowfiendRelic();
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void TickProjectiles(float DeltaTime);
    
    UFUNCTION(BlueprintCallable)
    AShadowFiendEffect* SpawnDamageEffect(FVector SpawnLocation, FRotator SpawnRotation);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetEffectsHidden(bool Hide);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSetFadePercent(FName FadeMaterialParameter, float FadePercent);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnReleaseDamageCharges(AHero* Player, ACreature* Target, float Damage);
    
public:
    UFUNCTION(BlueprintCallable)
    void OnPlayerHit(const FAshenDamage& Damage);
    
    UFUNCTION(BlueprintCallable)
    void OnMultiplayerFinalised(AHero* Player, ENpcType NPC);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnBuildDamageCharges(AHero* Player, int32 Charges, ACreature* Target, float Damage);
    
public:
    UFUNCTION(BlueprintCallable)
    void OnAttackHit(FAshenDamage& Damage, bool& TestSample);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnAllChargesLostFX(AHero* Player);
    
public:
    UFUNCTION(BlueprintCallable)
    TArray<FUIStatBarData> GetItemUIStatBars(bool SkipCustomization);
    
};

