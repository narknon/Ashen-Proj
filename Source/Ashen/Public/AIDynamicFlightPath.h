#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "AIDynamicFlightPath.generated.h"

class ACreature;
class UAIDynamicFlightPathPoint;
class AActor;

UCLASS(Blueprintable)
class ASHEN_API UAIDynamicFlightPath : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ACreature* ParentCreature;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UAIDynamicFlightPathPoint*> PathPoints;
    
    UPROPERTY(EditAnywhere, Transient)
    TArray<TWeakObjectPtr<AActor>> IgnoreActorCollision;
    
public:
    UAIDynamicFlightPath();
};

