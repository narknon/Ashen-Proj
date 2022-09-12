#pragma once
#include "CoreMinimal.h"
#include "ConsumableTable.h"
#include "FoodTable.generated.h"

USTRUCT(BlueprintType)
struct ASHEN_API FFoodTable : public FConsumableTable {
    GENERATED_BODY()
public:
    FFoodTable();
};

