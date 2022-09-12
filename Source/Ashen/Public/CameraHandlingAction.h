#pragma once
#include "CoreMinimal.h"
#include "Action.h"
#include "CameraHandlingAction.generated.h"

class AHero;

UCLASS(Blueprintable)
class ASHEN_API ACameraHandlingAction : public AAction {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AHero* Hero;
    
public:
    ACameraHandlingAction();
};

