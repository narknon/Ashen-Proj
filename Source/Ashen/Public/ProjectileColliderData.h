#pragma once
#include "CoreMinimal.h"
#include "ProjectileColliderData.generated.h"

class UPrimitiveComponent;

USTRUCT(BlueprintType)
struct FProjectileColliderData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, Transient, meta=(AllowPrivateAccess=true))
    UPrimitiveComponent* Collider;
    
    ASHEN_API FProjectileColliderData();
};

