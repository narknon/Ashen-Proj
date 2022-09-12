#pragma once
#include "CoreMinimal.h"
#include "MultiplayerDoor.h"
#include "QuestStateTagCondition.h"
#include "Engine/EngineTypes.h"
#include "SoGDoor.generated.h"

class UAnimMontage;
class UBoxComponent;
class ACreature;
class USceneComponent;
class AAISpawnShadowOfGod;
class UAnimSequence;
class AActor;
class AHero;
class AShadowOfGod;
class UPrimitiveComponent;
class UInteraction;

UCLASS(Blueprintable)
class ASHEN_API ASoGDoor : public AMultiplayerDoor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsExitDoor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FQuestStateTagCondition ExitDoorOpenTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AAISpawnShadowOfGod* ShadowOfGodLink;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StandingDistanceFromDoor;
    
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
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<AActor*> EnteredHeroes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AHero* OpeningHero;
    
    UPROPERTY(EditAnywhere, Transient)
    TWeakObjectPtr<AShadowOfGod> ShadowOfGod;
    
public:
    ASoGDoor();
    UFUNCTION(BlueprintCallable)
    void OpenDoor(bool bRemoteOpened);
    
    UFUNCTION(BlueprintCallable)
    void OnTriggerOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    
    UFUNCTION(BlueprintCallable)
    void DoorCallback(UInteraction* Source, ACreature* Target);
    
};

