#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "AICreaturePool.h"
#include "AICreaturePoolManager.generated.h"

UCLASS(Blueprintable)
class ASHEN_API UAICreaturePoolManager : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAICreaturePool> Pools;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 LoadChunkSize;
    
    UAICreaturePoolManager();
};

