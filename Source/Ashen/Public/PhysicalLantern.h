#pragma once
#include "CoreMinimal.h"
#include "PhysicalEquipment.h"
#include "PhysicalLantern.generated.h"

class UParticleSystemComponent;
class UAkAudioEvent;
class USceneComponent;
class UPointLightComponent;
class UStaticMeshComponent;
class USphereComponent;

UCLASS(Blueprintable)
class ASHEN_API APhysicalLantern : public APhysicalEquipment {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UParticleSystemComponent* partyLanternFire;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UParticleSystemComponent* LanternFire;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UParticleSystemComponent* PickupLanternFireflies;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    USceneComponent* LightsRoot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UPointLightComponent* QuadLight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UPointLightComponent* FillLight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* LanternRayA;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* LanternRayB;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* LanternRayC;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* VolumeSphere1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    USphereComponent* LanternPickUpRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* PlayLanternSoundEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* StopLanternSoundEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* PlacedOnGroundSoundEffect;
    
    APhysicalLantern();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnStorePhysicalLantern();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnHolsterPhysicalLantern();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnEquipPhysicalLantern();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void DrainPhysicalLantern(bool LightSuckActivation);
    
};

