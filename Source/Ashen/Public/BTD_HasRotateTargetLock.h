#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "BTD_HasRotateTargetLock.generated.h"

UCLASS(Blueprintable)
class ASHEN_API UBTD_HasRotateTargetLock : public UBTDecorator {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsLocked;
    
    UBTD_HasRotateTargetLock();
};

