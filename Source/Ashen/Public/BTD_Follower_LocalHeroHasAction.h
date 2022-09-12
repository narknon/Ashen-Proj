#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "EActionType.h"
#include "BTD_Follower_LocalHeroHasAction.generated.h"

UCLASS(Blueprintable)
class ASHEN_API UBTD_Follower_LocalHeroHasAction : public UBTDecorator {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EActionType HasActionType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EActionType> OrActionType;
    
    UBTD_Follower_LocalHeroHasAction();
};

