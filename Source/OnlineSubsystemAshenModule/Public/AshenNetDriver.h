#pragma once
#include "CoreMinimal.h"
#include "IpNetDriver.h"
#include "AshenNetDriver.generated.h"

UCLASS(Blueprintable, NonTransient)
class UAshenNetDriver : public UIpNetDriver {
    GENERATED_BODY()
public:
    UAshenNetDriver();
};

