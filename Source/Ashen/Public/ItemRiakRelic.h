#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "ItemRelicBase.h"
#include "AshenDamage.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "ItemRiakRelic.generated.h"

class ARelicPhysicalItem;
class USkeletalMesh;
class UParticleSystem;
class UBuffEffect;
class UAkAudioEvent;
class UItemWeaponBase;
class USceneComponent;

UCLASS(Blueprintable)
class ASHEN_API UItemRiakRelic : public UItemRelicBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ARelicPhysicalItem* MaskItem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName MaskAttachSocketName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USkeletalMesh* MaskMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* LifeStealWeaponFx;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UBuffEffect> BuffEffectClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBuffEffect* ActiveBuffEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* OnHitSoundEffect;
    
public:
    UItemRiakRelic();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetEffectsHidden(bool Hide);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSpawnHitEffects();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSetFadePercent(FName FadeMaterialParameter, float FadePercent);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnDamageDealt(const FAshenDamage& Damage);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool GetWeaponEffectsAttachPoint(UItemWeaponBase* WeaponToAttachTo, USceneComponent*& AttachTo, FVector& Offset, FRotator& Rotation);
    
};

