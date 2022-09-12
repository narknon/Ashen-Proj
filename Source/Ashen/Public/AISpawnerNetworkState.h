#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EAIRelationship.h"
#include "UObject/NoExportTypes.h"
#include "AISpawnerNetworkState.generated.h"

USTRUCT(BlueprintType)
struct ASHEN_API FAISpawnerNetworkState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGuid SpawnerGuid;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector CreatureLocation;
    
    UPROPERTY(EditAnywhere)
    uint32 CreatureMontageHash;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TotalDeaths;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LastDeathTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAIRelationship LastPlayerRelationship;
    
protected:
    UPROPERTY(EditAnywhere)
    uint8 NetworkStateFlags;
    
public:
    FAISpawnerNetworkState();
};

