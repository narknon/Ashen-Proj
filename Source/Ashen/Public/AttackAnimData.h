#pragma once
#include "CoreMinimal.h"
#include "AttackAnimData.generated.h"

class UAnimMontage;

USTRUCT(BlueprintType)
struct FAttackAnimData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* Loop;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* End;
    
    ASHEN_API FAttackAnimData();
};

