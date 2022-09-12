#pragma once
#include "CoreMinimal.h"
#include "AIOrder_MoveOnPath.h"
#include "AIOrder_MoveOnPath_ToSurround.generated.h"

UCLASS(Blueprintable)
class ASHEN_API UAIOrder_MoveOnPath_ToSurround : public UAIOrder_MoveOnPath {
    GENERATED_BODY()
public:
    UAIOrder_MoveOnPath_ToSurround();
};

