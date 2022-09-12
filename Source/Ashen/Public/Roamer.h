#pragma once
#include "CoreMinimal.h"
#include "Quadruped.h"
#include "Roamer.generated.h"

class UBoxComponent;

UCLASS(Blueprintable)
class ASHEN_API ARoamer : public AQuadruped {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UBoxComponent* HeadCollision;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UBoxComponent* BackLeftLegCollision;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UBoxComponent* BackRightLegCollision;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float OverrideSimpleCollisionRadius;
    
    ARoamer();
};

