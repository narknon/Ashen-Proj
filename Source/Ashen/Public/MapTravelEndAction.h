#pragma once
#include "CoreMinimal.h"
#include "Action.h"
#include "MapTravelEndAction.generated.h"

class AHero;
class AAshenPlayerController;

UCLASS(Blueprintable)
class ASHEN_API AMapTravelEndAction : public AAction {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AHero* Hero;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AAshenPlayerController* Controller;
    
public:
    AMapTravelEndAction();
};

