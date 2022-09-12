#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "ECustomMovementMode.h"
#include "AnimSyncData.generated.h"

USTRUCT(BlueprintType)
struct ASHEN_API FAnimSyncData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsWalking;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsRunning;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HeadLookYaw;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HeadLookPitch;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<EMovementMode> MovementMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECustomMovementMode CustomMovementMode;
    
    FAnimSyncData();
};

