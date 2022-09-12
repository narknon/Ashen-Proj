#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "UObject/NoExportTypes.h"
#include "AudioSpline.generated.h"

class UAkComponent;
class USplineComponent;
class UAkAudioEvent;

UCLASS(Blueprintable)
class ASHEN_API AAudioSpline : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    USplineComponent* SplineComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UAkComponent* AudioComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* AudioStopEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DisplacementThreshold;
    
public:
    AAudioSpline();
    UFUNCTION(BlueprintCallable)
    void UpdateAudioComponentPosition(const FVector& ListenerLocation);
    
};

