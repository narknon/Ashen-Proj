#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "WakeRelicDummyActor.generated.h"

class UMaterialInstanceDynamic;
class UParticleSystem;
class UPoseableMeshComponent;
class USkeletalMeshComponent;

UCLASS(Blueprintable)
class ASHEN_API AWakeRelicDummyActor : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UPoseableMeshComponent* PoseableMeshComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* MeshHair;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* MeshFacialHair;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* DisintegrateParticles;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UMaterialInstanceDynamic*> DynamicMaterials;
    
public:
    AWakeRelicDummyActor();
};

