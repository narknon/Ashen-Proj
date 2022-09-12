#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "AIDynamicFlightPathPoint.generated.h"

class UAIDynamicFlightPathPoint;
class AActor;
class ACreature;

UCLASS(Blueprintable)
class UAIDynamicFlightPathPoint : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, Transient)
    TWeakObjectPtr<UAIDynamicFlightPathPoint> NextPoint;
    
    UPROPERTY(EditAnywhere, Transient)
    TWeakObjectPtr<AActor> TrackActor;
    
    UPROPERTY(EditAnywhere, Transient)
    TWeakObjectPtr<ACreature> TrackCreature;
    
    UAIDynamicFlightPathPoint();
};

