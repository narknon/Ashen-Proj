#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MatriarchEffectBlockingVolume.generated.h"

class UBoxComponent;

UCLASS(Blueprintable)
class ASHEN_API AMatriarchEffectBlockingVolume : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UBoxComponent* AreaBoxComponent;
    
    AMatriarchEffectBlockingVolume();
};

