#pragma once
#include "CoreMinimal.h"
#include "EPaziTutorialStep.h"
#include "PaziTutorialStateChangeSignatureDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FPaziTutorialStateChangeSignature, EPaziTutorialStep, TutorialState);

