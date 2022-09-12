#pragma once
#include "CoreMinimal.h"
#include "BTT_AshenTurnTo.h"
#include "EAIRelationship.h"
#include "BTT_TurnToClosestCreature.generated.h"

UCLASS(Blueprintable)
class ASHEN_API UBTT_TurnToClosestCreature : public UBTT_AshenTurnTo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAIRelationship OfRelationship;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EAIRelationship> OrRelationship;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bMustBeVisible;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bMustBeDiscovered;
    
    UBTT_TurnToClosestCreature();
};

