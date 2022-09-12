#pragma once
#include "CoreMinimal.h"
#include "NetworkActor.h"
#include "InteractionSource.h"
#include "NetworkDoor.generated.h"

class UObject;
class AAshenGameMode;
class UInteraction;
class ACreature;

UCLASS(Blueprintable)
class ASHEN_API ANetworkDoor : public ANetworkActor, public IInteractionSource {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AAshenGameMode* GameMode;
    
public:
    ANetworkDoor();
    UFUNCTION(BlueprintCallable)
    TArray<UInteraction*> GetInteractions_Implementation(ACreature* Target, UObject* Context);
    
    
    // Fix for true pure virtual functions not being implemented
};

