#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "EAIRelationship.h"
#include "UObject/NoExportTypes.h"
#include "BTD_HasAlliesUnawareOfTarget.generated.h"

UCLASS(Blueprintable)
class ASHEN_API UBTD_HasAlliesUnawareOfTarget : public UBTDecorator {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAIRelationship OfRelationship;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D SeenForTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TimeSinceLostSightMax;
    
    UBTD_HasAlliesUnawareOfTarget();
};

