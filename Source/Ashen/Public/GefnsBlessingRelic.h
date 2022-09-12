#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "ItemRelicBase.h"
#include "AshenDamage.h"
#include "UIStatBarData.h"
#include "GefnsBlessingRelic.generated.h"

class AAISpawnCritter;
class USkeletalMesh;
class AHero;
class ARelicPhysicalItem;
class UParticleSystem;
class UMaterialInstanceDynamic;
class UParticleSystemComponent;

UCLASS(Blueprintable)
class ASHEN_API UGefnsBlessingRelic : public UItemRelicBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StageOneDamageTakenMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StageTwoDamageTakenMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StageThreeDamageTakenMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StageOneRebuildTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StageTwoRebuildTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StageThreeRebuildTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AAISpawnCritter> RafetSpawnerClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USkeletalMesh* MaskMeshStageOne;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USkeletalMesh* MaskMeshStageTwo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USkeletalMesh* MaskMeshStageThree;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName MaskAttachSocketName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ARelicPhysicalItem* GefnMaskItem;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AAISpawnCritter* RafetSpawner;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FxMaterialFadeCurrent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* MeshDynamicMaterialInstance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* FxMaskBuild;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UParticleSystemComponent* SpawnedMaskEmitter;
    
    UGefnsBlessingRelic();
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void UpdateMaterials();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnMaskStageBuiltFX(AHero* Player, int32 NewStage);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnMaskBrokenFX(AHero* Player);
    
public:
    UFUNCTION(BlueprintCallable)
    void OnHeroDamageRecieved(const FAshenDamage& Damage);
    
    UFUNCTION(BlueprintCallable)
    void ModifyHitDamageTaken(FAshenDamage& Damage);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetMaterialFadePercent() const;
    
    UFUNCTION(BlueprintCallable)
    TArray<FUIStatBarData> GetItemUIStatBars(bool SkipCustomization);
    
};

