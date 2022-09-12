#pragma once
#include "CoreMinimal.h"
#include "ItemRelicBase.h"
#include "UObject/NoExportTypes.h"
#include "AshenDamage.h"
#include "UIStatBarData.h"
#include "ItemFuseRelic.generated.h"

class UParticleSystem;
class UAkAudioEvent;

UCLASS(Blueprintable)
class ASHEN_API UItemFuseRelic : public UItemRelicBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AoeBurstRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AoeDamagePercent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AoePoiseDamagePercent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ChargeCooldown;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* FuseAoeParticle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* ExplosionSoundEffect;
    
public:
    UItemFuseRelic();
    UFUNCTION(BlueprintCallable)
    void OnWorldWeaponHit(FVector HitLocation);
    
    UFUNCTION(BlueprintCallable)
    void OnFullyChargedAttack(FAshenDamage& Damage);
    
    UFUNCTION(BlueprintCallable)
    TArray<FUIStatBarData> GetItemUIStatBars(bool SkipCustomization);
    
};

