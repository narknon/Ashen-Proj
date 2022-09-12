#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "AIFootIKPelvisDescription.h"
#include "AIFootIKDescription.h"
#include "AIFootIKState.h"
#include "AIFootIKStepModeSettings.h"
#include "AIFootIKPelvisState.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "EAIFootIKStepMode.h"
#include "AIFootIKPelvisResult.h"
#include "AIFootIKResult.h"
#include "AshenAIFootIKComponent.generated.h"

class ACreature;
class USkeletalMeshComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ASHEN_API UAshenAIFootIKComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnableOnBeginPlay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bTraceToComplex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bStabilizeIdleOnStop;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAIFootIKDescription> AvailableFeet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName RootBoneName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CollisionCorrectionRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RootGroundOffsetZ;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAIFootIKPelvisDescription MasterPelvis;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAIFootIKPelvisDescription> SlavePelvis;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAIFootIKPelvisDescription LastSlavePelvis;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAIFootIKStepModeSettings StairStepSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAIFootIKStepModeSettings SlopeStepSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StepModeBlendRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FlatGroundCutOff;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinGroundDifferenceForStepCalc;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SpineCorrectionAlpha;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float IdleStabilzeAfterTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TeleportResetDistance;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ACreature* Creature;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, Transient, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* SkelMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FName, FAIFootIKState> FeetState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FAIFootIKPelvisState MasterPelvisState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FAIFootIKPelvisState SlavePelvisState;
    
public:
    UAshenAIFootIKComponent();
    UFUNCTION(BlueprintCallable)
    void UpdateIK(float DeltaTime);
    
    UFUNCTION(BlueprintCallable)
    void ResetIK();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetSteppingSpeedMod() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetPelvisState(FName BoneName, FVector& PelvisLocalOffsetOut, FRotator& PelvisLocalRotationOut, FVector& PelvisSocketOut) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetPelvisLocalOffset(FVector& PelvisLocalOffsetOut) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetLocomotionPlayRateMod() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetLeadingFoot() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetFootState(FName BoneName, FVector& FootLocationOut, FVector& JointLocationOut, bool& bLocked) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetCurrentSteppingAlpha() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EAIFootIKStepMode GetCurrentStepMode() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetCurrentSlopeAlpha() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetCurrentPelvisResult(FName BoneName, FAIFootIKPelvisResult& Result) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetCurrentFootResult(FName BoneName, FAIFootIKResult& Result) const;
    
};

