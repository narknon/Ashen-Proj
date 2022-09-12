#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "BTT_LookoutGiveReport.generated.h"

UCLASS(Blueprintable)
class ASHEN_API UBTT_LookoutGiveReport : public UBTTaskNode {
    GENERATED_BODY()
public:
    UBTT_LookoutGiveReport();
};

