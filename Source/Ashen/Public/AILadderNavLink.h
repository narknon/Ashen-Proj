#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=NavLinkProxy -FallbackName=NavLinkProxy
#include "UObject/NoExportTypes.h"
#include "AILadderNavLink.generated.h"

class AActor;
class ALadder;

UCLASS(Blueprintable)
class ASHEN_API AAILadderNavLink : public ANavLinkProxy {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ALadder* OwningLadder;
    
public:
    AAILadderNavLink();
    UFUNCTION(BlueprintCallable)
    void LadderLink(AActor* Agent, const FVector& Destination);
    
};

