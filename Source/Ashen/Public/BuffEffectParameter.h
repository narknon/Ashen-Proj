#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "BuffEffectParameter.generated.h"

class UBuffEffect;

USTRUCT(BlueprintType)
struct FBuffEffectParameter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UBuffEffect> BuffEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float EffectValue;
    
    ASHEN_API FBuffEffectParameter();
};

