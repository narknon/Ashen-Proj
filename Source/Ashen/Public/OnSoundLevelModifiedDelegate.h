#pragma once
#include "CoreMinimal.h"
#include "ESoundLevel.h"
#include "OnSoundLevelModifiedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnSoundLevelModified, ESoundLevel&, _soundLevel);

