#pragma once
#include "CoreMinimal.h"
#include "GameFramework/PhysicsVolume.h"
#include "AshenKillVolume.generated.h"

UCLASS(Blueprintable)
class ASHEN_API AAshenKillVolume : public APhysicsVolume {
    GENERATED_BODY()
public:
    AAshenKillVolume();
};

