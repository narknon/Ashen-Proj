#pragma once
#include "CoreMinimal.h"
#include "InputBindingData.h"
#include "InputBindingAxistData.h"
#include "GameFramework/PlayerInput.h"
#include "GameFramework/PlayerInput.h"
#include "InputBindingDataSet.generated.h"

USTRUCT(BlueprintType)
struct ASHEN_API FInputBindingDataSet {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FInputBindingData> KeyBindings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FInputBindingAxistData> AxisBindings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FInputActionKeyMapping> StandardizedKeyBindings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FInputAxisKeyMapping> StandardizedAxisBindings;
    
    FInputBindingDataSet();
};

