#pragma once
#include "CoreMinimal.h"
#include "NetworkActor.h"
#include "NetworkPointer.h"
#include "NetworkedTrigger.generated.h"

class UBoxComponent;
class AActor;

UCLASS(Blueprintable, Config=Game)
class ASHEN_API ANetworkedTrigger : public ANetworkActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UBoxComponent* Trigger;
    
    ANetworkedTrigger();
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnLoadedTriggered();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnGameplayTrigger(AActor* OtherActor);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientGameTrigger(FNetworkPointer NetworkPointer);
    
    UFUNCTION(BlueprintCallable)
    void ActorBeginOverlap(AActor* OverlappedActor, AActor* OtherActor);
    
};

