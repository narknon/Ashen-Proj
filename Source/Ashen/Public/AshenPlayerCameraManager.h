#pragma once
#include "CoreMinimal.h"
#include "Camera/PlayerCameraManager.h"
#include "AshenPlayerCameraManager.generated.h"

class ACameraActor;

UCLASS(Blueprintable, NonTransient)
class ASHEN_API AAshenPlayerCameraManager : public APlayerCameraManager {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere, Transient)
    TWeakObjectPtr<ACameraActor> CinematicCameraActor;
    
public:
    AAshenPlayerCameraManager();
    UFUNCTION(BlueprintCallable)
    void SetFieldOfView(float NewFOV);
    
};

