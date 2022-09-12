#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "LavaDamageActor.generated.h"

class UAISpawnManager;
class ACreature;

UCLASS(Blueprintable)
class ASHEN_API ALavaDamageActor : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DamageTickTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DamageAmount;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UAISpawnManager* SpawnManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<ACreature*> OverlappingCreatures;
    
public:
    ALavaDamageActor();
protected:
    UFUNCTION(BlueprintCallable)
    void HandleEndOverlap(AActor* OverlappedActor, AActor* OtherActor);
    
    UFUNCTION(BlueprintCallable)
    void HandleBeginOverlap(AActor* OverlappedActor, AActor* OtherActor);
    
};

