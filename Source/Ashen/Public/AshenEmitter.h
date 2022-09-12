#pragma once
#include "CoreMinimal.h"
#include "Particles/Emitter.h"
#include "AshenEmitter.generated.h"

UCLASS(Blueprintable)
class ASHEN_API AAshenEmitter : public AEmitter {
    GENERATED_BODY()
public:
    AAshenEmitter();
    UFUNCTION(BlueprintCallable)
    float GetDistanceToHero();
    
};

