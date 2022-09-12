#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "Engine/DataTable.h"
#include "BTT_SetAttacksEnabled.generated.h"

UCLASS(Blueprintable)
class ASHEN_API UBTT_SetAttacksEnabled : public UBTTaskNode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FDataTableRowHandle> Attacks;
    
    UBTT_SetAttacksEnabled();
};

