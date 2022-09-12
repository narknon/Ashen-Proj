#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "GameFramework/Actor.h"
#include "InteractionDelegateDelegate.h"
#include "InteractionSource.h"
#include "ELootContainerType.h"
#include "EQuestItem.h"
#include "LootActor.generated.h"

class AHero;
class UAshenUserWidget;
class UInteraction;
class USceneComponent;
class ULootBoxComponent;
class UIndicatorComponent;
class UBoxComponent;
class UParticleSystem;
class ALootActor;
class ACreature;
class UObject;

UCLASS(Blueprintable)
class ASHEN_API ALootActor : public AActor, public IInteractionSource {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UInteraction* LootInteraction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FInteractionDelegate LootInteractionDelegate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    USceneComponent* SceneComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    ULootBoxComponent* LootBoxComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UIndicatorComponent* IndicatorComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UAshenUserWidget> LootUIWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UBoxComponent* InteractionCollision;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* EffectOnLoot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ELootContainerType LootType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ALootActor*> CombinedLoot;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ACreature* DroppingCreature;
    
public:
    ALootActor();
    UFUNCTION(BlueprintCallable)
    void UpdateIcon();
    
    UFUNCTION(BlueprintCallable)
    void OnSpawnedByCreature(ACreature* SpawningCreature);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnOpenLootBox(ACreature* _Creature);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnLootEmpty();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnLootClosed();
    
public:
    UFUNCTION(BlueprintCallable)
    void LootOpenCallback(UInteraction* Source, ACreature* Target);
    
    UFUNCTION(BlueprintCallable)
    void LootClosedCallback(AHero* Hero);
    
    UFUNCTION(BlueprintCallable)
    void LerpToCreatureMeshPosition(float DeltaSeconds, float LerpSpeed);
    
    UFUNCTION(BlueprintCallable)
    TArray<EQuestItem> GetQuestItemsInside();
    
    UFUNCTION(BlueprintCallable)
    TArray<UInteraction*> GetInteractions_Implementation(ACreature* Target, UObject* Context);
    
    
    // Fix for true pure virtual functions not being implemented
};

