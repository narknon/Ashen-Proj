#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "EGefnState.h"
#include "GefnHighlands.generated.h"

class AHero;
class USceneComponent;
class USkeletalMeshComponent;
class UAnimMontage;

UCLASS(Blueprintable)
class ASHEN_API AGefnHighlands : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    USceneComponent* SceneNode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    USceneComponent* GefnSceneNode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* GefnMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EGefnState CurrentState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* EmergeMontage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AHero* TriggeringHero;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HeadLookYaw;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HeadLookPitch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector HeadTrackOrigin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRotator HeadTrackOriginRotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bExitRequested;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector LookTarget;
    
    AGefnHighlands();
    UFUNCTION(BlueprintCallable)
    void UpdateHeadLook();
    
    UFUNCTION(BlueprintCallable)
    void SetState(EGefnState NewCurrentState);
    
    UFUNCTION(BlueprintCallable)
    void QueueExit();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HackRepositionGefn();
    
    UFUNCTION(BlueprintCallable)
    void Emerge(AHero* TriggerHero);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BeginEmerge();
    
};

