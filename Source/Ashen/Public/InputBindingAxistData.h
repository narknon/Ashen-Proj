#pragma once
#include "CoreMinimal.h"
#include "InputCoreTypes.h"
#include "InputBindingAxistData.generated.h"

USTRUCT(BlueprintType)
struct ASHEN_API FInputBindingAxistData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Bindingname;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKey KeyValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AxisScaleValue;
    
    FInputBindingAxistData();
};

