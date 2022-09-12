#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "BTD_Slavery_IsMaster.generated.h"

UCLASS(Blueprintable)
class ASHEN_API UBTD_Slavery_IsMaster : public UBTDecorator {
    GENERATED_BODY()
public:
    UBTD_Slavery_IsMaster();
};

