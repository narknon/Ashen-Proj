#pragma once
#include "CoreMinimal.h"
#include "NetworkActor.h"
#include "QuestStateTag.h"
#include "MultiplayerCinematicTrigger.generated.h"

class UBoxComponent;
class ULevelSequence;
class UQuestLine;
class AActor;

UCLASS(Blueprintable)
class ASHEN_API AMultiplayerCinematicTrigger : public ANetworkActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UBoxComponent* TriggerComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ULevelSequence* LevelSequence;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ULevelSequence* AlternativeLevelSequence;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DisconnectSeconds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnableDisconnectTimer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UQuestLine* QuestLine;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FQuestStateTag QuestStateTag;
    
public:
    AMultiplayerCinematicTrigger();
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void HostOverlap(bool bEntered);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ClientOverlap(bool bEntered);
    
    UFUNCTION(BlueprintCallable)
    void ActorEndOverlap(AActor* OverlappedActor, AActor* OtherActor);
    
    UFUNCTION(BlueprintCallable)
    void ActorBeginOverlap(AActor* OverlappedActor, AActor* OtherActor);
    
};

