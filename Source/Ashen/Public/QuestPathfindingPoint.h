#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "QuestPathfindingPoint.generated.h"

class AQuestPathfindingPoint;

UCLASS(Blueprintable)
class AQuestPathfindingPoint : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AQuestPathfindingPoint*> Neighbours;
    
public:
    AQuestPathfindingPoint();
};

