#pragma once
#include "CoreMinimal.h"
#include "PhysicalItem.h"
#include "RelicPhysicalItem.generated.h"

class USkeletalMeshComponent;

UCLASS(Blueprintable)
class ASHEN_API ARelicPhysicalItem : public APhysicalItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* SkeletalMeshComponent;
    
    ARelicPhysicalItem();
};

