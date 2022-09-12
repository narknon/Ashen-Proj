#pragma once
#include "CoreMinimal.h"
#include "CraftingStat.generated.h"

USTRUCT(BlueprintType)
struct ASHEN_API FCraftingStat {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CurrentValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float NextValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText CategoryText;
    
    FCraftingStat();
};

