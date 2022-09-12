#pragma once
#include "CoreMinimal.h"
#include "BTT_Action.h"
#include "Engine/DataTable.h"
#include "BTT_ForceAttack.generated.h"

UCLASS(Blueprintable)
class ASHEN_API UBTT_ForceAttack : public UBTT_Action {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle AttackDescription;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bFailTaskOnAttackMiss;
    
    UBTT_ForceAttack();
};

