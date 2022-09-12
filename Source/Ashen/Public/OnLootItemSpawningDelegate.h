#pragma once
#include "CoreMinimal.h"
#include "LootDrop.h"
#include "OnLootItemSpawningDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnLootItemSpawning, const FLootDrop&, LootItem, float&, AlteredDropChance);

