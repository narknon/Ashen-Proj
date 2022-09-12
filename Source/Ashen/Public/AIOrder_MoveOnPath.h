#pragma once
#include "CoreMinimal.h"
#include "AIOrder.h"
#include "AIOrder_MoveOnPath.generated.h"

class UAIAshenPathMoveRequest;

UCLASS(Blueprintable)
class ASHEN_API UAIOrder_MoveOnPath : public UAIOrder {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAIAshenPathMoveRequest* AIAshenPathMoveRequest;
    
public:
    UAIOrder_MoveOnPath();
};

