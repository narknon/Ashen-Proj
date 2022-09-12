#pragma once
#include "CoreMinimal.h"
#include "Critter.h"
#include "Engine/EngineTypes.h"
#include "SmallGroundCritter.generated.h"

class UCritterEscapeZoneProxy;
class USphereComponent;
class AActor;
class UPrimitiveComponent;

UCLASS(Blueprintable)
class ASHEN_API ASmallGroundCritter : public ACritter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinTimeUntilRoam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxTimeUntilRoam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float EscapeZoneSearchRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float EscapeZoneRange;
    
protected:
    UPROPERTY(EditAnywhere, Export, Transient)
    TWeakObjectPtr<UCritterEscapeZoneProxy> TargetEscapeZone;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    USphereComponent* InteractionCollider;
    
public:
    ASmallGroundCritter();
    UFUNCTION(BlueprintCallable)
    void OnOverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    
};

