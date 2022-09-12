#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "Engine/DataTable.h"
#include "AIMovementManoeuvre.generated.h"

UCLASS(Blueprintable)
class ASHEN_API UAIMovementManoeuvre : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle Description;
    
    UAIMovementManoeuvre();
};

