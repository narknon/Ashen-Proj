#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "EAIRelationship.h"
#include "BTT_SilentAlertAlliesOfCreatures.generated.h"

UCLASS(Blueprintable)
class ASHEN_API UBTT_SilentAlertAlliesOfCreatures : public UBTTaskNode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAIRelationship OfRelationship;
    
    UBTT_SilentAlertAlliesOfCreatures();
};

