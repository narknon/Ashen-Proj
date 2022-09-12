#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "BTT_PerformDesiredAttack.h"
#include "BTT_PerformMatriarchAttack.generated.h"

UCLASS(Blueprintable)
class ASHEN_API UBTT_PerformMatriarchAttack : public UBTT_PerformDesiredAttack {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FDataTableRowHandle> EnsureAttackIsNotThese;
    
    UBTT_PerformMatriarchAttack();
};

