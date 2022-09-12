#pragma once
#include "CoreMinimal.h"
#include "DebugOutputCategory.generated.h"

USTRUCT(BlueprintType)
struct FDebugOutputCategory {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString CategoryTitle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> outputText;
    
    ASHEN_API FDebugOutputCategory();
};

