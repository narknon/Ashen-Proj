#pragma once
#include "CoreMinimal.h"
#include "AshenEventDynamicMulticastDelegateDelegate.generated.h"

class UAshenEventData;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FAshenEventDynamicMulticastDelegate, UAshenEventData*, EventData);

