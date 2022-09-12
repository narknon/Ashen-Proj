#pragma once
#include "CoreMinimal.h"
#include "AIContextIdleAnim.h"
#include "AIContextAnimSet.generated.h"

USTRUCT(BlueprintType)
struct ASHEN_API FAIContextAnimSet {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAIContextIdleAnim> Idles;
    
    FAIContextAnimSet();
};

