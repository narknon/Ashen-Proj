#pragma once
#include "CoreMinimal.h"
#include "EmoteSignatureDelegate.generated.h"

class UAnimMontage;
class ACreature;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FEmoteSignature, ACreature*, Source, UAnimMontage*, Montage);

