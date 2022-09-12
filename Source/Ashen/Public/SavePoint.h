#pragma once
#include "CoreMinimal.h"
#include "TravelPoint.h"
#include "InteractionSource.h"
#include "ETravelPointName.h"
#include "Engine/EngineTypes.h"
#include "SavePoint.generated.h"

class UAISpawnManager;
class UStaticMeshComponent;
class UInteraction;
class UAshenCameraSequenceComponent;
class USphereComponent;
class UBoxComponent;
class USceneComponent;
class AHero;
class UPrimitiveComponent;
class AActor;
class ACreature;

UCLASS(Blueprintable)
class ASHEN_API ASavePoint : public ATravelPoint, public IInteractionSource {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* Mesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UAshenCameraSequenceComponent* CameraSequenceComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    USphereComponent* ActivationCollision;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UBoxComponent* InteractionCollision;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    USceneComponent* InteractionPosition;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bStartActivated;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText OnProgressSavedText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxInteractionAngleDegrees;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UInteraction* Interaction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UAISpawnManager* AISpawnManager;
    
public:
    ASavePoint();
    UFUNCTION(BlueprintCallable)
    void RevealAssosiatedArea(AHero* Hero, bool ForceUI);
    
    UFUNCTION(BlueprintCallable)
    void RestAt(AHero* Hero, bool bPlayEffects);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnOverlapActivationCollision(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnMadeLastActive(AHero* Hero);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnInteracted(UInteraction* Source, ACreature* Target);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnHeroSit(AHero* Hero);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnActivated(AHero* Hero);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsTravelPoint() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsLastActiveSavePoint() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsActivated() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ETravelPointName GetSavePointName() const;
    
    UFUNCTION(BlueprintCallable)
    void ForceActivation(bool bSetAsLastRestPlace);
    
    UFUNCTION(BlueprintCallable)
    void ActivateInWorld(AHero* Hero, bool bDisplayUIFanfare);
    
    
    // Fix for true pure virtual functions not being implemented
};

