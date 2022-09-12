#pragma once
#include "CoreMinimal.h"
#include "TutorialChecker.h"
#include "ECheckerCategory.h"
#include "TutorialCheckerCustom.generated.h"

class AAshenBaseGameState;
class UAshenEventData;

UCLASS(Blueprintable)
class ASHEN_API UTutorialCheckerCustom : public UTutorialChecker {
    GENERATED_BODY()
public:
    UTutorialCheckerCustom();
    UFUNCTION(BlueprintCallable)
    void Setup(AAshenBaseGameState* BaseState, ECheckerCategory Category);
    
    UFUNCTION(BlueprintCallable)
    void OnTrackedQueryCallback(UAshenEventData* Data);
    
};

