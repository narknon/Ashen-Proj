#pragma once
#include "CoreMinimal.h"
#include "NetworkDoor.h"
#include "InteractionDelegateDelegate.h"
#include "UObject/NoExportTypes.h"
#include "CooperativeDoor.generated.h"

class UInteraction;
class UAnimMontage;
class UBoxComponent;
class UStaticMeshComponent;
class USkeletalMeshComponent;
class USceneComponent;
class AHero;
class AHumanoid;
class ACreature;
class UObject;

UCLASS(Blueprintable)
class ASHEN_API ACooperativeDoor : public ANetworkDoor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UAnimMontage*> DungeonDoorIntroAnimations;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UAnimMontage*> DungeonDoorLoopAnimations;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UAnimMontage*> DungeonDoorEndAnimations;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UAnimMontage*> DungeonDoorCancelAnimations;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString DungeonDoorName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOpen;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SeperationDistInMetersToClose;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InternalDistInMetersToClose;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ExternalDistInMetersToClose;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UInteraction* SwitchOneInteraction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FInteractionDelegate SwitchOneDelegate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UInteraction* SwitchTwoInteraction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FInteractionDelegate SwitchTwoDelegate;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* DoorFrame;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* DoorSlider;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UBoxComponent* SwitchOneTrigger;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    USceneComponent* SwitchOneMontageOrigin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UBoxComponent* SwitchTwoTrigger;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    USceneComponent* SwitchTwoMontageOrigin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UBoxComponent* InternalTrigger;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UBoxComponent* ExternalTrigger;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* OpenAnimation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* CloseAnimation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UBoxComponent* DoorNavBlocker;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AHero* SwitchOneHero;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AHero* SwitchTwoHero;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AHumanoid* LocalSwitchUser;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDebugSinglePlayerActivation;
    
    ACooperativeDoor();
    UFUNCTION(Client, Reliable)
    void SynchronizeRemote(uint8 HostSwitch, bool bIsOpen);
    
    UFUNCTION(BlueprintCallable)
    void SwitchCallback(UInteraction* Source, ACreature* Target);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void StartOpenDoorClient(FGuid _Guid);
    
    UFUNCTION(Client, Reliable)
    void ResetDoorClient(uint8 TriggerID);
    
    UFUNCTION(Reliable, Server, WithValidation)
    void ResetDoorAuthority(uint8 TriggerID);
    
private:
    UFUNCTION(Client, Reliable)
    void RemoteSwitchEnabled(uint8 SwitchNumber, bool Enabled);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void RemoteOpenDoor();
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void RemoteCloseDoor();
    
public:
    UFUNCTION(BlueprintCallable)
    void OpenThroughQuest();
    
    UFUNCTION(BlueprintCallable)
    void OpenDoorSolo();
    
private:
    UFUNCTION(BlueprintCallable)
    void InitiateOpenLogic();
    
public:
    UFUNCTION(BlueprintCallable)
    TArray<UInteraction*> GetInteractions_Implementation(ACreature* Target, UObject* Context);
    
    UFUNCTION(BlueprintImplementableEvent)
    void DoorTriggerHit(uint8 TriggerID);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void DoorOpenSequenceStart();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void DoorOpening();
    
private:
    UFUNCTION(BlueprintCallable)
    void CheckForSwitchActionInteruption();
    
public:
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void CancelActionClient(FGuid _Guid);
    
    UFUNCTION(Reliable, Server, WithValidation)
    void AuthoritySwitchTriggeredGuid(uint8 SwitchNumber, FGuid Guid);
    
};

