#pragma once
#include "CoreMinimal.h"
#include "AshenEventDelegateDelegate.generated.h"

class UAshenEventData;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_OneParam(FAshenEventDelegate, UAshenEventData*, EventData);

