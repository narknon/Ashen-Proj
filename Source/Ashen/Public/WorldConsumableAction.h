#pragma once
#include "CoreMinimal.h"
#include "Action.h"
#include "WorldConsumableAction.generated.h"

class AWorldConsumable;

UCLASS(Blueprintable)
class ASHEN_API AWorldConsumableAction : public AAction {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AWorldConsumable* WorldConsumable;
    
    AWorldConsumableAction();
};

