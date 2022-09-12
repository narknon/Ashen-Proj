#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "ItemRelicBase.h"
#include "EAshenDamageType.h"
#include "UObject/NoExportTypes.h"
#include "UIStatBarData.h"
#include "ItemWakeRelic.generated.h"

class UAnimMontage;
class USkeletalMesh;
class UParticleSystem;
class UAkAudioEvent;
class AWakeRelicDummyActor;

UCLASS(Blueprintable)
class ASHEN_API UItemWakeRelic : public UItemRelicBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* DeathMontage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* RespawnMontage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USkeletalMesh* AshwraithSkeletalMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EAshenDamageType> NonValidDeathDamageTypes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector RespawnLocationOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector RespawnCameraOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AWakeRelicDummyActor> DummyActorClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* FxRevertedParticles;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* FxConvertedParticles;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* FxConvertedAudio;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USkeletalMesh* OriginalNpcMesh;
    
public:
    UItemWakeRelic();
    UFUNCTION(BlueprintCallable)
    void TrySpawnAsAshwraith(EAshenDamageType KillingDamageType, bool& CanSpawn);
    
    UFUNCTION(BlueprintCallable)
    void RespawnAsAshwraith();
    
    UFUNCTION(BlueprintCallable)
    TArray<FUIStatBarData> GetItemUIStatBars(bool SkipCustomization);
    
    UFUNCTION(BlueprintCallable)
    void CouldSpawnAsAshwraith(bool& CanSpawn);
    
};

