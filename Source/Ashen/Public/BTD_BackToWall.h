#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "BTD_BackToWall.generated.h"

UCLASS(Blueprintable)
class ASHEN_API UBTD_BackToWall : public UBTDecorator {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BackToWallMin;
    
    UBTD_BackToWall();
};

