#pragma once
#include "CoreMinimal.h"
#include "NetworkDoor.h"
#include "InteractionDelegateDelegate.h"
#include "Engine/EngineTypes.h"
#include "MultiplayerDoor.generated.h"

class UInteraction;
class USkeletalMeshComponent;
class UAnimMontage;
class UBoxComponent;
class UPrimitiveComponent;
class AActor;
class ACreature;
class UObject;

UCLASS(Blueprintable)
class ASHEN_API AMultiplayerDoor : public ANetworkDoor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* DoorMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* DoorOpenMontage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UBoxComponent* DoorTrigger;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UBoxComponent* DoorCollider;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UInteraction* DoorInteraction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FInteractionDelegate DoorInteractionDelegate;
    
    AMultiplayerDoor();
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerOpenDoor();
    
    UFUNCTION(BlueprintCallable)
    void OpenDoor(bool bRemoteOpened);
    
    UFUNCTION(BlueprintCallable)
    void OnOverlapBegin(AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    
    UFUNCTION(BlueprintCallable)
    TArray<UInteraction*> GetInteractions_Implementation(ACreature* Target, UObject* Context);
    
    UFUNCTION(BlueprintCallable)
    void DoorCallback(UInteraction* Source, ACreature* Target);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientOpenDoor();
    
};

