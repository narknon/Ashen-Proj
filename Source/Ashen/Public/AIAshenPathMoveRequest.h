#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "UObject/Object.h"
#include "UObject/NoExportTypes.h"
#include "AIAshenPathMoveRequest.generated.h"

class ACreature;
class UAIMovementManoeuvre;
class UNavigationQueryFilter;

UCLASS(Blueprintable)
class ASHEN_API UAIAshenPathMoveRequest : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ACreature* CreatureOwner;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UNavigationQueryFilter> NavFilter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVector> Path;
    
    UPROPERTY(EditAnywhere)
    TWeakObjectPtr<UAIMovementManoeuvre> AIMovementManoeuvre;
    
public:
    UAIAshenPathMoveRequest();
};

