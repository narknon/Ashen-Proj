#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "UObject/NoExportTypes.h"
#include "AIHumanoid.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "AshWraith.generated.h"

class UAIDynamicFlightPath;
class UBoxComponent;
class AAshStatue;
class UParticleSystemComponent;
class UParticleSystem;
class UPrimitiveComponent;
class AActor;
class ACreature;

UCLASS(Blueprintable)
class ASHEN_API AAshWraith : public AAIHumanoid {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UBoxComponent* MainBodyCollision;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UParticleSystemComponent* FlightModeParticles;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* TeleportParticles;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* PostTeleportParticles;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AAshStatue> TeleportAfterImageClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCanTeleportDodge;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TeleportAfterImageLife;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TeleportDodgeMaxCharges;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TeleportDodgeRechargeTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TeleportDodgeFromTargetMin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TeleportDodgeFromTargetMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TeleportDodgeFromTargetHalfAngle;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UAIDynamicFlightPath* DynamicFlightPath;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AAshStatue* LastStatue;
    
public:
    AAshWraith();
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void TeleportAshWraith_Authority(const FVector& ToLocation, const FRotator& ToRotation, bool bBreakAfterImageBefore, bool bBreakAfterImageAfter);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnWraithTeleport(const FVector& FromLocation, const FVector& ToLocation);
    
    UFUNCTION(BlueprintCallable)
    void OnFlightMainBodyBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInFlightMode() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetShivBlendAlpha() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetHeroLockOnLocation(FName LockonPointName, const ACreature* RequestingHero) const;
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void BreakLastAfterImage_Remote();
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void BreakLastAfterImage_Authority();
    
};

