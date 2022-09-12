#pragma once
#include "CoreMinimal.h"
#include "AshenBaseGameMode.h"
#include "TutorialGameMode.generated.h"

class ATutorialGameState;

UCLASS(Blueprintable, NonTransient)
class ASHEN_API ATutorialGameMode : public AAshenBaseGameMode {
    GENERATED_BODY()
public:
    ATutorialGameMode();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ATutorialGameState* GetTutorialGameState();
    
};

