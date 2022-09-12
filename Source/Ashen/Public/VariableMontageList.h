#pragma once
#include "CoreMinimal.h"
#include "EActionType.h"
#include "VariableMontage.h"
#include "VariableMontageList.generated.h"

USTRUCT(BlueprintType)
struct ASHEN_API FVariableMontageList {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EActionType Type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVariableMontage> MontageList;
    
    FVariableMontageList();
};

