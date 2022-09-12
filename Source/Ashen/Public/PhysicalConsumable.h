#pragma once
#include "CoreMinimal.h"
#include "PhysicalItem.h"
#include "PhysicalConsumable.generated.h"

class USkeletalMeshComponent;

UCLASS(Blueprintable)
class ASHEN_API APhysicalConsumable : public APhysicalItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* SkeletalMesh;
    
    APhysicalConsumable();
};

