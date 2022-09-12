#pragma once
#include "CoreMinimal.h"
#include "VariableMontage.generated.h"

class UAnimMontage;

USTRUCT(BlueprintType)
struct ASHEN_API FVariableMontage {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* Montage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Weight;
    
    FVariableMontage();
};

