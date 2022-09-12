#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "EPaziTutorialStep.h"
#include "BTD_PaziTutorial_IsOnStep.generated.h"

UCLASS(Blueprintable)
class ASHEN_API UBTD_PaziTutorial_IsOnStep : public UBTDecorator {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPaziTutorialStep OnTutorialStep;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EPaziTutorialStep> OrOnStep;
    
public:
    UBTD_PaziTutorial_IsOnStep();
};

