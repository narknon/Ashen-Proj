#pragma once
#include "CoreMinimal.h"
#include "EWaterType.h"
#include "AshenPhysicsProperties.generated.h"

class UPhysicalMaterial;

USTRUCT(BlueprintType)
struct ASHEN_API FAshenPhysicsProperties {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EWaterType, UPhysicalMaterial*> WaterTraceMaterials;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPhysicalMaterial* AshTraceMaterial;
    
    FAshenPhysicsProperties();
};

