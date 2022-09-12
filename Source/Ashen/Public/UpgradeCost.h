#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "UpgradeCost.generated.h"

class UItemBase;

USTRUCT(BlueprintType)
struct ASHEN_API FUpgradeCost {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<TSubclassOf<UItemBase>, int32> UpgradeRequirements;
    
    FUpgradeCost();
};

