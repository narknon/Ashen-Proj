#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "EItemQuality.h"
#include "LootDrop.generated.h"

class UItemBase;

USTRUCT(BlueprintType)
struct ASHEN_API FLootDrop {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UItemBase> Item;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DropChance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOverrideQuality;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EItemQuality ItemQualityOverride;
    
    FLootDrop();
};

