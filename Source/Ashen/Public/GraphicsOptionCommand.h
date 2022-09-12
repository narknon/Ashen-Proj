#pragma once
#include "CoreMinimal.h"
#include "EGraphicsOptionPreset.h"
#include "GraphicsOptionCommand.generated.h"

USTRUCT(BlueprintType)
struct ASHEN_API FGraphicsOptionCommand {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Argument;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EGraphicsOptionPreset, float> Values;
    
    FGraphicsOptionCommand();
};

