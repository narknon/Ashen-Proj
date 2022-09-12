#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=NavLinkProxy -FallbackName=NavLinkProxy
#include "UObject/NoExportTypes.h"
#include "EActionState.h"
#include "AIJumpNavLink.generated.h"

class AActor;
class USphereComponent;
class AAction;
class UAISpawnManager;

UCLASS(Blueprintable)
class ASHEN_API AAIJumpNavLink : public ANavLinkProxy {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    USphereComponent* JumpApex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    USphereComponent* JumpTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float JumpRootMotionMod;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bForceDrawDebugInEditor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bForceDrawDebugInPIE;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UAISpawnManager* SpawnManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector GroundSpot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bValidJump;
    
public:
    AAIJumpNavLink();
protected:
    UFUNCTION(BlueprintCallable)
    void OnTurnToActionStateChanged(const AAction* Source, EActionState Current, EActionState Previous);
    
public:
    UFUNCTION(BlueprintCallable)
    void JumpLink(AActor* Agent, const FVector& Destination);
    
};

