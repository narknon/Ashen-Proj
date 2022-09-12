#pragma once
#include "CoreMinimal.h"
#include "AISpawnerNetworkState.h"
#include "UObject/NoExportTypes.h"
#include "NetworkedCameraState.h"
#include "AISpawnerNetworkStatePack.generated.h"

USTRUCT(BlueprintType)
struct ASHEN_API FAISpawnerNetworkStatePack {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAISpawnerNetworkState> SpawnerNetworkStates;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FNetworkedCameraState RemoteCameraState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector RemoteHeroLocation;
    
    FAISpawnerNetworkStatePack();
};

