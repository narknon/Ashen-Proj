#pragma once
#include "CoreMinimal.h"
#include "AshenAIControllerBase.h"
#include "UObject/NoExportTypes.h"
#include "CritterController.generated.h"

UCLASS(Blueprintable)
class ASHEN_API ACritterController : public AAshenAIControllerBase {
    GENERATED_BODY()
public:
    ACritterController();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetVectorToCurrentEscapeProxy() const;
    
};

