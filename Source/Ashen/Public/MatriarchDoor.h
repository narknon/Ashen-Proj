#pragma once
#include "CoreMinimal.h"
#include "MultiplayerDoor.h"
#include "Engine/EngineTypes.h"
#include "MatriarchDoor.generated.h"

class UAnimMontage;
class UBoxComponent;
class AMatriarch;
class USceneComponent;
class UAnimSequence;
class AHero;
class AActor;
class UPrimitiveComponent;
class UInteraction;
class ACreature;

UCLASS(Blueprintable)
class ASHEN_API AMatriarchDoor : public AMultiplayerDoor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* HeroDoorOpenMontage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    USceneComponent* HeroStandingPosition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UBoxComponent* PermanentCollider;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UBoxComponent* RoomEnterTrigger;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UBoxComponent* RoomEnterSideTrigger1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UBoxComponent* RoomEnterSideTrigger2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UBoxComponent* RoomLeaveTrigger;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequence* DoorCloseSequence;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequence* OpenDoorSequence;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StandingDistanceFromDoor;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<AActor*> EnteredHeroes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AHero* OpeningHero;
    
    UPROPERTY(EditAnywhere, Transient)
    TWeakObjectPtr<AMatriarch> Matriarch;
    
public:
    AMatriarchDoor();
    UFUNCTION(BlueprintCallable)
    void OpenDoor(bool bRemoteOpened);
    
    UFUNCTION(BlueprintCallable)
    void OnTriggerOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void OnFightStartServer();
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void OnFightStartClient();
    
    UFUNCTION(BlueprintCallable)
    void DoorCallback(UInteraction* Source, ACreature* Target);
    
};

