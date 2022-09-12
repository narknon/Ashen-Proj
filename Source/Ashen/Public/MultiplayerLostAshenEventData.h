#pragma once
#include "CoreMinimal.h"
#include "AshenEventData.h"
#include "MultiplayerLostAshenEventData.generated.h"

UCLASS(Blueprintable)
class ASHEN_API UMultiplayerLostAshenEventData : public UAshenEventData {
    GENERATED_BODY()
public:
    UMultiplayerLostAshenEventData();
};

