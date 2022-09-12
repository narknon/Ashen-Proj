#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "AshStatue.generated.h"

class UMaterialInstanceDynamic;
class UParticleSystem;
class UPoseableMeshComponent;
class UCapsuleComponent;

UCLASS(Blueprintable)
class ASHEN_API AAshStatue : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UPoseableMeshComponent* PoseableMeshComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UCapsuleComponent* CollisionComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* DisintegrateParticles;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DisintegrateRate;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UMaterialInstanceDynamic*> MeshDynamicMaterialInstances;
    
public:
    AAshStatue();
};

