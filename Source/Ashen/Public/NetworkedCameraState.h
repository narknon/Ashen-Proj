#pragma once
#include "CoreMinimal.h"
#include "NetworkedCameraState.generated.h"

USTRUCT(BlueprintType)
struct ASHEN_API FNetworkedCameraState {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<float> CameraPosition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<float> CameraFrustrumPlanes;
    
public:
    FNetworkedCameraState();
};

