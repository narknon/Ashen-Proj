#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "Engine/DataTable.h"
#include "BTD_IsAttackEnabled.generated.h"

UCLASS(Blueprintable)
class ASHEN_API UBTD_IsAttackEnabled : public UBTDecorator {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle OfAttackType;
    
    UBTD_IsAttackEnabled();
};

