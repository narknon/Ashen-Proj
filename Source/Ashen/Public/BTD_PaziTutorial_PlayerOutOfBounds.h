#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "BTD_PaziTutorial_PlayerOutOfBounds.generated.h"

UCLASS(Blueprintable)
class ASHEN_API UBTD_PaziTutorial_PlayerOutOfBounds : public UBTDecorator {
    GENERATED_BODY()
public:
    UBTD_PaziTutorial_PlayerOutOfBounds();
};

