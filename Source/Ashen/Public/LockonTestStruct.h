#pragma once
#include "CoreMinimal.h"
#include "LockonTestStruct.generated.h"

class ACreature;

USTRUCT(BlueprintType)
struct FLockonTestStruct {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ACreature* Creature;
    
    ASHEN_API FLockonTestStruct();
};

