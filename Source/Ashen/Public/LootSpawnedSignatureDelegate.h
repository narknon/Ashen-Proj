#pragma once
#include "CoreMinimal.h"
#include "LootSpawnedSignatureDelegate.generated.h"

class ACreature;
class ALootActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FLootSpawnedSignature, ACreature*, Source, ALootActor*, LootBox);

