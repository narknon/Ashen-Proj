#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "LootDrop.h"
#include "LootData.generated.h"

USTRUCT(BlueprintType)
struct ASHEN_API FLootData : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FLootDrop> Drops;
    
    FLootData();
};

