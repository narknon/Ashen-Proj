#pragma once
#include "CoreMinimal.h"
#include "StoryHumanoid.h"
#include "Scion.generated.h"

UCLASS(Blueprintable)
class ASHEN_API AScion : public AStoryHumanoid {
    GENERATED_BODY()
public:
    AScion();
    UFUNCTION(BlueprintCallable)
    void DoSummonGefn();
    
    UFUNCTION(BlueprintCallable)
    void DoBanishGefn();
    
};

