#pragma once
#include "CoreMinimal.h"
#include "StreamingLevelSyncPackage.generated.h"

USTRUCT(BlueprintType)
struct ASHEN_API FStreamingLevelSyncPackage {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName PackageName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShouldBeVisible;
    
    FStreamingLevelSyncPackage();
};

