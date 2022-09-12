#pragma once
#include "CoreMinimal.h"
#include "ENpcType.h"
#include "OnMuiltiplayerNPCSelectedDelegate.generated.h"

class AHero;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnMuiltiplayerNPCSelected, AHero*, _NPC, ENpcType, _NPCType);

