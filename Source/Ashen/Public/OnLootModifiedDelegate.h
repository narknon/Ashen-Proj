#pragma once
#include "CoreMinimal.h"
#include "OnLootModifiedDelegate.generated.h"

class ULootBoxComponent;
class ACreature;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnLootModified, ULootBoxComponent*, _lootComp, ACreature*, _lootOwner);

