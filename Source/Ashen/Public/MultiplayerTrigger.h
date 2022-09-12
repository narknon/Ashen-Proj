#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MultiplayerTrigger.generated.h"

class AHero;
class UBoxComponent;
class AAshenGameMode;
class AAshenGameState;

UCLASS(Blueprintable, Config=Game)
class ASHEN_API AMultiplayerTrigger : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UBoxComponent* RootTrigger;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AAshenGameMode* GameMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AAshenGameState* GameState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDisconnectOnEnter;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AHero* OverlappingHero;
    
public:
    AMultiplayerTrigger();
    UFUNCTION(BlueprintCallable)
    void ActorEndOverlap(AActor* OverlappedActor, AActor* OtherActor);
    
    UFUNCTION(BlueprintCallable)
    void ActorBeginOverlap(AActor* OverlappedActor, AActor* OtherActor);
    
};

