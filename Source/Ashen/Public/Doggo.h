#pragma once
#include "CoreMinimal.h"
#include "Quadruped.h"
#include "Doggo.generated.h"

class UBoxComponent;

UCLASS(Blueprintable)
class ASHEN_API ADoggo : public AQuadruped {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UBoxComponent* HeadCollision;
    
    ADoggo();
};

