#pragma once
#include "CoreMinimal.h"
#include "Action.h"
#include "MapTravelStartAction.generated.h"

class AHero;

UCLASS(Blueprintable)
class ASHEN_API AMapTravelStartAction : public AAction {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AHero* Hero;
    
    AMapTravelStartAction();
};

