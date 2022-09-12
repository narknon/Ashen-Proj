#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "AISpawnBase.h"
#include "InteractionSource.h"
#include "ElderDarkSpawnerLootOpenedDelegateDelegate.h"
#include "UObject/NoExportTypes.h"
#include "InteractionDelegateDelegate.h"
#include "AISpawnElderDark.generated.h"

class ULootBoxComponent;
class UStaticMeshComponent;
class AElderDark;
class USceneComponent;
class UDestructibleComponent;
class AHero;
class UAshenUserWidget;
class UBoxComponent;
class UInteraction;
class UAIProxy_ElderDark_Arena;
class UAIProxy_ElderDark_Pillar;
class UAIProxy_ElderDark_Hole;
class ACreature;
class UObject;

UCLASS(Blueprintable)
class ASHEN_API AAISpawnElderDark : public AAISpawnBase, public IInteractionSource {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<AElderDark> AIClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDebugSpawn;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FElderDarkSpawnerLootOpenedDelegate LootOpenedDelegate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    ULootBoxComponent* LootComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UDestructibleComponent* DestructibleMeshComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    USceneComponent* ElderDarkSpawnLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* IndicatorMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UAshenUserWidget> LootUIWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UBoxComponent* InteractionCollision;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGuid> ValidProxyGuids;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UInteraction* LootInteraction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FInteractionDelegate LootInteractionDelegate;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, Transient, meta=(AllowPrivateAccess=true))
    UAIProxy_ElderDark_Arena* ArenaProxy;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, Transient, meta=(AllowPrivateAccess=true))
    TArray<UAIProxy_ElderDark_Pillar*> PillarProxies;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, Transient, meta=(AllowPrivateAccess=true))
    TArray<UAIProxy_ElderDark_Hole*> HoleProxies;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AElderDark* ElderDark;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TSubclassOf<AElderDark> AIClassRef;
    
public:
    AAISpawnElderDark();
    UFUNCTION(BlueprintCallable)
    void LootOpenCallback(UInteraction* Source, ACreature* Target);
    
    UFUNCTION(BlueprintCallable)
    void LootClosedCallback(AHero* Hero);
    
    UFUNCTION(BlueprintCallable)
    TArray<UInteraction*> GetInteractions_Implementation(ACreature* Target, UObject* Context);
    
    
    // Fix for true pure virtual functions not being implemented
};

