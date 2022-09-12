#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "BTD_MatriarchWantsFightReset.generated.h"

UCLASS(Blueprintable)
class ASHEN_API UBTD_MatriarchWantsFightReset : public UBTDecorator {
    GENERATED_BODY()
public:
    UBTD_MatriarchWantsFightReset();
};

