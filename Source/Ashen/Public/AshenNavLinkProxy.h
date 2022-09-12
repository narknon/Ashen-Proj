#pragma once
#include "CoreMinimal.h"
#include "AI/Navigation/NavLinkProxy.h"
#include "AI/Navigation/NavLinkProxy.h"
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

