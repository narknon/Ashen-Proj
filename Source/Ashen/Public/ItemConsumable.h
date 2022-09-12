#pragma once
#include "CoreMinimal.h"
#include "ItemBase.h"
#include "BuffEffectParameter.h"
#include "UIStatBarData.h"
#include "ItemConsumable.generated.h"

class UParticleSystem;
class UStaticMeshComponent;
class UAnimMontage;
class UAkAudioEvent;

UCLASS(Blueprintable)
class ASHEN_API UItemConsumable : public UItemBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* Mesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* Effect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* ConsumeAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FBuffEffectParameter> BuffEffects;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* OnConsumeSoundEffect;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxConsumptionsPerAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bBlockMovementDuringConsumption;
    
public:
    UItemConsumable();
    UFUNCTION(BlueprintCallable)
    TArray<FUIStatBarData> GetItemUIStatBars(bool SkipCustomization);
    
    UFUNCTION(BlueprintCallable)
    bool DestroyWhenEmpty();
    
};

