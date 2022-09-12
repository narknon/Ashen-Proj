#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "FadeCreatureProxy.generated.h"

class UMaterialInstanceDynamic;
class UPoseableMeshComponent;
class USceneComponent;

UCLASS(Blueprintable)
class ASHEN_API AFadeCreatureProxy : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UPoseableMeshComponent* PoseableMeshComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UPoseableMeshComponent* MainhandPoseableMeshComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UPoseableMeshComponent* OffhandPoseableMeshComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    USceneComponent* BaseComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DisintegrateTime;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UMaterialInstanceDynamic*> MeshDynamicMaterialInstances;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UMaterialInstanceDynamic*> MainHandMeshDynamicMaterialInstances;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UMaterialInstanceDynamic*> OffHandMeshDynamicMaterialInstances;
    
public:
    AFadeCreatureProxy();
};

