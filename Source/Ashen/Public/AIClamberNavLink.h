#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "AI/Navigation/NavLinkProxy.h"
#include "UObject/NoExportTypes.h"
#include "EActionState.h"
#include "AI/Navigation/NavLinkProxy.h"
#include "AIClamberNavLink.generated.h"

class AActor;
class AAIJumpNavLink;
class AAction;
class UAISpawnManager;

UCLASS(Blueprintable)
class ASHEN_API AAIClamberNavLink : public ANavLinkProxy {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bForceDrawDebugInEditor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bForceDrawDebugInPIE;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAutoCreateJumpLinkDown;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AAIJumpNavLink> AutoJumpLinkClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ClamberRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ClamberHeightCheckMaxLimit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ClamberHeightCheckMinLimit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float NavLinkOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxCapsuleSize;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AAIJumpNavLink* ChildJumpDownLink;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UAISpawnManager* SpawnManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector ClamberSpot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector ClimbPoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bValidClamber;
    
public:
    AAIClamberNavLink();
protected:
    UFUNCTION(BlueprintCallable)
    void OnTurnToActionStateChanged(const AAction* Source, EActionState Current, EActionState Previous);
    
public:
    UFUNCTION(BlueprintCallable)
    void ClamberLink(AActor* Agent, const FVector& Destination);
    
};

