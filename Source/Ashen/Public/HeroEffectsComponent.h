#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "EPostProcessEffect.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "HeroEffectsComponent.generated.h"

class AHero;
class UDataTable;
class UObject;
class UCurveFloat;
class UParticleSystem;
class UAkAudioEvent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ASHEN_API UHeroEffectsComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AHero* Hero;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* PhysicalMaterialDataTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ProcFx_CheckRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ProcFx_SpawnRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* ProgressionMilestoneEffects;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* ProgressionMilestoneAudioEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ProgressionMilestoneMusicTrigger;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* PostProcessInterpCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EPostProcessEffect, UObject*> EffectAssetReferences;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EPostProcessEffect, UCurveFloat*> EffectCurveReferences;
    
    UHeroEffectsComponent();
    UFUNCTION(BlueprintCallable)
    void TriggerProgressionMilestone();
    
    UFUNCTION(BlueprintCallable)
    void ProcFx_ProcessTick(float DeltaSeconds, FVector CenterLoc, FRotator CenterRot);
    
    UFUNCTION(BlueprintCallable)
    void ProcFx_GetSpawnLocScore(FVector InputVector, int32& Score);
    
    UFUNCTION(BlueprintCallable)
    void PostProcessSetEffectBlendValue(float InBlend);
    
    UFUNCTION(BlueprintCallable)
    void PostProcessSetEffect(UObject* EffectToPlay, UCurveFloat* PlayCurve, float SetWeight);
    
    UFUNCTION(BlueprintCallable)
    void PostProcessPlayCurve(UCurveFloat* Curve);
    
    UFUNCTION(BlueprintCallable)
    void PostProcessDisableEffect();
    
    UFUNCTION(BlueprintCallable)
    void PlayPostProcess(EPostProcessEffect Effect);
    
};

