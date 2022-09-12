#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "AICreaturePool.generated.h"

class ACreature;

USTRUCT(BlueprintType)
struct ASHEN_API FAICreaturePool {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ACreature> CreatureClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 InstanceCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<ACreature*> Instances;
    
    FAICreaturePool();
};

