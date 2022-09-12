#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=NavLinkProxy -FallbackName=NavLinkProxy
#include "UObject/NoExportTypes.h"
#include "AshenNavLinkProxy.generated.h"

class AActor;
class UStaticMeshComponent;

UCLASS(Blueprintable)
class ASHEN_API AAshenNavLinkProxy : public ANavLinkProxy {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* UsageActor;
    
    AAshenNavLinkProxy();
    UFUNCTION(BlueprintCallable)
    void LadderLink(AActor* Agent, const FVector& Destination, FName BottomMountSocket, FName TopMountSocket, UStaticMeshComponent* MeshComponent, uint8 ClimbCount);
    
};

