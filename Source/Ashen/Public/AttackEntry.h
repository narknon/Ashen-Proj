#pragma once
#include "CoreMinimal.h"
#include "AttackEntry.generated.h"

class UAnimMontage;

USTRUCT(BlueprintType)
struct ASHEN_API FAttackEntry {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* AttackMontage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* SecondaryMontage;
    
    FAttackEntry();
};

