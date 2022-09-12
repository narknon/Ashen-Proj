#pragma once
#include "CoreMinimal.h"
#include "MultiplayerDoor.h"
#include "BralDoor.generated.h"

class UInteraction;
class ACreature;

UCLASS(Blueprintable)
class ASHEN_API ABralDoor : public AMultiplayerDoor {
    GENERATED_BODY()
public:
    ABralDoor();
    UFUNCTION(BlueprintCallable)
    void OpenDoorInstant();
    
    UFUNCTION(BlueprintCallable)
    void OpenDoor(bool bRemoteOpened);
    
    UFUNCTION(BlueprintCallable)
    void DoorCallback(UInteraction* Source, ACreature* Target);
    
};

