#pragma once
#include "CoreMinimal.h"
#include "CreaturePlayFootstepSoundSignatureDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FCreaturePlayFootstepSoundSignature, bool&, ShouldPlaySound);

