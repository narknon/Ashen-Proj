#pragma once
#include "CoreMinimal.h"
#include "NpcState.h"
#include "OverlayTownPersonInput.generated.h"

USTRUCT(BlueprintType)
struct FOverlayTownPersonInput {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Profession;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DisplayTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FNpcState State;
    
    ASHEN_API FOverlayTownPersonInput();
};

