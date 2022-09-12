#pragma once
#include "CoreMinimal.h"
#include "MultiplayerDoor.h"
#include "QuestStateTagCondition.h"
#include "Engine/EngineTypes.h"
#include "RiakDoor.generated.h"

class AAISpawnRiak;
class UAnimSequence;
class USceneComponent;
class ARiak;
class UBoxComponent;
class AHero;
class AActor;
class UPrimitiveComponent;

UCLASS(Blueprintable)
class ASHEN_API ARiakDoor : public AMultiplayerDoor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AAISpawnRiak* RiakLink;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    USceneComponent* HeroStandingPosition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UBoxComponent* PermanentCollider;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UBoxComponent* RoomLeaveTrigger;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UBoxComponent* RoomEnterTrigger;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequence* DoorCloseSequence;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequence* OpenDoorSequence;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<AActor*> EnteredHeroes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AHero* OpeningHero;
    
    UPROPERTY(EditAnywhere, Transient)
    TWeakObjectPtr<ARiak> Riak;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FQuestStateTagCondition OpenDoorQuestCondition;
    
public:
    ARiakDoor();
    UFUNCTION(BlueprintCallable)
    void OpenDoor(bool bRemoteOpened);
    
    UFUNCTION(BlueprintCallable)
    void OnTriggerOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    
};

