#pragma once
#include "CoreMinimal.h"
#include "InputCoreTypes.h"
#include "InputBindingData.generated.h"

USTRUCT(BlueprintType)
struct ASHEN_API FInputBindingData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Bindingname;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKey KeyValue;
    
    FInputBindingData();
};

