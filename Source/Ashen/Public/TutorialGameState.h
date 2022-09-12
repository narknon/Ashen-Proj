#pragma once
#include "CoreMinimal.h"
#include "AshenBaseGameState.h"
#include "TutorialGameState.generated.h"

UCLASS(Blueprintable)
class ASHEN_API ATutorialGameState : public AAshenBaseGameState {
    GENERATED_BODY()
public:
    ATutorialGameState();
    UFUNCTION(BlueprintCallable)
    void CompleteTutorial();
    
};

