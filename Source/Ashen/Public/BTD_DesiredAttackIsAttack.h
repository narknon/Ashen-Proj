#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "Engine/DataTable.h"
#include "BTD_DesiredAttackIsAttack.generated.h"

UCLASS(Blueprintable)
class ASHEN_API UBTD_DesiredAttackIsAttack : public UBTDecorator {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle OfAttackType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FDataTableRowHandle> OrAttackType;
    
    UBTD_DesiredAttackIsAttack();
};

