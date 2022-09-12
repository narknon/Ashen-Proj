#pragma once
#include "CoreMinimal.h"
#include "PhysicalWeaponBase.h"
#include "PhysicalWeapon.generated.h"

class UBoxComponent;
class UParticleSystemComponent;
class UMaterialBillboardComponent;

UCLASS(Blueprintable)
class ASHEN_API APhysicalWeapon : public APhysicalWeaponBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UBoxComponent* EquippedCollision;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, Transient, meta=(AllowPrivateAccess=true))
    UParticleSystemComponent* ChargeUpParticleEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UMaterialBillboardComponent* ChargeUpIconMaterial;
    
    APhysicalWeapon();
};

