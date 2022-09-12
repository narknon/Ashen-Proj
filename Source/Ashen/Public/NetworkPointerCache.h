#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "NetworkPointerCache.generated.h"

class UNetworkComponent;

USTRUCT(BlueprintType)
struct ASHEN_API FNetworkPointerCache {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TMap<FGuid, UNetworkComponent*> Cache;
    
public:
    FNetworkPointerCache();
};

