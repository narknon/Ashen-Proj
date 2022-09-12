#pragma once
#include "CoreMinimal.h"
#include "Action.h"
#include "Engine/DataTable.h"
#include "EvadeAction.generated.h"

UCLASS(Blueprintable)
class ASHEN_API AEvadeAction : public AAction {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle EvadeDescriptionDataTable;
    
    AEvadeAction();
};

