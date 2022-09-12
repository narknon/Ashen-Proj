#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "BTD_Slavery_MastersAreDead.generated.h"

UCLASS(Blueprintable)
class ASHEN_API UBTD_Slavery_MastersAreDead : public UBTDecorator {
    GENERATED_BODY()
public:
    UBTD_Slavery_MastersAreDead();
};

