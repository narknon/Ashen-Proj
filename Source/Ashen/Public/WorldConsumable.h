#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "InteractionSource.h"
#include "BuffEffectParameter.h"
#include "UObject/NoExportTypes.h"
#include "WorldConsumable.generated.h"

class UParticleSystem;
class USceneComponent;
class UIndicatorComponent;
class UBoxComponent;
class UInteraction;
class AHero;
class ACreature;

UCLASS(Blueprintable)
class ASHEN_API AWorldConsumable : public AActor, public IInteractionSource {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    USceneComponent* SceneComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UIndicatorComponent* IndicatorMeshComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UBoxComponent* InteractionCollisionComponent;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UInteraction* Interaction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FBuffEffectParameter> BuffEffects;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* EffectOnLoot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGuid Guid;
    
public:
    AWorldConsumable();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnConsumed(AHero* Hero);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsConsumed() const;
    
private:
    UFUNCTION(BlueprintCallable)
    void InteractionCallback(UInteraction* Source, ACreature* Target);
    
    
    // Fix for true pure virtual functions not being implemented
};

