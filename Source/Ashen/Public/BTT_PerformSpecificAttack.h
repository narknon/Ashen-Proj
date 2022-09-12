#pragma once
#include "CoreMinimal.h"
#include "BTT_Action.h"
#include "Engine/DataTable.h"
#include "BTT_PerformSpecificAttack.generated.h"

UCLASS(Blueprintable)
class ASHEN_API UBTT_PerformSpecificAttack : public UBTT_Action {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle AttackDataRow;
    
    UBTT_PerformSpecificAttack();
};

