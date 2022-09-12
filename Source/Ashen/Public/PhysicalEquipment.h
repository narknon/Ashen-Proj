#pragma once
#include "CoreMinimal.h"
#include "PhysicalItem.h"
#include "PhysicalEquipment.generated.h"

class USkeletalMeshComponent;
class UMaterialInstanceDynamic;

UCLASS(Blueprintable)
class ASHEN_API APhysicalEquipment : public APhysicalItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* SkeletalMesh;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UMaterialInstanceDynamic*> MeshDynamicMaterialInstances;
    
public:
    APhysicalEquipment();
    UFUNCTION(BlueprintCallable)
    USkeletalMeshComponent* GetSkeletalMesh();
    
};

