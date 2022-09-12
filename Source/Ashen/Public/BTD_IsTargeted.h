#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "EAIRelationship.h"
#include "BTD_IsTargeted.generated.h"

UCLASS(Blueprintable)
class ASHEN_API UBTD_IsTargeted : public UBTDecorator {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAIRelationship OfRelationship;
    
    UBTD_IsTargeted();
};

