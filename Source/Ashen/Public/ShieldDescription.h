#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "ShieldDescription.generated.h"

USTRUCT(BlueprintType)
struct ASHEN_API FShieldDescription : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StaminaMitigation;
    
    FShieldDescription();
};

