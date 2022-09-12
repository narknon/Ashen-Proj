#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "DestructibleProp.generated.h"

class UDestructibleComponent;

UCLASS(Blueprintable)
class ASHEN_API ADestructibleProp : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UDestructibleComponent* DestructibleComponent;
    
public:
    ADestructibleProp();
};

