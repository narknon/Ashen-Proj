#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "NetworkActor.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "BralPillar.generated.h"

class AAshenGameMode;
class AActor;
class UPrimitiveComponent;
class AHero;
class ACreature;

UCLASS(Blueprintable)
class ASHEN_API ABralPillar : public ANetworkActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AAshenGameMode* GameMode;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bBralOnPillar;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AHero*> HitHeros;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDebugDroppedPillar;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FallVelocity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector RequestedVelocity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bPillarIsFalling;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ACreature* HeroInRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGuid LinkedHoleGuid;
    
    ABralPillar();
    UFUNCTION(BlueprintCallable)
    void SetPillarFalling(bool bSetTo);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetPillarDropped();
    
    UFUNCTION(BlueprintCallable)
    void OnOverlap(UPrimitiveComponent* ThisComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    
    UFUNCTION(BlueprintCallable)
    void OnMainPillarCrash(const FVector& Location);
    
    UFUNCTION(BlueprintCallable)
    void LightLinkedHole();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void DropPillar();
    
    UFUNCTION(BlueprintCallable)
    FVector CalculateFallVelocity(float DeltaTime);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void BralPillarTriggerFallProxy(FGuid Target);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void BralPillarTriggerFallAuthority();
    
};

